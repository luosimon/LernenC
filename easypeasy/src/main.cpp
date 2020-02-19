
// To calculate Area and Circumference of a circle
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>
#include <iostream>
#define STR_SIZE 10000
#define DATA_SIZE 10000

int main(int argc, char *argv[])
{
	char input[10000] = "";
	int zeile = 0;
	int length;
	int i = 0;
	int atposition;
	int aenderungposition;
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
		while (y == 1)
		{
			if (buffer[i] != '@')
			{
				i++;
			}
			else
			{
				atposition = i;
				y = 2;
			}
		}
		y = 1;
		buffer2 = buffer;
		while (y == 1)
		{
			if (buffer[i+1] != ' ')
			{

				i++;
			}
			else
			{
				aenderungposition = i;
				i = 0;
				y = 2;
			}
		}
		y = 1;
		buffer2 = buffer + aenderungposition + 1;
		snprintf(aa, sizeof(aa), "%s%i%s%s", "  300.000000    13.160000     2.700000    14.000000  8631.309570  8138.370117 1.037037e+05   114.889999     0.100000 ", zeile, "@4prak.mrcs",  buffer2);
		fputs(aa, fPtr);
	}

	fclose(fPtr);
	fclose(openedfile);
}