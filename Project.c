#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void show_record();
void help();
void edit_score(float score, char player_name[20]);
int main()
     {
     srand(time(NULL));
     system("COLOR 3F");
     int reward,r,r1,count,i,n;
     float score;
     char choice;
     char check;
     char playername[50];
     the_menu:
     system("cls");
     printf("\n\n\n\t\t\t\t-------------The Quiz Game----------------\n\n");
     printf("\n\t\t____________________________________________________________________\n\n");
     printf("\t\t\t\tMain Menu\n\n");
     printf("\n\t\t\t - Press S to start the game\n");
     printf("\n\t\t\t - press G for guide\n");
     printf("\n\t\t\t - Press V to view the highest score  \n");
     printf("\n\t\t\t - press Q to quit\n");
     printf("\n\t\t____________________________________________________________________\n\n");
     choice=getch();
     if (choice=='v' || choice=='V')
	{
	show_record();
	goto the_menu;
	}
     else if (choice=='g' || choice=='G')
	{
	help();
	getch();
	goto the_menu;
	}
	else if (choice=='q' || choice=='Q')
	exit(1);
    else if(choice=='s' || choice=='S')
    {
    printf("\n\n\t\t\tResister your name:");
    gets(playername);

    system("cls");
    printf("\n -------------  Howdy %s -------------------\n",playername);
    printf("\n Instructions : \n");
    printf("\n - There are two rounds mainly\n");
    printf("\n - you should pass qualifying round to move forward\n");
    printf("\n - Passing marks of qualifying round is 60%\n");
    printf("\n - Press A, B ,C or D to answer\n");
    printf("\n - You will win $2 on first correct answer and then multiple of 2 dollars till the last correct answer\n");
	printf("\n\n---------Let's Play ---------\n");
    printf("\n\n\n Press S to start the game!\n"); 
    printf("\n Press B to back");
    check=getch();
    if (check=='S' || check=='s')
		{
		    goto home;
        }
	else
		{
        goto the_menu;
       }
     home:
     system("cls");
     count=0;
     char option;
     for(i=1;i<=5;i++)
     {
     r1=i;
     switch(r1)
		{
		case 1:
		printf("\t\t\n\tThe world largest garveyard is located?");
		printf("\n\n\tA.Pakistan\tB.Afganistan\n\t\n\tC.Iraq\t\tD.Iran\n");
		scanf(" %c",&option);
		if (option=='c'|| option=='C')
			{
			    printf("\n____________________________________");
			    printf("\n\n\tThe Answer is correct");
				count++;
			    printf("\n____________________________________\n");
			    break;
			}
		else
		    {
			    printf("\n____________________________________");
		        printf("\n\n\tIncorect, The correct answer is C.");
			    printf("\n____________________________________\n");
		    	break;
		    }

        case 2:
		printf("\t\t\n\tThe first news paper in the world was started by ?");
		printf("\n\n\tA.japan\tB.china\n\t\n\tC.USA\tD.India\n");
		scanf(" %c",&option);
		if (option=='b'|| option=='B')
			{
			    printf("\n____________________________________");
			    printf("\n\n\tThe Answer is correct");
				count++;
			    printf("\n____________________________________\n");
			    break;
			}
		else
		    {
			    printf("\n____________________________________");
		        printf("\n\n\tIncorect, The correct answer is B.");
			    printf("\n____________________________________\n");
		        break;
		    }
        case 3:
		printf("\t\t\n\tWho is known as Man of Blood and Iron ?");
		printf("\n\n\tA.Napoleon\tB.bismarck\n\t\n\tC.Ho chi Minh\tD.Sir Walter Scott\n");
		scanf(" %c",&option);
		if (option=='b' || option=='B')
			{
			    printf("\n____________________________________");
			    printf("\n\n\tThe Answer is correct");
				count++;
			    printf("\n____________________________________\n");
			    break;
			}
		else
		    {
			    printf("\n____________________________________");
		        printf("\n\n\tIncorect, The correct answer is B.");
			    printf("\n____________________________________\n");
		        break;
		    }
		    
        case 4:
		printf("\t\t\n\tWhich of these was an action of Farmers Alliances?");
		printf("\n\n\tA.Involving farmers in political action\tB.Encouraging farmers to give up farming\n\t\n\tC.Helping farmers fight for better prices\tD.Both A & C\n");
		scanf(" %c",&option);
		if (option=='d' || option=='D')
			{
			    printf("\n____________________________________");
			    printf("\n\n\tThe Answer is correct");
				count++;
			    printf("\n____________________________________\n");
			    break;
			}
		else
		    {
			    printf("\n____________________________________");
		        printf("\n\n\tIncorect, The correct answer is D.");
			    printf("\n____________________________________\n");
		        break;
		    }
		    
        case 5:
				printf("\t\t\n\tWhich is considered as oldest civilization of the world ?");
		printf("\n\n\tA.Mesopotamian Civilization\tB.Harappan Civilization\n\t\n\tC.Chinese Civilization\tD.Egyptain Civilization\n");
		scanf(" %c",&option);
		if (option=='a' || option=='A')
			{
			    printf("\n____________________________________");
			    printf("\n\n\tThe Answer is correct");
				count++;
			    printf("\n____________________________________\n");
			    getch();
			    break;
			}
		else
		    {
			    printf("\n____________________________________");
		        printf("\n\n\tIncorect, The correct answer is A.");
			    printf("\n____________________________________\n");
			    getch();
		        break;
		    }
		}
	}

	if(count>=3)
	{
	goto test;
	}
	else
	{
	system("cls");
	printf("\n\nUNFORTUNATELY YOU COULD NOT MEET THE PASSING CRITERIA....BETTER LUCK NEXT TIME\n");
	printf("PRESS ANY KEY TO EXIT\n");
	getch();
	goto the_menu;
	}
    test:
    system("cls");
    printf("\n\n\t------- Welcome to final round %s -------",playername);
    printf("\n\n\t-remember : You will be rewared for each correct answer");
    printf("\n\n\t-You will win $2 on first correct answer and then multiple of 2 dollars till the last correct answer");
    printf("\n\n\t-You will disqualify, if you choose any wrong answer");
    printf("\n\n\n\t-Press any key to Start the Game!");
    getch();
    goto game;
	game:
     reward=1;
     for(i=1;i<=20;i++)
     {
	 system("cls");
     r=i;
     switch(r)
		{
		case 1:
		printf("\n\n\t\tMS-Word is an example of _____");
		printf("\n\n\t\tA.an operating system\t\tB.a processing device\n\n\t\tC.application software\t\tD.an input device");
	option=getch();
    	if (option=='C' || option=='c')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward=reward*2;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
			printf("\n\nIncorrect,The correct answer is C.");
			printf("\n____________________________________\n");
			getch();
		    goto score;
		    break;
			}

		case 2:
		printf("\n\n\t\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		printf("\n\n\n\t\tCtrl, Shift and Alt are called .......... keys.");
		printf("\n\n\t\tA.modifier\t\tB.function\n\n\t\tC.alphanumeric\t\tD.adjustment");
	option=getch();
    	if (option=='A' || option=='a')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward*=4;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
			printf("\n\nIncorrect,The correct answer is A.");
			printf("\n____________________________________\n");
			getch();
		    goto score;
		    break;
		    }

        case 3:
       	printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		printf("\n\n\n\t\tNational Income estimates in India are prepared by ");
		printf("\n\n\t\tA.planning comission\t\t\tB.reserve bank of india\n\n\t\tC.central statistical organisation\t\tD.indian statistical issue");
	option=getch();
    	if (option=='C' || option=='c')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward*=6;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
			printf("\n\n Incorrect,the correct answer is C.");
			printf("\n____________________________________\n");
			getch();
		    goto score;
		    break;
			}

        case 4:
        printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tThe staple food of the Vedic Aryan was");
		printf("\n\n\t\tA.Barley and rice\t\tB.Milk and its products\n\n\t\tC.Rice and pulses\t\tD.Vegetables and fruits");
	option=getch();
    	if (option=='B' || option=='b')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward*=8;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
            printf("\n\nIncorrect,The correct answer is B.");
            printf("\n____________________________________\n");
			getch();
		    goto score;
		    break;
		    }

        case 5:
        printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tThe tropic of cancer does not pass through which of these Indian states ?");
		printf("\n\n\t\tA.Madhya Pradesh\t\tB.West Bengal\n\n\t\tC.Rajasthan\t\tD.Odisha");
	option=getch();
    	if (option=='D' || option=='d')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward*=10;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
		    printf("\n\nIncorrect,The correct answer is D.");
		    printf("\n____________________________________\n");
		    getch();
		    goto score;
		    break;
		    }

		case 6:
		printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tA computer cannot 'boot' if it does not have the _____");
		printf("\n\n\t\tA.compiler\t\tB.loader\n\n\t\tC.operating system\t\tD.assembler");
	option=getch();
    	if (option=='C' || option=='c')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is corret!");
			printf("\n____________________________________\n");
			reward*=12;
			getch();
			break;
			}
		else
		    {
			printf("\n____________________________________");
			printf("\n\nIncorrect,The correct answer is C.");
			printf("\n____________________________________\n");
			goto score;
		    getch();
		    break;
			}

        case 7:
        printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
        	
		printf("\n\n\n\t\tWhat animal has the worst memory?");
		printf("\n\n\t\tA.Dog\t\tB.Rat\n\n\t\tC.Elephant\t\tD.Dolphin");
	option=getch();
    	if (option=='C' || option=='c')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward*=14;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
			printf("\n\nIncorrect,The correct answer is C.");
			printf("\n____________________________________\n");
			getch();
		    goto score;
		    break;
			}

        case 8:
        printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tWhich of the following has no Skeleton at all?");
		printf("\n\n\t\tA.star fish\t\tB.sponge\n\n\t\tC.jelly fish\t\tD.silver fish");
	option=getch();
    	if (option=='C' || option=='c')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward*=16;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
			printf("\n\nIncorrect,The correct answer is C.");
			printf("\n____________________________________\n");
			getch();
		    goto score;
		    break;
			}

        case 9:
        printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tWhich animal can create the loudest sound among any living creature?");
		printf("\n\n\t\tA.Whale shark\t\tB.Gibbon\n\n\t\tC.Humpback Whales\t\tD.howler monkey");
	option=getch();
    	if (option=='C' || option=='c')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward*=18;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
			printf("\n\nIncorrect,The correct answer is C.");
			printf("\n____________________________________\n");
			getch();
		    goto score;
		    break;
			}

        case 10:
        printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tWhich one of the following is not a true fish?");
		printf("\n\n\t\tA.silver fish\t\tB.Saw fish\n\n\t\tC.Hammer fish\t\tD.Sucker fish");
	option=getch();
    	if (option=='D' || option=='d')
			{
				printf("\n____________________________________");
			printf("\n\nthe answer is correct!");
			printf("\n____________________________________\n");
			reward*=20;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
			printf("\n\nIncorrect,The correct answer is D.");
			printf("\n____________________________________\n");
			getch();
			break;
			goto score;
			}

        case 11:
        printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tIn which of the following kinds of organism is the phenomenon found wherein the female kills the male after copulation");
		printf("\n\n\t\tA.Dragonfly\t\tB.Honeybee\n\n\t\tC.spider\t\tD.pit viper");
	option=getch();
    	if (option=='B' || option=='b')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward*=22;
			getch();
			break;
			}
		else
            {
            	printf("\n____________________________________");
			printf("\n\nIncorrect,The correct answer is B.");
			printf("\n____________________________________\n");
			getch();
            break;
			goto score;
			}

        case 12:
        printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tName the bird that migrates from the north pole to the south pole and back?");
		printf("\n\n\t\tA.Arctic tern\t\tB.swallow\n\n\t\tC.crane\t\tD.penguin");
	option=getch();
    	if (option=='A' || option=='a')
			  {
			  	printf("\n____________________________________");
			  printf("\n\nThe answer is correct!");
			  printf("\n____________________________________\n");
			  reward*=24;
			  getch();
			  break;
			  }
		else
              {
              	printf("\n____________________________________");
			  printf("\n\nIncorrect, The correct answer is A.");
			  printf("\n____________________________________\n");
			  getch();
              break;
			  goto score;
			  }

		case 13:
			printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tIn which of the following groups animals bear no teeth ?");
		printf("\n\n\t\tA.Peacock, Ostrich and Tortoise\t\tB.Turtle, Kiwi and Cow\n\n\t\tC.Owl, Loris and Crow\t\tD.Alligator, Turtle and Tortoise");
	option=getch();
    	if (option=='A' || option=='a')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is Correct!");
			printf("\n____________________________________\n");
			reward*=26;
			getch();
			break;
			}
		else
		    {
		    	printf("\n____________________________________");
			printf("\n\nIncorrect, The correct answer is A.");
			printf("\n____________________________________\n");
			getch();
		    break;
			goto score;
			}

        case 14:
        	printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tThis animal fasts for about 8 months in a year and yet is active, gives birth, and nurses its young while fasting. Name the animal");
		printf("\n\n\t\tA.Polar Bear\t\tB.Frog\n\n\t\tC.Reindeer\t\tD.Lion");
	option=getch();
    	if (option=='A' || option=='a')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is Correct!");
			printf("\n____________________________________\n");
			reward*=28;
			getch();
			break;
			}
		else
		       {
		       	printf("\n____________________________________");
			   printf("\n\nIncorrect, The correct answer is A.");
			   printf("\n____________________________________\n");
			   getch();
		       break;
			   goto score;
			   }

		case 15:
			printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tAmong the following animals , the figures of which are found in the state emblem of india?");
		printf("\n\n\t\tA.Bull, deer and eagle\t\tB.Deer and elephant\n\n\t\tC.Elephant, Tiger and Bull\t\tD. Horse and Bull");
	option=getch();
    	if (option=='D' || option=='d')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is Correct!");
			printf("\n____________________________________\n");
			reward*=30;
			getch();
			 break;
			 }
		else
		       {
		       	printf("\n____________________________________");
			   printf("\n\nIcorrect, The correct answer is D.");
			   printf("\n____________________________________\n");
			   getch();
		       goto score;
		       break;
			   }

		case 16:
			printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tHow much water can be used by a camel in drinking in a single time ?");
		printf("\n\n\t\tA. Up to 60 ltr.\t\tB.Up to 80 ltr.\n\n\t\tC. Up to 100 ltr.\t\tD.Up to 120 ltr.");
	option=getch();
    	if (option=='C' || option=='c')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is Correct!");
			printf("\n____________________________________\n");
			reward*=32; 
			getch();
			break;
			}
		else
		       {
		       	printf("\n____________________________________");
			   printf("\n\nIncorrect, The correct answer is C.");
			   printf("\n____________________________________\n");
			   getch();
		       goto score;
		       break;
			   }


		case 17:
			printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tWhich of the following has the largest eyes of all land mammals?");
		printf("\n\n\t\tA.Horse\t\tB.Elephant\n\n\t\tC.Camel\t\tD.Rhinocerous");
	option=getch();
    	if (option=='A' || option=='a')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is Correct!");
			printf("\n____________________________________\n");
			reward*=34;
			getch();
			break;
			}
		else
		       {
		       	printf("\n____________________________________");
			   printf("\n\nIncorrect, The correct answer is A.");
			   printf("\n____________________________________\n");
			   getch();
			   goto score;
		       break;
			   }

		case 18:
			printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tThe age of a lion can be determined from its");
		printf("\n\n\t\tA.hair\t\tB.nose\n\n\t\tC.nails\t\tD.tail\n\n");
	option=getch();
    	if (option=='B' || option=='b')
			{
				printf("\n____________________________________");
			printf("\n\nthe answer is Correct!");
			printf("\n____________________________________\n");
			reward*=36; 
			getch();
			break;
			}
		else
		       {
		       	printf("\n____________________________________");
			   printf("\n\nIncorrect, The correct answer is B.");
			   printf("\n____________________________________\n");
			   getch();
			   goto score;
		       break;
			   }

		case 19:
			printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tWhat is the maximum running land speed of Crocodile ?");
		printf("\n\n\t\tA.5 KMPL\tB.12 KMPL\n\n\t\tC.15 KMPL\tD.17 KMPL\n\n");
	option=getch();
    	if (option=='D' || option=='d')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is Correct!");
			printf("\n____________________________________\n");
			reward*=38; 
			getch();
			break;
			}
		else
		       {
		       	printf("\n____________________________________");
			   printf("\n\nIncorrect, The correct answer is D.");
			   printf("\n____________________________________\n");
			   getch();
			   goto score;
		       break;
			   }

		case 20:
			printf("\n\n\t\tYOU HAVE WON AMOUNT $%d TILL NOW",reward);
		printf("\n\n\t\tIF YOU WANT TO WITHDRAW THE AMOUNT AND END THE QUIZ PRESS 'W' ");
		printf("\n\n\t\tOR IF YOU WANT TO CONTINUE THE QUIZ PRES ANY KEY OTHER THAN 'W' ");
