//C Program to compute maximum out of 3 numbers
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:max_of_3_nos
    Date:12/02/2022
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is greatest \n",a);
        else
            printf("%d is greatest \n",c);
    }
    else if(b>c)
        printf("%d is greatest \n",b);
    else
        printf("%d is greatest\n",c);
    return 0;
}
