#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int loginPage();
void openFile(float point1, float point2, float point3);
int main()
{
	char username[15], password[15], $pw1[15], $pw2[15], ch;
	int recovery, i = 0;
	float point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0;
	int category;
	int review;
	int argentina, botswana, belgium, greece, jamaica, kyrgyzstan, peru, panama, senegal, yemen;
	int afganistan, china, egypt, finland, indonesia, mongolia, norway, saudi, sudan, uzbekistan;
	int bangladesh, bhutan, cyprus, india, iran, lithuania, nigeria, russia, uk, usa;
	int ReturnValue = 0;
	char name[30];

	ReturnValue = loginPage();
	if (ReturnValue == 1)
	{
		printf("-------  Welcome to the quiz game  -------\n\n");

		printf("Choose your category :\n");
		printf(" 1. World \n 2. Nepal\n\n");
		printf("Option : ");
		scanf("%d", &category);
		system("cls");

		if (category == 1)
		{
			printf("\n\n------  Welcome to the quiz of world  ------\n\n");
			printf("Let's start with location of countries\n\n");

			// input start
			printf("Q1. Location of Argentina :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &argentina);
			// input end

			// output start
			switch (argentina)
			{
			case 5:
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point1;
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q2. Location of Botswana :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &botswana);
			// input end

			// output start
			switch (botswana)
			{
			case 3:
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point1;
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q3. Location of Belgium :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &belgium);
			// input end

			// output start
			switch (belgium)
			{
			case 2:
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point1;
				break;

			default:
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q4. Location of Greece :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &greece);
			// input end

			// output start
			if (greece == 2)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point1;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q5. Location of Jamaica :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &jamaica);
			// input end

			// output start
			if (jamaica == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point1;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q6. Location of Kyrgyzstan :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &kyrgyzstan);
			// input end

			// output start
			if (kyrgyzstan == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point1;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q7. Location of Peru :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &peru);
			// input end

			// output start
			if (peru == 5)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point1;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q8. Location of Panama :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &panama);
			// input end

			// output start
			if (panama == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point1;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q9. Location of Senegal :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &senegal);
			// input end

			// output start
			if (senegal == 3)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point1;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q10. Location of Yemen :\n");
			printf("   1.Asia \n   2.Europe \n   3.Africa \n   4.North America \n   5.South America\n");
			printf("Ans : ");
			scanf("%d", &yemen);
			// input end

			// output start
			if (yemen == 1)
			{
				system("COLOR 2F");
				printf("Your answer is correct !!!\n\n");
				++point1;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			if (point1 >= 4)
			{
				system("COLOR 2");
			}
			else
			{
				system("COLOR 4");
			}

			printf("Press Enter to check result of this level...\n");
			getch();
			system("cls");
			system("COLOR F");
			printf("Your score in this level is %.2f%%\n", point1 * 10);
			printf("You have moved to next level.\n\n");
			printf("Press Enter for another level...\n");
			getch();
			system("cls");
			system("COLOR F");

			// Next level
			printf("Let's proceed to capital of countries...\n\n");

			// input start
			printf("Q1. Capital of Afganistan :\n");
			printf("   1.Islamabad \n   2.Tehran \n   3.Kabul \n   4.Nyapitaw \n");
			printf("Ans : ");
			scanf("%d", &afganistan);
			// intput end

			// output start
			if (afganistan == 3)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q2. Capital of China :\n");
			printf("   1.Beijing \n   2.Moscow \n   3.Seoul \n   4.Taipei \n");
			printf("Ans : ");
			scanf("%d", &china);
			// intput end

			// output start
			if (china == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q3. Capital of Egypt :\n");
			printf("   1.Damascus \n   2.Jerusalem \n   3.Beirut \n   4.Cairo \n");
			printf("Ans : ");
			scanf("%d", &egypt);
			// intput end

			// output start
			if (egypt == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q4. Capital of Finland :\n");
			printf("   1.Brussels \n   2.Madrid \n   3.Berlin \n   4.Helsinki \n");
			printf("Ans : ");
			scanf("%d", &finland);
			// intput end

			// output start
			if (finland == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q5. Capital of Indonesia :\n");
			printf("   1.Hanoi \n   2.Port Morsbey \n   3.Jakarta \n   4.Bangkok \n");
			printf("Ans : ");
			scanf("%d", &indonesia);
			// intput end

			// output start
			if (indonesia == 3)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q6. Capital of Mongolia :\n");
			printf("   1.Ulaanbaatar \n   2.Pyongyang \n   3.Dushanbe \n   4.Vienna \n");
			printf("Ans : ");
			scanf("%d", &mongolia);
			// intput end

			// output start
			if (mongolia == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q7. Capital of Norway :\n");
			printf("   1.Oslo \n   2.Stockholm \n   3.Copenhagen \n   4.Amsterdam \n");
			printf("Ans : ");
			scanf("%d", &norway);
			// intput end

			// output start
			if (norway == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q8. Capital of Saudi Arabia :\n");
			printf("   1.Doha \n   2.Muscat \n   3.Dubai \n   4.Riyadh \n");
			printf("Ans : ");
			scanf("%d", &saudi);
			// intput end

			// output start
			if (saudi == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q9. Capital of Sudan :\n");
			printf("   1.Gaborone \n   2.Windhoek \n   3.Khartoum \n   4.Harare \n");
			printf("Ans : ");
			scanf("%d", &sudan);
			// intput end

			// output start
			if (sudan == 3)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q10. Capital of Uzbekistan :\n");
			printf("   1.Ashagabat \n   2.Tashkent \n   3.Bishkek \n   4.Baku \n");
			printf("Ans : ");
			scanf("%d", &uzbekistan);
			// intput end

			// output start
			if (uzbekistan == 2)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point2;
				;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end
			printf("Press Enter to check result of this level...\n");
			getch();
			system("cls");
			system("COLOR F");
			printf("You score in this level is %.2f%%.\n", point2 * 10);
			printf("You have moved to next level.\n\n");
			printf("Press Enter for another level...\n");
			getch();
			system("cls");
			system("COLOR F");

			// Next level
			printf("Let's proceed to currency of countries...\n\n");
			// input start
			printf("Q1. Currency of Bangladesh :\n");
			printf("   1.Dollar \n   2.Taka \n   3.Yen \n   4.Rial \n");
			printf("Ans : ");
			scanf("%d", &bangladesh);
			// intput end

			// output start
			if (bangladesh == 2)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q2. Currency of Bhutan :\n");
			printf("   1.Dollar \n   2.Taka \n   3.Yen \n   4.Ngultrum \n");
			printf("Ans : ");
			scanf("%d", &bhutan);
			// intput end

			// output start
			if (bhutan == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q3. Currency of Cyprus :\n");
			printf("   1.Euro \n   2.Dollar \n   3.Taka \n   4.Yen \n");
			printf("Ans : ");
			scanf("%d", &cyprus);
			// intput end

			// output start
			if (cyprus == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q4. Currency of India :\n");
			printf("   1.Indian Rupee \n   2.Dollar \n   3.Yuan \n   4.Pound Sterling \n");
			printf("Ans : ");
			scanf("%d", &india);
			// intput end

			// output start
			if (india == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q5. Currency of Iran :\n");
			printf("   1.Dollar \n   2.Rial \n   3.Yen \n   4.Yuan \n");
			printf("Ans : ");
			scanf("%d", &iran);
			// intput end

			// output start
			if (iran == 2)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q6. Currency of Lithuania :\n");
			printf("   1.Dollar \n   2.Yen \n   3.Litas \n   4.Taka \n");
			printf("Ans : ");
			scanf("%d", &lithuania);
			// intput end

			// output start
			if (lithuania == 3)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q7. Currency of Nigeria :\n");
			printf("   1.Naira \n   2.Pound Sterling \n   3.Dollar \n   4.Yuan \n");
			printf("Ans : ");
			scanf("%d", &nigeria);
			// intput end

			// output start
			if (nigeria == 1)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q8. Currency of Russia :\n");
			printf("   1.Dollar \n   2.Dinar \n   3.Yen \n   4.Ruble \n");
			printf("Ans : ");
			scanf("%d", &russia);
			// intput end

			// output start
			if (russia == 4)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q9. Currency of United Kingdom :\n");
			printf("   1.Dollar \n   2.Pound Sterling \n   3.Ruble \n   4.Yuan \n");
			printf("Ans : ");
			scanf("%d", &uk);
			// intput end

			// output start
			if (uk == 2)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter for another question...\n");
			getch();
			system("cls");
			system("COLOR F");

			// input start
			printf("Q10. Currency of United States :\n");
			printf("   1.Yen \n   2.Ruble \n   3.Dollar \n   4.Rial \n");
			printf("Ans : ");
			scanf("%d", &usa);
			// intput end

			// output start
			if (usa == 3)
			{
				system("COLOR 2");
				printf("Your answer is correct !!!\n\n");
				++point3;
			}
			else
			{
				system("COLOR 4");
				printf("Your answer is wrong !!!\n\n\a");
			}
			// output end

			printf("Press Enter to check result of this level...\n");
			getch();
			system("cls");
			system("COLOR F");
			printf("You score in this level is %.2f%%.\n", point3 * 10);
			printf("You have completed the game.\n\n");
			openFile(point1, point2, point3);
			printf("Press Enter to check your overall score...\n");
			getch();
			system("cls");

			float point = point1 + point2 + point3;
			if (point >= 4)
			{
				system("COLOR 2");
			}
			else
			{
				system("COLOR 4");
			}
			printf("Your overall score is %.2f%%\n", point / 3 * 10);
			printf("Press Enter to know about yourself...\n");
			getch();
			system("cls");
			system("COLOR 30");

			// if else conditions
			if (point1 > point2 && point1 > point3)
			{
				printf("You are good in determinig the location of countries.\n\n\n");
			}
			else if (point2 > point3 && point2 > point1)
			{
				printf("You are good in determining the capital of countries.\n\n\n");
			}
			else if (point3 > point1 && point3 > point2)
			{
				printf("You are good in determining the currency of countries.\n\n\n");
			}
			else if (point1 < point2 && point1 < point3 && point2 == point3)
			{
				printf("You are good in determining the capital & currency of countries.\n\n\n");
			}
			else if (point2 < point1 && point2 < point3 && point1 == point3)
			{
				printf("You are good in determining the location & currency of countries.\n\n\n");
			}
			else if (point3 < point1 && point3 < point2 && point1 == point2)
			{
				printf("You are good in determining the location & currency of countries.\n\n\n");
			}
			else if (point1 == point2 && point2 == point3 && point3 == 0)
			{
				printf("You are poor in determining the location, capital & currency of different countries.\n\n\n ");
			}
			else if (point1 == point2 && point2 == point3)
			{
				printf("You have equal knowledge determining the location, capital & currency of different countries.\n\n\n");
			}
			else
			{
				printf("Better Luck Next Time !!!\n\n\n");
			}

			printf("Do you want to review questions?\n");
			printf(" 1.Yes \n 2.No\n");
			printf("Option : ");
			scanf("%d", &review);
			if (review == 1)
			{
				// Answers of questions
				system("cls");
				system("COLOR F9");
				printf("\n\n Countries	Location\n");
				printf(" Argentina: South America \n Botswan: Africa \n Belgium: Europe \n Greece: Europe \n Jamaica: North America \n Kyrgyzstan: Asia \n Peru: South America \n Panama: North America \n Senegal: Africa \n Yemen: Asia\n\n\n");

				printf(" Countries	Capital\n");
				printf(" Afghanistan: Kabul \n China: Beijing \n Egypt: Cairo \n Finland: Helsinki \n Indonesia: Jakarta \n Mongolia: Ulaanbaatar \n Norway: Oslo \n Saudi Arabia: Riyadh \n Sudan: Khartoum \n Uzbekistan: Tashkent\n\n\n");

				printf(" Countries	Currency\n");
				printf(" Bangladesh: Taka \n Bhutan: Ngultrum \n Cyprus: Euro \n India: Indian Rupee \n Iran: Rial \n Lithuania: Litas \n Nigeria: Naira \n Russia: Rubel \n UK: Pound Sterling \n USA: Dollar\n\n\n");

				printf("\n\nDo you want to go to next category?\n");
				printf(" 1.Yes \n 2.No\n");
				printf("Option : ");
				scanf("%d", &category);

				if (category == 1)
				{
					printf("\n\n------  Coming Soon !!!  ------");
				}
				else
				{
					exit(1);
				}
			}
			else
			{
				printf("\n\nDo you want to go to next category?\n");
				printf(" 1.Yes \n 2.No\n");
				printf("Option : ");
				scanf("%d", &category);

				if (category == 1)
				{
					printf("\n\n------  Coming Soon !!!  ------");
				}
				else
				{
				F:
					exit(1);
				}
			}
		}
		return 0;
	}
	else
	{
		return 0;
	}
}
int loginPage()
{
	char username[15], password[15], $pw1[15], $pw2[15], ch;
	int recovery, i = 0;
	printf("-------   Login   -------");
	printf("\n\nEnter your username: ");
	scanf("%s", &username);
	printf("Enter your password: ");
	while (1)
	{
		ch = getch();
		if (ch == 13)
		{
			break;
		}
		else
		{
			password[i] = ch;
			putch('*');
			i++;
		}
	}
	password[i] = '\0';
	printf("\n");
	if (strcmp(username, "nirajan") == 0 && strcmp(password, "ninja") == 0)
	{
	A:
		printf("\n\nLogin successful !!!\n");
		printf("press any key");
	B:
		getch();
	C:
		system("cls");
		return 1;
	}
	else
	{
		printf("\n\nInvalid username or password !!!\a");
		printf("\n\n1. Forgot password?\t 2. Login again\t 3. Exit\n");
		printf("Option: ");
		scanf("%d", &recovery);
		system("cls");
		switch (recovery)
		{
		case 1:
			printf("-------Welcome to password recovery-------\n");
			printf("\n\nEnter your username: ");
			scanf("%s", &username);
			if (strcmp(username, "spandan1") == 0)
			{
				printf("\nWhat is your birthdate? Date format(dd/mm/yyyy)\n");
				scanf("%s", &$pw1);
				if (strcmp($pw1, "01/01/2001") == 0)
				{
					printf("\nYour password is spandan100.\n\n");
					printf("Press Enter to login again...");
					getch();
					system("cls");
					loginPage();
					break;
				}
				else
				{
					printf("\nWrong date of birth !!!\n\n");
					exit(1);
				}
			}
			else if (strcmp(username, "1") == 0)
			{
				printf("\nWhat is your birthdate? Date format(dd/mm/yyyy)\n");
				scanf("%s", &$pw2);
				if (strcmp($pw2, "01/01/2001") == 0)
				{
					printf("\nYour password is 2.\n\n");
					printf("Press Enter to login again...");
					getch();
					system("cls");
					loginPage();
					break;
				}
				else
				{
					printf("\nWrong date of birth !!!\n\n");
					exit(1);
				}
			}
			else
			{
				printf("\n\nInvalid username or password !!!\n");
				exit(1);
			}
			break;

		case 2:
			loginPage();
			break;

		case 3:
			exit(1);
			break;

		default:
			printf("invalid input.... \n exiting the program");
			exit(1);
			break;
		}
	}
}

void openFile(float point1, float point2, float point3)
{
	char name[30];
	FILE *fptr;
	fptr = fopen("data.txt", "a");
	printf("enter your name:");
	fflush(stdin);
	gets(name);
	fprintf(fptr, "%s", "username:");
	fprintf(fptr, "%s", name);
	fprintf(fptr, "%s", "\npoint1:");
	fprintf(fptr, "%.2f", point1);
	fprintf(fptr, "%s", "\npoint2:");
	fprintf(fptr, "%.2f", point2);
	fprintf(fptr, "%s", "\npoint3:");
	fprintf(fptr, "%.2f", point3);
	fprintf(fptr, "%s", "\n");
	fclose(fptr);
}