#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define R 20
#define C 20
void read(int a[R][C],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void columnsum(int a[R][C],int r,int c)
{
    int sum;
    for(int i=0;i<c;i++)
    {
        sum=0;
        for(int j=0;j<r;j++)
        {
            sum+=a[j][i];
            a[r][i]=sum;
        }
    }
}
void output(int a[R][C],int r,int c)
{
    int max=0;
    for(int i=0;i<c;i++)
    {
        if(max<=a[r][i])
        {
            max=a[r][i];
        }
    }
    for(int i=0;i<c;i++)
    {
        if(max==a[r][i])
            printf("%d\n",i);
    }
}

int main()
{
    int a[R][C],r,c;
    scanf("%d %d",&r,&c);
    if(r<1||c>100)
    {
        printf("Invalid");
        exit(0);
    }
    read(a,r,c);
    columnsum(a,r,c);
    output(a,r,c);
    return 0;
}
