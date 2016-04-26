#include<stdio.h>

int main(void) {
	int w, x, y = 0, z, d, sum = 0;
	int hin, min, hout, mout;

	printf("請輸入尖峰時間(8:00~10:00)前五分鐘，每分鐘收費費用：");
	scanf("%d", &w);
	printf("請輸入尖峰時間(8:00~10:00)五分鐘後，每分鐘收費費用：");
	scanf("%d", &x);
	printf("請輸入其餘時段，每分鐘收費費用：");
	scanf("%d", &z);
	printf("請輸入單通電話通話時間超過幾小時，通話費以八折計算：");
	scanf("%d", &d);



	char choose = 'y';
	while (choose == 'y' || choose == 'Y') {
		y++;
		printf("請輸入第%d通電話開始通話時間：", y);
		scanf("%d %d", &hin, &min);
		printf("請輸入第%d通電話結束通話時間：", y);
		scanf("%d %d", &hout, &mout);
		while ((hout * 60 + mout) < (hin * 60 + min)) {
			printf("開始時間大於結束時間，請重新輸入第%d通電話的通話時間\n",y);
			printf("請輸入第%d通電話開始通話時間：", y);
			scanf("%d %d", &hin, &min);
			printf("請輸入第%d通電話結束通話時間：", y);
			scanf("%d %d", &hout, &mout);
		}
		int totalstart = hin * 60 + min;
		int totalend = hout * 60 + mout;
		int total = totalend - totalstart;
		printf("總通話時間為：%d小時 %d分鐘\n", total / 60, total % 60);

		float discount = 1;
		if (total > d * 60) {
			discount = 0.8;
		}
		int pay;
		if (totalstart >= 480 && totalend <= 600) {
			
			if (total > 5) {
				pay = ((total - 5) * x + 5 * w)*discount;
				printf("此通通話費需繳%d元\n", pay);
			}
			else {
				pay = w*total*discount;
				printf("此通通話費需繳%d元\n", pay);
			}
		}
		else if (totalstart >= 480 && totalend > 600) {
			if ((600 - totalstart) > 5) {
				pay = ((600 - totalstart - 5) * x + 5 * w + (totalend - 600)*z)*discount;
				printf("此通通話費需繳%d元\n", pay);
			}
			else {
				pay = ((600 - totalstart) * w + (totalend - 600)*z)*discount;
				printf("此通通話費需繳%d元\n", pay);
			}
		}
		else if (totalstart < 480 && totalend <= 600) {
			if ((totalend - 480) > 5) {
				pay = ((totalend - 485)*x + 5 * w + (480 - totalstart)*z)*discount;
				printf("此通通話費需繳%d元\n", pay);
			}
			else {
				pay = ((totalend - 480)*w + (480 - totalstart)*z)*discount;
				printf("此通通話費需繳%d元\n",pay);
			}
		}
		else if (totalstart < 480 && totalend>600) {
			pay = (115 * x + 5 * w + (total - 120)*z)*discount;
			printf("此通通話費需繳%d元\n", pay);
		}
		else {
			pay = total*z;
			printf("此通通話費需繳%d元\n", pay);
		}
		sum += pay;
		printf("是否繼續輸入下一通通話資料(y/n)：");
		scanf("%s", &choose);
	}
	printf("共輸入%d筆通話資料，總營業額為%d元\n", y, sum);

	return 0;
}