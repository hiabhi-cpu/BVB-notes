#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define R 20
#define C 20

void prime(int n)
{
    int count=0;
    for(int i=n; i>0; i++)
    {
        count=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
        {
            printf("%d",i);
            break;
        }

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid matrix size.");
        exit(0);
    }
    prime(n);
    return 0;
}
