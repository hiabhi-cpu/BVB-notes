#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define R 20
#define C 20
void read(int a[R][C],int r,int c)
{
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
}
void display(int a[R][C],int b[C][R],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
             printf("%d",b[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[R][C],b[C][R],r,c;
    scanf("%d %d",&r,&c);
    if(r<=0||c<=0)
    {
        printf("Invalid image size.");
        exit(0);
    }
    read(a,r,c);
    display(a,b,r,c);
    return 0;
}

