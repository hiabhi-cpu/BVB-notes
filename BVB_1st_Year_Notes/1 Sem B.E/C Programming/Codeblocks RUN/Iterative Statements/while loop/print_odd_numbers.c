//C Program to print odd numbers
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:print_odd_numbers.c
    Date:26/02/2022
*/
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter n value\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
            printf("%d\t",i);
        i++;
    }
    return 0;
}
