#include <stdio.h>

// Cells of the interface
char cell1 = ' ', cell2 = ' ', cell3 = ' ', cell4 = ' ', cell5 = ' ', cell6 = ' ', cell7 = ' ', cell8 = ' ', cell9 = ' ';

// Function that by AI chooses to play
int findChoiceByPC()
{
    int choice;
    // First training phase
    if (cell1 == cell2 && cell1 == 'X' && cell3 == ' ')
        choice = 3;
    else if (cell1 == cell4 && cell1 == 'X' && cell7 == ' ')
        choice = 7;
    else if (cell1 == cell5 && cell1 == 'X' && cell9 == ' ')
        choice = 9;
    else if (cell2 == cell5 && cell2 == 'X' && cell8 == ' ')
        choice = 8;
    else if (cell2 == cell3 && cell2 == 'X' && cell1 == ' ')
        choice = 1;
    else if (cell3 == cell6 && cell3 == 'X' && cell9 == ' ')
        choice = 9;
    else if (cell3 == cell5 && cell3 == 'X' && cell7 == ' ')
        choice = 7;
    else if (cell4 == cell5 && cell4 == 'X' && cell6 == ' ')
        choice = 6;
    else if (cell4 == cell7 && cell4 == 'X' && cell1 == ' ')
        choice = 1;
    else if (cell5 == cell6 && cell5 == 'X' && cell4 == ' ')
        choice = 4;
    else if (cell5 == cell9 && cell5 == 'X' && cell1 == ' ')
        choice = 1;
    else if (cell5 == cell8 && cell5 == 'X' && cell2 == ' ')
        choice = 2;
    else if (cell5 == cell7 && cell5 == 'X' && cell3 == ' ')
        choice = 3;
    else if (cell6 == cell9 && cell6 == 'X' && cell3 == ' ')
        choice = 3;
    else if (cell7 == cell8 && cell7 == 'X' && cell9 == ' ')
        choice = 9;
    else if (cell8 == cell9 && cell8 == 'X' && cell7 == ' ')
        choice = 7;

    else if (cell1 == cell3 && cell1 == 'X' && cell2 == ' ')
        choice = 2;
    else if (cell7 == cell9 && cell7 == 'X' && cell8 == ' ')
        choice = 8;
    else if (cell1 == cell9 && cell1 == 'X' && cell5 == ' ')
        choice = 5;
    else if (cell3 == cell7 && cell3 == 'X' && cell5 == ' ')
        choice = 5;
    else if (cell1 == cell7 && cell1 == 'X' && cell4 == ' ')
        choice = 4;
    else if (cell2 == cell8 && cell2 == 'X' && cell5 == ' ')
        choice = 5;
    else if (cell3 == cell9 && cell3 == 'X' && cell6 == ' ')
        choice = 6;
    else if (cell4 == cell6 && cell4 == 'X' && cell5 == ' ')
        choice = 5;

    // Second Training phase
    else if (cell1 == cell2 && cell1 == 'O' && cell3 == ' ')
        choice = 3;
    else if (cell1 == cell4 && cell1 == 'O' && cell7 == ' ')
        choice = 7;
    else if (cell1 == cell5 && cell1 == 'O' && cell9 == ' ')
        choice = 9;
    else if (cell2 == cell5 && cell2 == 'O' && cell8 == ' ')
        choice = 8;
    else if (cell2 == cell3 && cell2 == 'O' && cell1 == ' ')
        choice = 1;
    else if (cell3 == cell6 && cell3 == 'O' && cell9 == ' ')
        choice = 9;
    else if (cell3 == cell5 && cell3 == 'O' && cell7 == ' ')
        choice = 7;
    else if (cell4 == cell5 && cell4 == 'O' && cell6 == ' ')
        choice = 6;
    else if (cell4 == cell7 && cell4 == 'O' && cell1 == ' ')
        choice = 1;
    else if (cell5 == cell6 && cell5 == 'O' && cell4 == ' ')
        choice = 4;
    else if (cell5 == cell9 && cell5 == 'O' && cell1 == ' ')
        choice = 1;
    else if (cell5 == cell8 && cell5 == 'O' && cell2 == ' ')
        choice = 2;
    else if (cell5 == cell7 && cell5 == 'O' && cell3 == ' ')
        choice = 3;
    else if (cell6 == cell9 && cell6 == 'O' && cell3 == ' ')
        choice = 3;
    else if (cell7 == cell8 && cell7 == 'O' && cell9 == ' ')
        choice = 9;
    else if (cell8 == cell9 && cell8 == 'O' && cell7 == ' ')
        choice = 7;

    else if (cell1 == cell3 && cell1 == 'O' && cell2 == ' ')
        choice = 2;
    else if (cell7 == cell9 && cell7 == 'O' && cell8 == ' ')
        choice = 8;
    else if (cell1 == cell9 && cell1 == 'O' && cell5 == ' ')
        choice = 5;
    else if (cell3 == cell7 && cell3 == 'O' && cell5 == ' ')
        choice = 5;
    else if (cell1 == cell7 && cell1 == 'O' && cell4 == ' ')
        choice = 4;
    else if (cell2 == cell8 && cell2 == 'O' && cell5 == ' ')
        choice = 5;
    else if (cell3 == cell9 && cell3 == 'O' && cell6 == ' ')
        choice = 6;
    else if (cell4 == cell6 && cell4 == 'O' && cell5 == ' ')
        choice = 5;

    // Third training phase
    else if (cell3 == 'X' /*AI is X*/ && cell2 == ' ' && cell1 == ' ')
        choice = 1;
    else if (cell1 == 'X' /*AI is X*/ && cell2 == ' ' && cell3 == ' ')
        choice = 3;
    else if (cell1 == 'X' /*AI is X*/ && cell5 == ' ' && cell9 == ' ')
        choice = 5;
    else if (cell2 == 'X' /*AI is X*/ && cell5 == ' ' && cell8 == ' ')
        choice = 5;
    else if ((cell3 == 'X' /*AI is X*/ && cell5 == ' ' && cell7 == ' '))
        choice = 5;
    else if (cell1 == 'X' /*AI is X*/ && cell4 == ' ' && cell7 == ' ')
        choice = 7;
    else if (cell2 == 'X' /*AI is X*/ && cell1 == ' ' && cell3 == ' ')
        choice = 1;
    else if (cell3 == 'X' /*AI is X*/ && cell6 == ' ' && cell9 == ' ')
        choice = 9;
    else if (cell4 == 'X' /*AI is X*/ && cell1 == ' ' && cell7 == ' ')
        choice = 1;
    else if (cell4 == 'X' /*AI is X*/ && cell5 == ' ' && cell6 == ' ')
        choice = 5;
    else if (cell5 == 'X' /*AI is X*/ && cell4 == ' ' && cell6 == ' ')
        choice = 4;
    else if (cell5 == 'X' /*AI is X*/ && cell1 == ' ' && cell9 == ' ')
        choice = 1;
    else if (cell5 == 'X' /*AI is X*/ && cell3 == ' ' && cell7 == ' ')
        choice = 3;
    else if (cell5 == 'X' /*AI is X*/ && cell2 == ' ' && cell8 == ' ')
        choice = 2;
    else if (cell6 == 'X' /*AI is X*/ && cell5 == ' ' && cell4 == ' ')
        choice = 5;
    else if (cell6 == 'X' /*AI is X*/ && cell3 == ' ' && cell9 == ' ')
        choice = 3;
    else if (cell7 == 'X' /*AI is X*/ && cell8 == ' ' && cell9 == ' ')
        choice = 8;
    else if (cell7 == 'X' /*AI is X*/ && cell4 == ' ' && cell1 == ' ')
        choice = 4;
    else if (cell7 == 'X' /*AI is X*/ && cell5 == ' ' && cell3 == ' ')
        choice = 5;
    else if (cell8 == 'X' /*AI is X*/ && cell5 == ' ' && cell2 == ' ')
        choice = 5;
    else if (cell8 == 'X' /*AI is X*/ && cell7 == ' ' && cell9 == ' ')
        choice = 7;
    else if (cell9 == 'X' /*AI is X*/ && cell8 == ' ' && cell7 == ' ')
        choice = 8;
    else if (cell9 == 'X' /*AI is X*/ && cell6 == ' ' && cell3 == ' ')
        choice = 6;
    else if (cell9 == 'X' /*AI is X*/ && cell5 == ' ' && cell1 == ' ')
        choice = 5;
    else
    {
        if (cell5 == ' ')
            choice = 5;
        else if (cell1 == ' ')
            choice = 1;
        else if (cell2 == ' ')
            choice = 2;
        else if (cell3 == ' ')
            choice = 3;
        else if (cell4 == ' ')
            choice = 4;
        else if (cell6 == ' ')
            choice = 6;
        else if (cell7 == ' ')
            choice = 7;
        else if (cell8 == ' ')
            choice = 8;
        else if (cell9 == ' ')
            choice = 9;
    }
    return choice;
}

