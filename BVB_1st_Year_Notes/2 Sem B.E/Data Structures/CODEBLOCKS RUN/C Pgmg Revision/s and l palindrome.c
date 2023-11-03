#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void spalindrome(int a,int b)
{
    int rev,r,x;
    for(int i=a+1;i<b;i++)
    {
        x=i;
        rev=0;
        r=0;
        while(i!=0)
        {
            r=i%10;
            rev=rev*10+r;
            i=i/10;
        }
        if(x==rev)
        {
            printf("Smallest palindrome = %d\n",x);
            break;
        }
    }

}
void lpalindrome(int a,int b)
{
    int rev1,r1,y;
    for(int i=(b-1);i>a;i--)
    {
        y=i;
        while(i!=0)
        {
            rev1=0;
            r1=i%10;
            rev1=rev1*10+r1;
            i=i/10;
        }
        if(y==rev1)
        {
            printf("Largest palindrome = %d",y);
            break;
        }
    }
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<0||b<0||a>b)
    {
        printf("Invalid L and K");
        exit(0);
    }
    spalindrome(a,b);
    lpalindrome(a,b);
    return 0;
}

