//C Program to find highest in row wise sum in 2D Array.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:find_highest_in_row_wise_sum_in_2D_array.c
    Date:30/03/2022
*/
#include<stdio.h>
#define ROWS 10
#define COLS 10

//function prototypes
void read_2darray(int marks[ROWS][COLS],int r,int c);
void rowwise_sum(int marks[ROWS][COLS],int r, int c);
int find_highest(int sum[ROWS], int n);

int main()
{
    //Declaration of 2D array
    int marks [ROWS][COLS],totalmarks[ROWS];
    int r,c;
    printf("Enter the number of rows and columns of 2D array\n");
    scanf("%d%d",&r,&c);
    printf("Enter elements of 2D array\n");
    //function calls
    read_2darray(marks,r,c);
    printf("The rowwise sum of 2D array elements are \n");
    rowwise_sum(marks,r,c);
    return 0;
}


//function definition
void read_2darray(int marks[ROWS][COLS], int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&marks[i][j]);
        }
    }
}

void rowwise_sum(int marks[ROWS][COLS], int r,int c)
{
    int totalmarks[ROWS]={0};
    int i,j,high;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            totalmarks[i]+=marks[i][j];
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        printf("%d ",totalmarks[i]);
        printf("\n");
    }
    high=find_highest(totalmarks,r);
    printf("Highest in the Row wise sum is %d \n",high);
}

int find_highest(int sum[ROWS], int n)
{
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(max<sum[i])
            max=sum[i];
    }
    return max;
}