option=getch();
		if(option=='W' || option=='w')
		{
			goto score;
			break;
		}
		system("cls");
		
		printf("\n\n\n\t\tHow many legs does a butterfly have?");
		printf("\n\n\t\tA.2\t\tB.4\n\n\t\tC.6\t\tD.8");
	option=getch();
    	if (option=='C' || option=='c')
			{
				printf("\n____________________________________");
			printf("\n\nThe answer is correct!");
			printf("\n____________________________________\n");
			reward*=40; 
			getch();
			break;
			}
		else
		       {
		       	printf("\n____________________________________");
			   printf("\n\nIncorrect, The correct answer is C.");
			   printf("\n____________________________________\n");
			   getch();
			   goto score;
		       break;
			   }
			}
	    }
	score:
    system("cls");
	if(reward>1)
	{
	   printf("\n\n\t\t------------CONGRATULATION-------------");
	     printf("\n\t You won $%d",reward);
		 goto go;
	}

	 else
{
	 printf("\n\n\t--------Unlucky, YOU DIDN'T WIN ANY CASH---------");
	    printf("\n\t\t Thanks for your answers");
	    printf("\n\t\t Better Luck Next time");
		goto go;
}

	go:
	puts(" \n\n\t\tPress any key to go to main menu");
	getch();
		edit_score(reward,playername);
		goto the_menu;
		}
		}

void show_record()
    {
	system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("high_score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t-------------------------------------------------------------");
	printf("\n\n\n\n\n\t\t\t Player Name : %s Highest win %0.2f",name,scr);
	printf("\n\n\t\t--------------------------------------------------------------");
	fclose(f);
	getch();
	}

void help()
	{
	system("cls");
	printf("\n Instructions : \n");
    printf("\n - There are two rounds mainly\n");
    printf("\n - you should pass qualifying round to move forward\n");
    printf("\n - Passing marks of qualifying round is 60%\n");
    printf("\n - Press A, B ,C or D to answer\n");
    printf("\n - You will win $2 on first correct answer and then multiple of 2 dollars till the last correct answer\n");
	}

void edit_score(float score, char player_name[20])
	{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("high_score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("high_score.txt","w");
	    fprintf(f,"%s\n%.2f",player_name,sc);
	    fclose(f);
        }
        }
