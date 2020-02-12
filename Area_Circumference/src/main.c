  
// To calculate Area and Circumference of a circle
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
	float r, a ,c;
    printf("enter radius :\n");
    char input[1000] = "";
    int length,i;
	int y = 2;
	int x = 1;
	while (y == 2)
	{
    	scanf ("%s", input);
    	length = strlen (input);
    	for (i=0;i<length; i++){
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
}