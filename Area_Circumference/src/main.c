
// To calculate Area and Circumference of a circle
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>



int checknumber(char *input, int d)
{
	int length, i;
	int y = 2;
	int x = 1;
	if (d == 1)
	{
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
				//return y;
			}
		}
		return y;
	}
	else
	{
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
						exit(1);
					}
				}
				else
				{
					printf("Entered input is not a number\n");
					printf("Please enter a number\n");
					exit(1);
				}
			}
		}
	}
}

int main(int argc, char *argv[])
{

	float r, a, c;
	int d;
	char input[1000] = "";
	int length, i;
	int y = 2;
	int x = 1;
	char *z = (char *)"-r";
	char *h = (char *)"--help";
	char *b = argv[1];

	if (argc == 1)
	{
		printf("enter radius :\n");
		while (y == 2)
		{
			scanf("%s", input);
			y = checknumber(input, 1);
			/*
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
			*/
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
		printf("Command format is: -r and a number \n");
		printf("Example: -r 2 \n");
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
		checknumber(argv[2], 2);
		/*
		length = strlen(argv[2]);
		for (i = 0; i < length; i++)
		{
			if (!isdigit(argv[2][i]))
			{
				if (toascii(46) == argv[2][i])
				{
					x++;
					if (x == 3)
					{
						printf("Entered input is not a number\n");
						printf("Please enter a number\n");
						x = 1;
						exit(1);
					}
				}
				else
				{
					printf("Entered input is not a number\n");
					printf("Please enter a number\n");
					exit(1);
				}
			}
		}
		*/
		r = atof(argv[2]);
		a = 3.14 * r * r;
		c = 2 * 3.14 * r;
		printf("Area = %f\n", a);
		printf("circumference = %f\n", c);
		return 0;
	}

	/*
	printf("enter radius :\n");
	while (y == 2)
	{
    	scanf ("%s", input);
    	length = strlen (input);
    	for (i=0;i<length; i++)
		{
        	if (!isdigit(input[i]))
        	{
				if (toascii(46)==input[i])
				{
					x++;
					if (x == 3)
					{
						printf ("Entered input is not a number\n");
        	    		printf ("Please enter a number\n");
						x = 1;
						break;
					}
				}
				else
				{
					printf ("Entered input is not a number\n");
        	    	printf ("Please enter a number\n");
					break;
				}
        	}
			if (length == (i+1))
			{
				y = 1;
			}
		}
			
	}
	
	r = atof(input);
    a = 3.14*r*r;
    c = 2*3.14*r;
    printf("Area = %f\n",a);
	printf("circumference = %f\n",c);
    return 0;
	*/
}