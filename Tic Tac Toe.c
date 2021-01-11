#include<stdio.h>
int a=0;
int i,j,k,choice;
int play_again;
char x[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int ch;
int start;
char player1_name[100];
char player2_name[100];

void show()
{
    printf("\n\n\n\n\n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("\t\t%c\t\t",x[i][j]);
            if(j<2)
            {

                printf("|");
            }
        }
        printf("\n\n\n\n\n");
    }
}

void cheak()
{
    if((x[0][0]==x[0][1] && x[0][1]==x[0][2] && x[0][0]!='1') || (x[1][0]==x[1][1] && x[1][1]==x[1][2] && x[1][0]!='4') || (x[2][0]==x[2][1] && x[2][1]==x[2][2] && x[2][0]!='7') || (x[0][0]==x[1][0] && x[1][0]==x[2][0]  && x[0][0]!='1') || (x[0][1]==x[1][1] && x[1][1]==x[2][1] && x[0][1]!='2') || (x[0][2]==x[1][2] && x[1][2]==x[2][2] && x[0][2]!='3') || (x[0][0]==x[1][1] && x[1][1]==x[2][2] && x[0][0]!='1') || (x[0][2]==x[1][1] && x[1][1]==x[2][0] && x[0][2]!='3'))
    {
        if(ch%2==0)
        {

            system("COLOR 1A");
            printf("\n\nCongratulation.....\n\n%s win the match\n\n",player2_name);
        }

        else
        {

            system("COLOR 1A");
            printf("\n\nCongratulation.....\n\n%s win the match\n\n",player1_name);
        }

        printf("Want to play again??\n");
        printf("Press 1 for play again: \n");
        printf("press 0 for quit: \n");
        scanf("%d",&play_again);
        if(play_again==1)
        {


            system("cls");

            x[0][0]='1';
            x[0][1]= '2';
            x[0][2]= '3';
            x[1][0]='4';
            x[1][1]='5';
            x[1][2]='6';
            x[2][0]='7';
            x[2][1]='8';
            x[2][2]='9';
            show();
            a=1;
        }
        else if(play_again==0)
       {
            a=2;
        }
        else
                {
                    printf("Wrong choice!!!!!!\n\n");
                    a=2;
                }




    }

}


void player_name()
{

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t");
	printf("Enter the name of player 1: ");
    scanf("%s",player1_name);
    printf("\n\t\t\t\t\t\t\t\t");
	printf("Enter the name of player 2: ");
    scanf("%s",player2_name);
}


void start_game()
{

    system("COLOR FD");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t _____     ___       _____   _    ___      _____   _   ___ \n");
    printf("\t\t\t\t\t\t   |   .  |            |    |.|  |           |    | | |__     \n");
    printf("\t\t\t\t\t\t   |   |  |___         |    | |  |___        |    |_| |____  \n");

    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t| 1 for start the game");
    printf("\n\t\t\t\t\t\t\t\t| 0 for quite the game ");
    printf("\n\t\t\t\t\t\t\t\t| Enter your choice: ");

    scanf("%d",&start);

}

