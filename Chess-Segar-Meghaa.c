#include<stdio.h>
#include<conio.h>
int board[8][8];
char coin;
void boardarray()
{
    //Assigning Values for Pawn
    for (int i=0;i<8;i++)
    {
        board[1][i]=12;
        board[6][i]=6;
    }
    //Assigning Empty Space
    for (int i=2;i<=5;i++)
    {
        for(int j=0;j<8;j++)
        {
            board[i][j]=0;
        }
    }
    //Assigning Values for King
    board[0][4]=9;
    board[7][4]=3;
    //Assigning Value for Queen
    board[0][3]=8;
    board[7][3]=2;
    //Assigning Value for Bishop
    board[0][2]=10;
    board[0][5]=10;
    board[7][2]=4;
    board[7][5]=4;
    //Assigning Value for Knight
    board[0][1]=7;
    board[0][6]=7;
    board[7][1]=1;
    board[7][6]=1;
    //Assigning Value for Rook
    board[0][0]=11;
    board[0][7]=11;
    board[7][0]=5;
    board[7][7]=5;
}
int chboard(int coin)
{
    if(coin==9||coin==3)
    {
        coin='K';
    }
    else if (coin==8||coin==2)
    {
        coin='Q';
    }
    else if (coin==10||coin==4)
    {
        coin='B';
    }
    else if (coin==7||coin==1)
    {
        coin='N';
    }
    else if (coin==11||coin==5)
    {
        coin='R';
    }
    else if (coin==0)
    {
        coin='-';
    }
    else if (coin==6||coin==12)
    {
        coin='P';
    }
    else{

    }
    return coin;
}
void printingboard()
{
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++)
        {
            coin=chboard(board[i][j]);
            printf("%c\t",coin);
        }
        printf("\n");
    }
}
void main()
{

     boardarray();
     printingboard();
}
