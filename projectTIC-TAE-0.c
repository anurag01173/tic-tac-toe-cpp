#include<stdio.h>

int board[3][3];
int gameMenu()
{
    int choice;
    System("cls");
printf("\n 1. two player game");
printf("n 2.exit");
printf("\n\n Enter your choice");
scanf("%d",&choice);
return choice;

}

void restgame()
{
    int i,j;
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    board[i][j]==2;
}

void displayboard
{
    int i,j,k;
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
{
if(bond[i][j]==2)
printf("%3d",k);


else if(board[i][j]==3)
printf("%3c",x);

else if(board[i][j]==5)
printf("%3c",0);

k++;
}
printf("\n \n");
}
}


int ismovevalid(int move)
{
    switch(move)
    {
    case 1:
        if(board[0][0]==2)
        return 1;
        break;
     case 2:
        if(board[0][1]==2)
        return 1;
        break;
    case 3: 
      if(board[0][2]==2)
        return 1;
        break;
    case 4:
        if(board[1][0]==2)
        return 1;
        break;
    case 5:
       if(board[1][1]==2)
        return 1;
        break;
    case 6:
        if(board[1][2]==2)
        return 1;
        break;
     case 7:
        if(board[2][0]==2)
        return 1;
        break;
   case 8:
        if(board[2][1]==2)
        return 1;
        break;
  case 9:
   if(board[2][2]==2)
        return 1;
        break;
    } 
  return 0;
}