void printingInterface()
{
    printf("\n %c | %c | %c ", cell1, cell2, cell3);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", cell4, cell5, cell6);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", cell7, cell8, cell9);

    printf("\n\n");
}

void makingMove(char option, char choice, int *i)
{
    if (choice == 1)
    {
        if (cell1 == ' ')
        {
            cell1 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 2)
    {
        if (cell2 == ' ')
        {
            cell2 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 3)
    {
        if (cell3 == ' ')
        {
            cell3 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 4)
    {
        if (cell4 == ' ')
        {
            cell4 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 5)
    {
        if (cell5 == ' ')
        {
            cell5 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 6)
    {
        if (cell6 == ' ')
        {
            cell6 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 7)
    {
        if (cell7 == ' ')
        {
            cell7 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 8)
    {
        if (cell8 == ' ')
        {
            cell8 = option;
        }
        else
        {
            printf("\nInvalid Input, Try again mate!\n");
            *i -= 1;
        }
    }
    else if (choice == 9)
    {
        if (cell9 == ' ')
        {
            cell9 = option;
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

void checkingWin(int *winner, char choice)
{
    if (choice == 1)
    {
        if (cell1 == 'X')
            *winner = 1;
        else
            *winner = 2;
    }
    if (choice == 2)
    {
        if (cell2 == 'X')
            *winner = 1;
        else
            *winner = 2;
    }
    if (choice == 3)
    {
        if (cell3 == 'X')
            *winner = 1;
        else
            *winner = 2;
    }
    if (choice == 4)
    {
        if (cell4 == 'X')
            *winner = 1;
        else
            *winner = 2;
    }
    if (choice == 5)
    {
        if (cell5 == 'X')
            *winner = 1;
        else
            *winner = 2;
    }
    if (choice == 6)
    {
        if (cell6 == 'X')
            *winner = 1;
        else
            *winner = 2;
    }
    if (choice == 7)
    {
        if (cell7 == 'X')
            *winner = 1;
        else
            *winner = 2;
    }
    if (choice == 8)
    {
        if (cell8 == 'X')
            *winner = 1;
        else
            *winner = 2;
    }
    if (choice == 9)
    {
        if (cell9 == 'X')
            *winner = 1;
        else
            *winner = 2;
    }
}

int main()
{
    printf("\n============================================");
    printf("\n   WELCOME TO TIC TAC TOE by Azizul Hakim\n");
    printf("============================================\n");
    while (1)
    {
        cell1 = ' ', cell2 = ' ', cell3 = ' ', cell4 = ' ', cell5 = ' ', cell6 = ' ', cell7 = ' ', cell8 = ' ', cell9 = ' ';
        printf("\nWant to play multiplayer or with the AI?\n1 : Multiplayer\n2 : With the AI\n=> ");
        int escape = 0;
        int draw = 1;
        char gameMode;
        scanf(" %c", &gameMode);

        if (gameMode - '0' == 1 /*Multiplayer mode*/)
        {
            printf("\nStarting Multiplayer Tic Tac Toe\n");
            // The interface
            printingInterface();

            for (int i = 1; i <= 9; i++)
            {
                char choice;
                if (i % 2 != 0)
                {
                    printf("player-1(X) turn - ");
                    scanf(" %c", &choice);
                    if (choice == 81 || choice == 113)
                    {
                        escape = 1;
                        printf("\nEscaping from battle doesn't make you a man!\nGood Bye!\n\n");
                        break;
                    }
                    makingMove('X', choice - 48, &i);
                }
                else
                {
                    printf("player-2(O) turn - ");
                    scanf(" %c", &choice);
                    if (choice == 81 || choice == 113)
                    {
                        escape = 1;
                        printf("\nEscaping from battle doesn't make you a man!\nGood Bye!\n\n");
                        break;
                    }

                    makingMove('O', choice - 48, &i);
                }

                // The interface
                printingInterface();

                // check if there is win
                int winner;
                if ((cell1 == cell2 && cell1 == cell3 && cell1 != ' ') || (cell4 == cell5 && cell4 == cell6 && cell4 != ' ') || (cell7 == cell8 && cell7 == cell9 && cell7 != ' ') || (cell1 == cell4 && cell1 == cell7 && cell1 != ' ') || (cell2 == cell5 && cell2 == cell8 && cell2 != ' ') || (cell3 == cell6 && cell3 == cell9 && cell3 != ' ') || (cell1 == cell5 && cell1 == cell9 && cell1 != ' ') || (cell3 == cell5 && cell3 == cell7 && cell3 != ' '))
                {
                    checkingWin(&winner, choice - 48);
                    draw = 0;
                    if (winner == 1)
                        printf("Bravo! Player-1(X) is the winner.\n");
                    else if (winner == 2)
                        printf("Bravo! Player-2(O) is the winner.\n");
                    break;
                }
            }

            if (escape == 1)
                break;
            else if (draw)
                printf("The match is tied. It was a Bone to Bone fight!\n");

            // Whether want to play again or not
            char replay;
            printf("\nWant to play again? Y or N : ");
            scanf(" %c", &replay);

            if (replay == 'N' || replay == 'n')
            {
                printf("\nThanks for playing my game, mate!\n\n");
                break;
            }
            else if (replay == 'Y' || replay == 'y')
                continue;
            else
                printf("\nInvalid Input. Assuming you're willing to play again.\n");
        }
        else if (gameMode - '0' == 2 /*Playing with AI*/)
        {
            printf("\nStarting Tic Tac Toe playing with a POWERFUL AI\n\nYou want to move first? Or let the AI move first?\n1. Me(O) first\n2. AI(X) first\n=> ");
            int firstPlayer;
            scanf("%d", &firstPlayer);
            int iteration;

            while (1)
            {
                if (firstPlayer == 1)
                {
                    iteration = 0;
                    break;
                }
                else if (firstPlayer == 2)
                {
                    iteration = 1;
                    break;
                }
                else
                    printf("\nInvalid Input, Try again\n");
            }
            printingInterface();
            int lastIteration = iteration + 8;

            for (int i = iteration; i <= lastIteration; i++)
            {
                char choice;
                if (i % 2 != 0)
                {
                    // computer's turn
                    int pcChoice;
                    pcChoice = findChoiceByPC();
                    printf("Computer's(X) turn - %d \n", pcChoice);
                    choice = pcChoice + 48;

                    makingMove('X', pcChoice, &i);
                }
                else
                {
                    // My Turn(O)
                    printf("Your turn(O) - ");
                    scanf(" %c", &choice);
                    if (choice == 81)
                    {
                        escape = 1;
                        printf("\nEscaping from battle doesn't make you a man!\nGood Bye!\n\n");
                        break;
                    }
                    makingMove('O', choice - 48, &i);
                }
                // The interface
                printingInterface();

                // check if there is win
                int winner;

                if ((cell1 == cell2 && cell1 == cell3 && cell1 != ' ') || (cell4 == cell5 && cell4 == cell6 && cell4 != ' ') || (cell7 == cell8 && cell7 == cell9 && cell7 != ' ') || (cell1 == cell4 && cell1 == cell7 && cell1 != ' ') || (cell2 == cell5 && cell2 == cell8 && cell2 != ' ') || (cell3 == cell6 && cell3 == cell9 && cell3 != ' ') || (cell1 == cell5 && cell1 == cell9 && cell1 != ' ') || (cell3 == cell5 && cell3 == cell7 && cell3 != ' '))
                {
                    checkingWin(&winner, choice - 48);
                    draw = 0;
                    if (winner == 1)
                        printf("ALAS! The AI defeated you!\n");
                    else if (winner == 2)
                        printf("BRAVO! You beat the AI!\n");

                    break;
                }
            }

            if (escape == 1)
                break;
            else if (draw)
                printf("The match is tied. It was a Bone to Bone fight!\n");

            // Whether want to play again or not
            char replay;
            printf("\nWant to play again? Y or N : ");
            scanf(" %c", &replay);

            if (replay == 'N' || replay == 'n')
            {
                printf("\nThanks for playing my game, mate!\n\n");
                break;
            }
            else if (replay == 'Y' || replay == 'y')
                continue;
            else
                printf("\nInvalid Input. Assuming you're willing to play again.\n");
        }
        else
            printf("\nInvalid Input! Shame!\n");
    }

    return 0;
}
