
// To calculate Area and Circumference of a circle
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>
#include <iostream>
#include <stdbool.h>
#include "util.hpp"
#define STR_SIZE 10000
#define DATA_SIZE 10000
using namespace Easy;
/*
int findposition(char *h, int i, bool j, char l)
{
	int k;
	int y = 1;
	if (j == true)
	{
		k = 1;
	}
	else
	{
		k = -1;
	}
	while (y == 1)
	{
		if (h[i + k] != l)
		{

			i = i + k;
		}
		else
		{
			y = 2;
		}
	}
	return i;
}
*/
int main(int argc, char *argv[])
{

	char input[10000] = "";
	int zeile = 0;
	int length;
	int i = 0;
	int atposition;
	int aenderunganfang;
	int aenderungende;
	char read[STR_SIZE] = {0};
	char edit[STR_SIZE] = {0};
	int y = 1;
	char aa[10000] = "";
	char s2[] = "\\";
	char cwd[PATH_MAX];
	int bufferLength = 10000;
	char buffer[bufferLength];
	char *buffer2;

	getcwd(cwd, sizeof(cwd));
	snprintf(read, sizeof(read), "%s%s%s", cwd, s2, argv[1]);
	FILE *openedfile;
	snprintf(edit, sizeof(edit), "%s%s%s", cwd, s2, "Edit.txt");
	if ((openedfile = fopen(read, "r")) == NULL)
	{
		printf("File could not be opened\n");
		exit(1);
	}
	FILE *fPtr;
	fPtr = fopen(edit, "w");
	while (fgets(buffer, bufferLength, openedfile))
	{
		if (strlen(buffer) <= 2)
		{
			exit(1);
		}
		zeile++;
		i = 0;
		buffer2 = buffer;
		atposition = findposition(buffer, (i - 1), true, '@');
		aenderunganfang = findposition(buffer, atposition, false, ' ');
		aenderungende = findposition(buffer, atposition, true, ' ');
		buffer2 = buffer + aenderungende + 1;
		buffer[aenderunganfang] = '\0';
		snprintf(aa, sizeof(aa), "%s%i%s%s", buffer, zeile, "@4prak.mrcs", buffer2);
		fputs(aa, fPtr);
	}

	fclose(fPtr);
	fclose(openedfile);
}