#pragma once

int counterline(FILE *Ptr);
void filter(FILE *Ptr, char **input, int times);
void write(FILE *fPtr, char content[]);
FILE* open(char fileName[], char type[]);