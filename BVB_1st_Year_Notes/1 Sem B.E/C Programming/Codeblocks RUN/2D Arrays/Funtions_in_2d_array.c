//C Program with functions in 2D Array.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:functions_in_2D_array.c
    Date:30/03/2022
*/
#include<stdio.h>
#define ROWS 10
#define COLS 10

//function prototypes
void read_2darray(int marks[ROWS][COLS],int r,int c);
void display_2darray(int marks[ROWS][COLS],int r, int c);
void rowwise_sum(int marks[ROWS][COLS],int r, int c);
void columnwise_sum(int marks[ROWS][COLS],int r, int c);

int main()
{
    //Declaration of 2D array
    int marks [ROWS][COLS];
    int r,c;
    printf("Enter the number of rows and columns of 2D array\n");
    scanf("%d%d",&r,&c);
    printf("Enter elements of 2D array\n");
    //function calls
    read_2darray(marks,r,c);
    printf("The 2D array elements are \n");
    display_2darray(marks,r,c);
    printf("The rowwise sum of 2D array elements are \n");
    rowwise_sum(marks,r,c);
    printf("The column wise sum of 2D array elements are \n");
    columnwise_sum(marks,r,c);
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

void display_2darray(int marks[ROWS][COLS], int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
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


void columnwise_sum(int marks[ROWS][COLS], int r,int c)
{
    int sub_marks[COLS]={0};
    int i,j,high;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            sub_marks[i]+=marks[j][i];
        }
        printf("\n");
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",sub_marks[i]);
        printf(" ");
    }
    high=find_highest(sub_marks,c);
    printf("\nHighest in the Column wise sum is %d \n",high);
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

