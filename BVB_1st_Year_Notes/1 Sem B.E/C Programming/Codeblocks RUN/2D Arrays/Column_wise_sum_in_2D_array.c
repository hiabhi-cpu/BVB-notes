//C Program to read and calculate column wise sum in 2D Array.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:read_and_calculate_column_wise_sum_in_2D_array.c
    Date:30/03/2022
*/
#include<stdio.h>
#define ROWS 10
#define COLS 10

//function prototypes
void read_2darray(int marks[ROWS][COLS],int r,int c);
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

void columnwise_sum(int marks[ROWS][COLS], int r,int c)
{
    int sub_marks[COLS]={0};
    int i,j;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            sub_marks[i]+=marks[j][i];
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",sub_marks[i]);
        printf("\t");
    }
}

