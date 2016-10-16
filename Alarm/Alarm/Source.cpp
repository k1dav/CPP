#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>
#include<string.h>
#include <conio.h>

struct Alarm_t
{
	int hour, min, sec;
	char message[64];
	bool notified;
};
typedef Alarm_t Alarm;

#define MAX_ARRAY_SIZE 10
Alarm alarms[MAX_ARRAY_SIZE];
int alarmNum = MAX_ARRAY_SIZE;
struct tm *tm1;  //why?

void clearAlarm(Alarm *alarm) {
	alarm->hour = 24;
	alarm->min = 0;
	alarm->sec = 0;
	alarm->message[0] = '\0';
	alarm->notified = false;
}

void createAlarm(int num) {
	assert(num <= MAX_ARRAY_SIZE);
	for (int i = 0; i < alarmNum; i++) {
		clearAlarm(&alarms[i]);
	}
}

void setAlarm(Alarm *alarm, int h, int m, int s, const char *msg) {
	alarm->hour = h;
	alarm->min = m;
	alarm->sec = s;

	assert(strlen(msg) <= 63);
	strcpy(alarm->message, msg);

	alarm->notified = false;
}

void printAlarm(Alarm alarm) {
	char *notified = alarm.notified ? "已通知" : "未通知";
	if (alarm.hour != 24) {
		printf("%02d:%02d:%02d %50s\t%s\n", alarm.hour, alarm.min,
			alarm.sec, alarm.message, notified);
	}
}

void displayAlarms() {
	printf("-------------\n");
	for (int i = 0; i < alarmNum; i++) {
		printAlarm(alarms[i]);
	}
}

void loadAlarms(FILE *oPtr)
{
	int counter = 0;
	/*while (fscanf(oPtr,"%d:%d %s",
		&alarms[counter].hour, &alarms[counter].min, &alarms[counter].message) != EOF) {
		counter++;
	}*/
	int h, m;
	char c[64];
	while (fscanf(oPtr, "%d:%d %s", &h, &m, &c)!=EOF) {
		setAlarm(&alarms[counter], h, m, 0,c);
		counter++;
	}
}

bool alarmTimeUp(Alarm *alarm, struct tm *current) {
	if (current->tm_hour > alarm->hour) return true;
	else if (current->tm_hour == alarm->hour) {
		if (current->tm_min > alarm->min) return true;
		else if (current->tm_min == alarm->min) {
			if (current->tm_sec == alarm->sec) return true;
		}
	}
	return false;
}

void alarmCheck(Alarm *alarm)
{
	if (!alarm->notified) {
		if (alarmTimeUp(alarm, tm1)) {
			printf("alarm time %02d/%02d/%02d is up!!\n", alarm->hour, alarm->min, alarm->sec);
			printf("notify: %s\n", alarm->message);
			alarm->notified = true;
			printAlarm(*alarm);
		}
	}
}

void checkTimeEvent() { //why?
	time_t time1;

	time(&time1);
	tm1 = localtime(&time1);
	printf("%02d/%02d %02d:%02d:%02d\n", tm1->tm_mon + 1, tm1->tm_mday,
		tm1->tm_hour, tm1->tm_min, tm1->tm_sec);

	while (true) {
		if (_kbhit() && _getch() == 'q') {
			break;
		}

		time(&time1);
		tm1 = localtime(&time1);
		for (int i = 0; i < alarmNum; i++) {
			alarmCheck(&alarms[i]);
		}
		if (tm1->tm_hour == 0 && tm1->tm_min == 0 && tm1->tm_sec == 0) {
			for (int i = 0; i < alarmNum; i++) {
				alarms[i].notified = false;
			}
		}
		
	}
}

void main(int argc, char **argv)
{
	FILE *oPtr = fopen(argv[1], "r");
	if (oPtr == NULL) {
		printf("Opened FILE Error.\n");
		exit(1);
	}
	createAlarm(MAX_ARRAY_SIZE);
	loadAlarms(oPtr);
	displayAlarms();
	checkTimeEvent();
}
