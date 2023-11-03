#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,digit,number,fact=1;
    scanf("%d",&a);
        number=a;
        while(a!=0)
        {
            digit=a%10;
            while(digit!=1)
            {
                fact=fact*digit*(digit-1);
                digit=digit-2;
            }
            a=a/10;
        }
        if(number==fact)
            printf("YES");
        else
            printf("NO");
    return 0;
}


