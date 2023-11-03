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

void zero(int a[R][C],int n)
{
    int b[R][C];
    for(int i=0;i<n;i++)
    {
        b[i][i]=a[i][i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        a[i][i]=b[i][i];
    }
}
void prime(int a[R][C],int n)
{
    int count=0;
    for(int k=0;k<n;k++)
    {
        for(int i=a[k][k];i>0;i++)
        {
            count=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                    count++;
            }
            if(count==2)
            {
                a[k][k]=i;
                break;
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
    int a[R][C],n;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid matrix size.");
        exit(0);
    }
    read(a,n);
    zero(a,n);
    prime(a,n);
    display(a,n);
    return 0;
}
