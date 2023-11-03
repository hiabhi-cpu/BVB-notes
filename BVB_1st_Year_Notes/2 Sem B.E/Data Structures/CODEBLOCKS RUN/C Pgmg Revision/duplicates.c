#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void read(int a[30],int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void display(int a[30],int n)
{
    int i,j,b[30],c=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b[i]=a[i];
                a[j]=0;
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("No Duplicate");
        exit(0);
    }
        for(i=0;i<n;i++)
        {
            if(b[i]!=0)
            {
                printf("%d ",b[i]);
            }
        }
}
int main()
{
    int a[30],n;
    scanf("%d",&n);
    if(n<1||n>10000)
    {
        printf("Invalid");
        exit(0);
    }
    read(a,n);
    display(a,n);
    return 0;
}

