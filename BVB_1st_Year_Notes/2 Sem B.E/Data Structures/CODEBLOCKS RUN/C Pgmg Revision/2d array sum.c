#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define R 20
#define C 20
void read(int a[R][C],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

int sum(int a[R][C],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            sum+=a[i][j];
        }
    }
    return sum;
}
void update(int a[R][C],int n,int s)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                a[i][j]+=s;
            }
        }
    }
}
void display(int a[R][C],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[R][C],m,n,s;
    scanf("%d %d",&m,&n);
    if(n<=0||m<=0||n!=m)
    {
        printf("Invalid matrix size.");
        exit(0);
    }
    read(a,n);
    s=sum(a,n);
    update(a,n,s);
    display(a,n);
    return 0;
}

