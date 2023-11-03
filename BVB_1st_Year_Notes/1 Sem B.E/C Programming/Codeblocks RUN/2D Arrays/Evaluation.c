//C Program to find total number of goals scored in each of 5 tournaments and average goals hit by a player.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:evaluation.c
    Date:04/04/2022
*/
#include<stdio.h>
#define ROWS 20
#define COLS 20

//function prototypes
void read_2darray(int goals[ROWS][COLS],int r, int c);
void col_sum(int goals[ROWS][COLS],int r, int c);

int main()
{
    int goals [ROWS][COLS];
    int r,c;
    printf("Enter the number of players in a team\n");
    scanf("%d",&r);
    c=5;
    printf("Enter goals scored by each player in tournaments\n");
    //function calls
    read_2darray(goals,r,c);
    printf("The total number of goals scored in each of 5 tournaments are \n");
    col_sum(goals,r,c);
    printf("Average goals hit by each player are\n");
    avg_goals(goals,r,c);
    return 0;
}


//function definition
void read_2darray(int goals[ROWS][COLS], int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&goals[i][j]);
        }
    }
}

void col_sum(int goals[ROWS][COLS], int r,int c)
{
    int sum[COLS]={0};
    int i,j;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            sum[i]+=goals[j][i];
        }
        printf("\n");
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",sum[i]);
        printf("\n");
    }
}

void avg_goals(int goals[ROWS][COLS], int r,int c)
{
    int sum[ROWS]={0};
    int avg[ROWS]={0};
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i]+=goals[i][j];
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        avg[i]=sum[i]/c;
        printf("%d ",avg[i]);
        printf("\n");
    }
}


