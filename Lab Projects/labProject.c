#include <stdio.h>

// Function that by Computer chooses to play
int findChoice(int cell1, int cell2, int cell3, int cell4, int cell5, int cell6, int cell7, int cell8, int cell9)
{
    int choice;

    if (cell1 == cell2 && cell1 != ' ' && cell3 == ' ')
    {
        choice = 3;
    }
    else if (cell1 == cell4 && cell1 != ' ' && cell7 == ' ')
    {
        choice = 7;
    }
    else if (cell1 == cell5 && cell1 != ' ' && cell9 == ' ')
    {
        choice = 9;
    }
    else if (cell3 == cell6 && cell3 != ' ' && cell9 == ' ')
    {
        choice = 9;
    }
    else if (cell4 == cell5 && cell4 != ' ' && cell6 == ' ')
    {
        choice = 6;
    }
    else if (cell7 == cell8 && cell7 != ' ' && cell9 == ' ')
    {
        choice = 9;
    }
    else if (cell2 == cell5 && cell2 != ' ' && cell8 == ' ')
    {
        choice = 8;
    }
    else if (cell3 == cell5 && cell3 != ' ' && cell7 == ' ')
    {
        choice = 7;
    }
    else if (cell1 == cell3 && cell1 != ' ' && cell2 == ' ')
    {
        choice = 2;
    }
    else if (cell4 == cell6 && cell4 != ' ' && cell5 == ' ')
    {
        choice = 5;
    }
    else if (cell7 == cell9 && cell7 != ' ' && cell8 == ' ')
    {
        choice = 8;
    }
    else if (cell1 == cell9 && cell1 != ' ' && cell5 == ' ')
    {
        choice = 5;
    }
    else if (cell3 == cell7 && cell3 != ' ' && cell5 == ' ')
    {
        choice = 5;
    }
    else if (cell1 == cell7 && cell1 != ' ' && cell4 == ' ')
    {
        choice = 4;
    }
    else if (cell2 == cell8 && cell2 != ' ' && cell5 == ' ')
    {
        choice = 5;
    }
    else if (cell3 == cell9 && cell3 != ' ' && cell6 == ' ')
    {
        choice = 6;
    }
    else
    {
        if (cell1 == ' ')
        {
            choice = 1;
        }
        else if (cell2 == ' ')
        {
            choice = 2;
        }
        else if (cell3 == ' ')
        {
            choice = 3;
        }
        else if (cell4 == ' ')
        {
            choice = 4;
        }
        else if (cell5 == ' ')
        {
            choice = 5;
        }
        else if (cell6 == ' ')
        {
            choice = 6;
        }
        else if (cell7 == ' ')
        {
            choice = 7;
        }
        else if (cell8 == ' ')
        {
            choice = 8;
        }
        else if (cell9 == ' ')
        {
            choice = 9;
        }
    }

    return choice;
}

void printingInterface(char cell1, char cell2, char cell3, char cell4, char cell5, char cell6, char cell7, char cell8, char cell9)
{
    printf("\n %c ", cell1);
    printf("| ");

    printf("%c ", cell2);
    printf("| ");
    printf("%c ", cell3);
    printf("\n");
    printf("-----------\n");
    printf(" %c ", cell4);
    printf("| ");

    printf("%c ", cell5);
    printf("| ");

    printf("%c ", cell6);

    printf("\n");
    printf("-----------\n");
    printf(" %c ", cell7);
    printf("| ");

    printf("%c ", cell8);
    printf("| ");

    printf("%c ", cell9);

    printf("\n\n");
}

