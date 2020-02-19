
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

int checknumber(char *input)
{
	int length, i;
	int y = 2;
	int x = 1;

	length = strlen(input);
	for (i = 0; i < length; i++)
	{
		if (!isdigit(input[i]))
		{
			if (toascii(46) == input[i])
			{
				x++;
				if (x == 3)
				{
					printf("Entered input is not a number\n");
					printf("Please enter a number\n");
					x = 1;
					break;
				}
			}
			else
			{
				printf("Entered input is not a number\n");
				printf("Please enter a number\n");
				break;
			}
		}
		if (length == (i + 1))
		{
			y = 1;
		}
	}
	return y;
}

void calc(char *input, float *a, float *c)
{
	float r;
	r = atof(input);
	*a = 3.14 * r * r;
	*c = 2 * 3.14 * r;
	printf("Area = %f\n", *a);
	printf("circumference = %f\n", *c);
}

int main(int argc, char *argv[])
{

	float r, a, c;
	int d;
	int k = 0;
	char input[1000] = "";
	char e[1000] = "";
	int length, i;
	char *g;
	char result[STR_SIZE] = {0};
	int y = 2;
	int x = 1;
	char *z = (char *)"-r";
	char *f = (char *)"-f";
	char *h = (char *)"--help";
	char *b = argv[1];
	char aa[100] = "";
	char cc[100] = "";
	char s2[] = "\\";

	if (argc == 1)
	{
		printf("enter radius :\n");
		while (y == 2)
		{
			scanf("%s", input);
			y = checknumber(input);
		}
		r = atof(input);
		a = 3.14 * r * r;
		c = 2 * 3.14 * r;
		printf("Area = %f\n", a);
		printf("circumference = %f\n", c);
		return 0;
	}
	if (argc == 2 && strcmp(b, h) == 0)
	{
		printf("Command format 1 is: -r and a number \n");
		printf("Example: -r 2 \n");
		printf("Command format 2 is: -f and foldername \n");
		printf("Example: -f myfile.csv \n");
		return 0;
	}
	else if (argc == 3 && strcmp(b, f) == 0)
	{
		FILE *openedfile;
		char cwd[PATH_MAX];
		getcwd(cwd, sizeof(cwd));
		snprintf(result, sizeof(result), "%s%s%s", cwd, s2, argv[2]);
		if ((openedfile = fopen(result, "r")) == NULL)
		{
			printf("File could not be opened\n");
			exit(1);
		}
		else
		{
			int bufferLength = 255;
			char buffer[bufferLength];
			FILE *fPtr;
			for (int ii = 0; ii < 4; ii++)
			{
				result[strlen(result) - 1] = '\0';
			}

			snprintf(result, sizeof(result), "%s%s", result, "_result.txt");
			fPtr = fopen(result, "w");
			if (fPtr == NULL)
			{
				/* File not created hence exit */
				printf("Unable to create file.\n");
				exit(EXIT_FAILURE);
			}
			while (fgets(buffer, bufferLength, openedfile))
			{
				k++;
				if (buffer[strlen(buffer) - 1] == '\n')
				{
					buffer[strlen(buffer) - 1] = '\0';
				}
				if (checknumber(buffer) == 2)
				{
					printf("Wrong number in line %i\n", k);
					exit(1);
				}
				calc(buffer, &a, &c);
				printf("%f\n", a);
				snprintf(aa, sizeof(aa), "%s%f\n", "Area = ", a);
				fputs(aa, fPtr);
				snprintf(cc, sizeof(cc), "%s%f\n", "Circumference = ", c);
				fputs(cc, fPtr);
			}
			fclose(fPtr);
			fclose(openedfile);
		}
		return 0;
	}
	else if (argc == 2 || argc > 3 || strcmp(b, z) != 0)
	{
		printf("Wrong command! \n");
		printf("Type --help for more information \n");
		return 0;
	}
	else
	{
		if (checknumber(argv[2]) == 2)
		{
			exit(1);
		}
		calc(argv[2], &a, &c);
	}
}