
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>
#include <iostream>
#include <stdbool.h>
#include "util.hpp"
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#define STR_SIZE 10000
#define DATA_SIZE 10000
using namespace CASINO;
using namespace std;

int main()
{
	int a = 2;

	int c = 3;
	int rightanswer;
	int playeranswer;
	int repeats = 60;
	int random;
	int winstreak = 0;
	float money1, bet1;
	float stakes = 0;
	char money[1000] = "";
	char bet[1000] = "";
	char choice[1000] = "";
	while (a == 2)
	{
		system("cls");
		printf("Please enter the amount of money you want to start with: ");
		cin >> money;
		a = checknumber(money);
		if (a == 2)
		{
			Sleep(2000);
		}
	}
	a = 2;
	money1 = atof(money);
	while (choice[0] != toascii(110))
	{
		c = 3;
		system("cls");
		printf("Rules:\n");
		printf("There are 3 cups below. I will hide a little stone under a certain cup. You have to guess under which cup the stone is. The cups are numbered 1 to 3 from the left.\n");
		printf("You choose the amount of money bet. If you guessed right you get double the amount back. If you guessed wrong you lose the money for the bet.\n");
		printf("If you win you can decide to take your winnings or keep betting. If you decide to raise the stakes and win again you get bonus mutiplier on your winnings. \n");
		printf("If you guessed wrong you will lose all money from that bet.\n");
		printf("Example: Bet 1$ -> Win = 2$\n");
		printf("Stakes: 2$ -> Win = 6$, Stakes: 6$ -> Win = 24$, Stakes 24$...\n");
		printf("      1         2         3   \n");
		printf("   .-----.   .-----.   .-----.   \n");
		printf("   |     |   |     |   |     |   \n");
		printf("   |     |   |     |   |     |   \n");
		printf("   |     |   |     |   |     |   \n");
		printf("\n\n\n");
		printf("Money:%f$            Stakes:%f             Winstreak:%i\n", money1, stakes, winstreak);
		if (stakes == 0.000000)
		{
			printf("Please enter the amount you want to bet:");
			while (a == 2)
			{
				cin >> bet;
				a = checknumber(bet);
				bet1 = atof(bet);
				money1 = money1 - bet1;
				stakes = bet1;
			}
		}
		a = 2;
		for (int b = 0; b < repeats; b++)
		{

			system("cls");
			printf("Money:%f$            Stakes:%f             Winstreak:%i\n", money1, stakes, winstreak);
			printf("      1         2         3   \n");
			printf("   .-----.   .-----.   .-----.   \n");
			printf("   |     |   |     |   |     |   \n");
			printf("   |     |   |     |   |     |   \n");
			printf("   |     |   |     |   |     |   \n");

			random = (rand() % 3) + 1;
			if (random == 1)
			{
				printf("      o                          \n");
			}
			else if (random == 2)
			{
				printf("                o                \n");
			}
			else
			{
				printf("                          o      \n");
			}
			Sleep((70 / (winstreak + 1)));

			system("cls");
			rightanswer = random;
		}
		printf("Where is the stone hidden 1,2 or 3:");

		cin >> playeranswer;
		if (rightanswer == playeranswer)
		{
			printf("Congratulations! You won %f$\n", (stakes * (winstreak + 1)));
			printf("Do you want to keep playing and raise your stakes, take your winnings and play again or stop playing?\n");
			printf("Enter 'r' to raise your stakes\n");
			printf("Enter 't' to take your winnings\n");
			printf("Enter 's' to stop playing\n");
			winstreak = winstreak + 1;
			money1 = (winstreak + 1) * stakes;
			cin >> choice;
			if (toascii(114) == choice[0])
			{
				stakes = (winstreak + 1) * stakes;
				printf("Now your stakes are %f$. Good luck in the next round!", stakes);
				for (c > 0; c--;)
				{
					system("cls");
					printf("The next round will start in %i seconds.", c);
					Sleep(1000);
				}
			}
			else if (toascii(116) == choice[0])
			{
				winstreak = 0;
				printf("You have %f$ money now. Do you want to continue?(y/n)", money1);
				cin >> choice;
				if (toascii(110) == choice[0])
				{
					printf("Thank you for your visit! See you again.");
				}
				else
				{
					for (c > 0; c--;)
					{
						system("cls");
						printf("The next round will start in %i seconds.", c);
						stakes = 0;
						Sleep(1000);
					}
				}
			}
			else
			{
				choice[0] = toascii(110);
				printf("Thank you for your visit! See you again.\n");
			}
		}
		else if (rightanswer != playeranswer)
		{
			winstreak = 0;
			stakes = 0;
			system("cls");
			printf("Wrong answer. You lost %f$.\n");
			if (money1 <= 0)
			{
				printf("You have no more money. Do you want to refill?(y/n): ");
				cin >> choice;
				if (toascii(110) == choice[0])
				{
					printf("Thank you for your visit! See you again.\n");
				}
				else
				{
					while (a == 2)
					{
						system("cls");
						printf("Please enter the amount of money you want to refill with: ");
						cin >> money;
						a = checknumber(money);
						if (a == 2)
						{
							Sleep(2000);
						}
						money1 = atof(money);
					}
					a = 2;
					for (c > 0; c--;)
					{
						system("cls");
						printf("The next round will start in %i seconds.", c);
						Sleep(1000);
					}
				}
			}
			else
			{
				printf("You have %f$ money now. Do you want to continue?(y/n): ", money1);
				cin >> choice;
				if (toascii(110) == choice[0])
				{
					printf("Thank you for your visit! See you again.\n");
				}
				else
				{

					for (c > 0; c--;)
					{
						system("cls");
						printf("The next round will start in %i seconds.", c);
						Sleep(1000);
					}
				}
			}
		}
	}

	return 0;
}