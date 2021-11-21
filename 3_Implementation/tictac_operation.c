#include"conio.h"
#include"stdio.h"
int main()
{
    int player = 1, i, choice;
 
    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;
 
        printf("   Player %d, enter a number:  ", player);
        scanf("%d", &choice);
 
        mark = (player == 1) ? 'X' : 'O';
 
        if (choice == 1 && square[1] == '1')
            square[1] = mark;
 
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
 
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
 
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
 
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
 
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
 
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
 
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
 
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
 
        else
        {
            printf("   Invalid move ");
 
            player--;
            getch();
        }
        i = checkwin();
 
        player++;
    }while (i ==  - 1);
 
    board();
 
    if (i == 1)
        printf("   ==>\aPlayer %d win ", --player);
    else
        printf("   ==>\aGame draw");
 
    getch();
 
    return 0;
}

void board()
{
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t   Tic Tac Toe");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
 
    printf("   Player 1 (X)  -  Player 2 (O)\n\n");
 
 
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t|     |     |     |\n");
    printf("\t|  %c  |  %c  |  %c  |\n", square[1], square[2], square[3]);
 
    printf("\t|_____|_____|_____|\n");
    printf("\t|     |     |     |\n");
 
    printf("\t|  %c  |  %c  |  %c  |\n", square[4], square[5], square[6]);
 
    printf("\t|_____|_____|_____|\n");
    printf("\t|     |     |     |\n");
 
    printf("\t|  %c  |  %c  |  %c  |\n", square[7], square[8], square[9]);
 
    printf("\t|     |     |     |\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
}