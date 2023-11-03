#include <stdio.h>
#define R 50
#define C 50

void read_2d_array(int a[R][C],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}

void sum(int a[R][C],int r,int c)
{
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("\n\nSum of all the elements of array is %d\n",sum);
}

void row_wise_sum(int a[R][C],int r,int c)
{
    int sum=0;
    for(int i=0;i<r;i++)
    {
        sum=0;
        for(int j=0;j<c;j++)
        {
            sum+=a[i][j];
            a[i][c]=sum;
        }
    }
    printf("Sum of row elements is\n");
    for(int i=0;i<r;i++)
        printf("%d\n",a[i][c]);
}

void column_wise_sum(int a[R][C],int r,int c)
{
    int sum=0;
    for(int i=0;i<c;i++)
    {
        sum=0;
        for(int j=0;j<r;j++)
        {
            sum+=a[j][i];
            a[r][i]=sum;
        }
    }
    printf("Sum of column elements is\n");
    for(int i=0;i<c;i++)
        printf("%d ",a[r][i]);
}

void display_2d_array(int a[R][C],int r,int c)
{
    printf("Your array is as follows\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[R][C],r,c;
    printf("Enter no of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements\n");
    read_2d_array(a,r,c);
    display_2d_array(a,r,c);
    row_wise_sum(a,r,c);
    column_wise_sum(a,r,c);
    sum(a,r,c);
    return 0;
}
