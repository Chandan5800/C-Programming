#include<stdio.h>
#include<stdlib.h>
int rd()
{
	int rem;
	A:rem=rand()%7;
	if(rem==0)
		goto A;
	else
		return rem;
}
void displaychart(int curp,char player[4])
{	int i,j,t,c,sft=0,diceres,pos1,pos2;
		if(curp==100)
		{
			printf("Congratulations!!!!!! \n\nPlayer %sYou win\n",player);
			scanf("%*s");
			exit(0);
		}
	for(i=10;i>0;i--)
	{
		t=i-1;
		if((sft%2)==0)
		{
			c=0;
			for(j=10;j>=1;j--)
			{
				diceres=(i*j)+(t*c++);
				if(curp==diceres)
					printf("%s\t",player);
				else
				printf("%d\t",diceres);
			}
			sft++;
		}
		else
		{
			c=9;
			for(j=1;j<=10;j++)
			{
				diceres=(i*j)+(t*c--);
				if(curp==diceres)
					printf("%s\t",player);
				else
					printf("%d\t",diceres);
			}
			sft++;
		}
		printf("\n\n");
	}
	printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
}
void main()
{
	int i,dice,cur_pos1=0,cur_pos2=0;
	char ch;
	while(1)
	{
		printf("Snakes Position: | 25 to 9  | 65 to 40 | 99 to 1 | 85 to 25| 72 to 15 |\nLadder Position: | 9 to 45 | 40 to 98 |13 to 42 | 60 to 83 | 70 to 93 |\n\n");
		printf("Choose your player option\n");
		printf("[1] Player 1 plays\n");
		printf("[2] Player 2 plays\n");
		printf("[3] Exit\n");
		scanf("%s",&ch);
		switch(ch)
		{
			case '1':dice=rd();
                    system("cls");
                    printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("\t\t\t    Snakes And Ladders\n");
                    printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
					cur_pos1=dice+cur_pos1;
					if(cur_pos1<101){
							// From here Snake is start......................
						if(cur_pos1==99)
						{
						displaychart(1,"$P1$");
						}
						if(cur_pos1==65)
						{
						displaychart(40,"$P1$");
						}
						if(cur_pos1==25)
						{
						displaychart(9,"$P1$");
						}
						if(cur_pos1==85)
						{
						displaychart(25,"$P1$");
						}
						if(cur_pos1==75)
						{
						displaychart(15,"$P1$");
						}
						// From here ladder is start..................................
						if(cur_pos1==9)
						{
						displaychart(15,"$P1$");
						}
						if(cur_pos1==40)
						{
						displaychart(98,"$P1$");
						}
						if(cur_pos1==70)
						{
						displaychart(93,"$P1$");
						}
						if(cur_pos1==60)
						{
						displaychart(83,"$P1$");
						}
						if(cur_pos1==13)
						{
						displaychart(42,"$P1$");
						}
												else{
							displaychart(cur_pos1,"$P1$");
						}
                        printf("\t\t\t\tDice = %d\n",dice);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
					}
					else{
						cur_pos1=cur_pos1-dice;
						printf("Range exceeded of Player 1.\n");
						displaychart(cur_pos1,"$P1$");
					}
					printf("Player 2 position is ------ %d\n\n",cur_pos2);
				break;
			case '2':dice=rd();
                    system("cls");
                    printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("\t\t\t    Snakes And Ladders\n");
                    printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
					cur_pos2=dice+cur_pos2;
					if(cur_pos2<101){
						// Snake is start.............................
						if(cur_pos2==99)
						{
						displaychart(1,"**P2**");
						}
						if(cur_pos2==65)	
						{
						displaychart(40,"**P2**");
						}
						if(cur_pos2==25)	
						{
						displaychart(9,"**P2**");
						}
						if(cur_pos2==85)
						{
						displaychart(25,"**P2**");
						}
						if(cur_pos2==75)
						{
						displaychart(15,"**P2**");
						}
  							// Ladder is start........................
						if(cur_pos2==9)
						{
						displaychart(15,"**P2**");
						}
						if(cur_pos2==40)
						{
						displaychart(98,"**P2**");
						}
						if(cur_pos2==70)	
						{
						displaychart(93,"**P2**");
						}
						if(cur_pos2==60)	
						{
						displaychart(83,"**P2**");
						}
						if(cur_pos2==13) 
						{
						displaychart(42,"**P2**");
						}
						else{
							displaychart(cur_pos2,"**P2**");
						}
						printf("\t\t\t\tDice = %d\n",dice);
						printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
					}
					else{
						cur_pos2=cur_pos2-dice;
						printf("Range exceeded of Player 2.\n");
						displaychart(cur_pos2,"**P2**");
					}
					printf("Player 1 position is ------- %d\n\n",cur_pos1);
				break;
			case '3':exit(0);
				break;

			default:printf("Incorrect choice.Try Again\n");
		}
	}
}