void givingChoice(char option, int choice, char *cell1, char *cell2, char *cell3, char *cell4, char *cell5, char *cell6, char *cell7, char *cell8, char *cell9, int *i)
{
    if (choice == 1)
    {
        if (*cell1 == ' ')
        {
            *cell1 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 2)
    {
        if (*cell2 == ' ')
        {
            *cell2 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 3)
    {
        if (*cell3 == ' ')
        {
            *cell3 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 4)
    {
        if (*cell4 == ' ')
        {
            *cell4 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 5)
    {
        if (*cell5 == ' ')
        {
            *cell5 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 6)
    {
        if (*cell6 == ' ')
        {
            *cell6 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 7)
    {
        if (*cell7 == ' ')
        {
            *cell7 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 8)
    {
        if (*cell8 == ' ')
        {
            *cell8 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 9)
    {
        if (*cell9 == ' ')
        {
            *cell9 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else
    {
        printf("\nInvalid Input, Try again mate!\n");

        *i -= 1;
    }
}

void checkingWin(char cell1, char cell2, char cell3, char cell4, char cell5, char cell6, char cell7, char cell8, char cell9, int *winner, int choice)
{
    if (choice == 1)
    {
        if (cell1 == 'X')
        {
            *winner = 1;
        }
        else
        {
            *winner = 2;
        }
    }
    if (choice == 2)
    {
        if (cell2 == 'X')
        {
            *winner = 1;
        }
        else
        {
            *winner = 2;
        }
    }
    if (choice == 3)
    {
        if (cell3 == 'X')
        {
            *winner = 1;
        }
        else
        {
            *winner = 2;
        }
    }
    if (choice == 4)
    {
        if (cell4 == 'X')
        {
            *winner = 1;
        }
        else
        {
            *winner = 2;
        }
    }
    if (choice == 5)
    {
        if (cell5 == 'X')
        {
            *winner = 1;
        }
        else
        {
            *winner = 2;
        }
    }
    if (choice == 6)
    {
        if (cell6 == 'X')
        {
            *winner = 1;
        }
        else
        {
            *winner = 2;
        }
    }
    if (choice == 7)
    {
        if (cell7 == 'X')
        {
            *winner = 1;
        }
        else
        {
            *winner = 2;
        }
    }
    if (choice == 8)
    {
        if (cell8 == 'X')
        {
            *winner = 1;
        }
        else
        {
            *winner = 2;
        }
    }
    if (choice == 9)
    {
        if (cell9 == 'X')
        {
            *winner = 1;
        }
        else
        {
            *winner = 2;
        }
    }
}

int main()
{

    while (1)
    {

        char cell1 = ' ', cell2 = ' ', cell3 = ' ', cell4 = ' ', cell5 = ' ', cell6 = ' ', cell7 = ' ', cell8 = ' ', cell9 = ' ';

        printf("\nWant to play multiplayer or with the Computer?\n1 : Multiplayer\n2 : With the Computer\n=> ");

        int gameMode;
        scanf("%d", &gameMode);

        if (gameMode == 1 /*Multiplayer mode*/)
        {
            int draw = 1;
            printf("\nStarting Multiplayer Tic Tac Toe\n");
            // The interface
            printingInterface(cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);

            for (int i = 1; i <= 9; i++)
            {
                int choice;

                if (i % 2 != 0)
                {
                    printf("player-1(X) turn - ");
                    scanf("%d", &choice);

                    givingChoice('X', choice, &cell1, &cell2, &cell3, &cell4, &cell5, &cell6, &cell7, &cell8, &cell9, &i);
                }
                else
                {
                    printf("player-2(O) turn - ");
                    scanf("%d", &choice);

                    givingChoice('O', choice, &cell1, &cell2, &cell3, &cell4, &cell5, &cell6, &cell7, &cell8, &cell9, &i);
                }

                // The interface
                printingInterface(cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);

                // check if there is win
                int winner;

                if ((cell1 == cell2 && cell1 == cell3 && cell1 != ' ') || (cell4 == cell5 && cell4 == cell6 && cell4 != ' ') || (cell7 == cell8 && cell7 == cell9 && cell7 != ' ') || (cell1 == cell4 && cell1 == cell7 && cell1 != ' ') || (cell2 == cell5 && cell2 == cell8 && cell2 != ' ') || (cell3 == cell6 && cell3 == cell9 && cell3 != ' ') || (cell1 == cell5 && cell1 == cell9 && cell1 != ' ') || (cell3 == cell5 && cell3 == cell7 && cell3 != ' '))
                {
                    checkingWin(cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9, &winner, choice);

                    draw = 0;

                    if (winner == 1)
                    {
                        printf("Bravo! Player-1(X) is the winner.");
                    }
                    else if (winner == 2)
                    {
                        printf("Bravo! Player-2(O) is the winner.");
                    }

                    break;
                }
            }

            if (draw)
            {
                printf("The match is tied. It was a Bone to Bone fight!\n\n");
            }

            // Whether want to play again or not
            char replay;
            printf("\nWant to play again? Y or N : ");
            scanf(" %c", &replay);

            if (replay == 'N')
            {
                printf("\nThanks for playing my game, mate!\n");
                break;
            }
        }
        else if (gameMode == 2 /*Playing with AI*/)
        {
            printf("\nStarting Tic Tac Toe playing with The Computer\n");

            int draw = 1;

            for (int i = 1; i <= 9; i++)
            {
                int choice;

                if (i % 2 != 0)
                {
                    // computer's turn
                    choice = findChoice(cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);
                    printf("Computer's(X) turn - %d \n", choice);

                    givingChoice('X', choice, &cell1, &cell2, &cell3, &cell4, &cell5, &cell6, &cell7, &cell8, &cell9, &i);
                }
                else
                {
                    // My Turn(O)
                    printf("Your turn(O) - ");
                    scanf("%d", &choice);

                    givingChoice('O', choice, &cell1, &cell2, &cell3, &cell4, &cell5, &cell6, &cell7, &cell8, &cell9, &i);
                }

                // The interface
                printingInterface(cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9);

                // check if there is win
                int winner;

                if ((cell1 == cell2 && cell1 == cell3 && cell1 != ' ') || (cell4 == cell5 && cell4 == cell6 && cell4 != ' ') || (cell7 == cell8 && cell7 == cell9 && cell7 != ' ') || (cell1 == cell4 && cell1 == cell7 && cell1 != ' ') || (cell2 == cell5 && cell2 == cell8 && cell2 != ' ') || (cell3 == cell6 && cell3 == cell9 && cell3 != ' ') || (cell1 == cell5 && cell1 == cell9 && cell1 != ' ') || (cell3 == cell5 && cell3 == cell7 && cell3 != ' '))
                {
                    checkingWin(cell1, cell2, cell3, cell4, cell5, cell6, cell7, cell8, cell9, &winner, choice);
                    draw = 0;

                    if (winner == 1)
                    {
                        printf("Alas! The Computer defeated you!");
                    }
                    else if (winner == 2)
                    {
                        printf("Bravo! You beat the Computer!");
                    }

                    break;
                }
            }

            if (draw)
            {
                printf("The match is tied. It was a Bone to Bone fight!\n");
            }

            // Whether want to play again or not
            char replay;
            printf("\nWant to play again? Y or N : ");
            scanf(" %c", &replay);

            if (replay == 'N')
            {
                printf("\nThanks for playing my game, mate!\n");
                break;
            }
        }
    }

    return 0;
}
