#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define R 50
#define C 50
void read(int a[R][C],int r,int c)
{
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
}
void primecount(int a[R][C],int r,int c)
{
    int count,prime,p;
    for(int i=0; i<r; i++)
    {
        prime=0;
        for(int j=0; j<c; j++)
        {
            for(int k=a[i][j];k==a[i][j];k++)
            {
                count=0;
                for(int l=1; l<=k; l++)
                {
                    if(k%l==0)
                        count++;
                }
                if(count==2)
                {
                    prime++;
                    p=prime;
                }
            }
        }
        a[i][c]=p;
    }
}
void output(int a[R][C],int r,int c)
{
    for(int i=0;i<r;i++)
        printf("%d\n",a[i][c]);
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
    primecount(a,r,c);
    output(a,r,c);
    return 0;
}
