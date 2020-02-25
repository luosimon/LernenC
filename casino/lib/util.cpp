#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>
#include <iostream>
#define STR_SIZE 10000
#define DATA_SIZE 10000
#include "util.hpp"

using namespace CASINO;
//int Easy::findposition(char *h, int i, bool j, char l)
int CASINO::checknumber(char *input)
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
                    printf("Entered amount is not a number\n");
                    printf("Please enter a number\n");
                    x = 1;
                    break;
                }
            }
            else
            {
                printf("Entered amount is not a number\n");
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