int main()
{

    start_game();
    system("cls");





    if(start==1)
    {

player_name();
    system("cls");

        show();

        ch=1;

        while(ch!=NULL)

        {



            if(x[0][0]=='1' || x[0][1]== '2' || x[0][2]== '3' || x[1][0]=='4' || x[1][1]=='5' || x[1][2]=='6' || x[2][0]=='7' || x[2][1]=='8' || x[2][2]=='9')

            {





                if(ch%2==0)
                {
                    system("COLOR FD");
                    printf("\n\n\n\n\tThe symbol for %s = X",player2_name);
                    printf("\n\tTake a position from 1 to 9.");
                    printf("\n\n\tEnter a position for %s: ",player2_name);


                    scanf("%d",&choice);
                    if(choice==1)
                    {
                        if(x[0][0]=='1')

                        {
                            x[0][0]='X';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;

                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");

                        }
                    }

                    else if(choice==2)
                    {
                        if(x[0][1]=='2')
                        {
                            x[0][1]='X';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }
                    }
                    else if(choice==3)
                    {
                        if(x[0][2]=='3')
                        {
                            x[0][2]='X';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }

                    }
                    else if(choice==4)
                    {
                        if(x[1][0]=='4')
                        {
                            x[1][0]='X';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }
                    }
                    else if(choice==5)
                    {
                        if(x[1][1]=='5')
                        {


                            x[1][1]='X';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }


                    }
                    else if(choice==6)
                    {
                        if(x[1][2]=='6')
                        {


                            x[1][2]='X';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }
                    }
                    else if(choice==7)
                    {
                        if(x[2][0]=='7')
                        {


                            x[2][0]='X';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }
                    }
                    else if(choice==8)
                    {
                        if(x[2][1]=='8')
                        {


                            x[2][1]='X';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }

                    }
                    else if(choice==9)
                    {
                        if(x[2][2]=='9')
                        {
                            x[2][2]='X';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }
                    }


                    else
                    {
                        system("cls");
                        show();
                        printf("Sorry.... \n\nInvalid move.\n\nTry again.........\n\n");
                    }

                }

                else
                {
                    system("COLOR FD");

                    printf("\n\n\n\n\tThe symbol for %s = O",player1_name);
                    printf("\n\tTake a position from 1 to 9.");
                    printf("\n\n\tEnter a position for %s: ",player1_name);
                    scanf("%d",&choice);
                    if(choice==1)
                    {
                        if(x[0][0]=='1')

                        {
                            x[0][0]='O';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }

                            ch++;
                        }

                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }

                    }

                    else if(choice==2)
                    {
                        if(x[0][1]=='2')
                        {


                            x[0][1]='O';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }

                    }

                    else if(choice==3)
                    {
                        if(x[0][2]=='3')
                        {
                            x[0][2]='O';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }

                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }

                    }

                    else if(choice==4)
                    {
                        if(x[1][0]=='4')
                        {
                            x[1][0]='O';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }

                    }

                    else if(choice==5)
                    {
                        if(x[1][1]=='5')
                        {
                            x[1][1]='O';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }

                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }

                    }

                    else if(choice==6)
                    {
                        if(x[1][2]=='6')
                        {
                            x[1][2]='O';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }

                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }

                    }
                    else if(choice==7)
                    {
                        if(x[2][0]=='7')
                        {
                            x[2][0]='O';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }



                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }
                    }
                    else if(choice==8)
                    {
                        if(x[2][1]=='8')
                        {
                            x[2][1]='O';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }


                    }

                    else if(choice==9)
                    {
                        if(x[2][2]=='9')
                        {
                            x[2][2]='O';
                            system("cls");
                            show();
                            cheak();
                            if(a==1)
                            {
                                ch++;
                                continue;
                            }
                            else if(a==2)
                            {
                                break;
                            }
                            ch++;
                        }
                        else
                        {
                            system("cls");
                            show();
                            printf("\n\nAlready this position is choosen by a player.\nYou have to take another position.\n\n");
                        }
                    }

                   
					else
                    {
                        system("cls");
                        show();
                        printf("Sorry.... \n\nInvalid move.\n\nTry again.........\n\n");
                        
                    }
                }

            }

            else
            {


                system("cls");
                show();
                system("COLOR 84");
                printf("\n\nThis game is draw\n\nThanx for playing this game.\n\n");
                printf("Want to play again??\n");
                printf("Press 1 for play again: \n");
                printf("press 0 for quit: \n");
                scanf("%d",&play_again);
                if(play_again==1)
                {


                    system("cls");

                    x[0][0]='1';
                    x[0][1]= '2';
                    x[0][2]= '3';
                    x[1][0]='4';
                    x[1][1]='5';
                    x[1][2]='6';
                    x[2][0]='7';
                    x[2][1]='8';
                    x[2][2]='9';
                    show();
                    continue;
                }
                else if(play_again==0)
                {
                    break;
                }
                else
                {
                    printf("\nWrong choice!!!!!!\n\n");
                    break;
                }

            }

        }

    }

    else if(start==0)
    {
        system("COLOR FD");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tYou have been quite this game............\n\n\n");
        printf("\n\t\t\t\tThanks for playing");
        printf("\n\n\t\t\t\t\t\t\tKishor Dhar Hridoy");
        printf("\n\n\n\n\n\n\n\n");

    }

    return 0;
}
