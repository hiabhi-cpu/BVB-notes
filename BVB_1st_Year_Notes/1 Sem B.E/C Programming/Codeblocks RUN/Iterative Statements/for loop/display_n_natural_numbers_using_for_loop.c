//C Program to display n natural numbers using for loop.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:display_n_natural_numbers_using_for_loop.c
    Date:05/03/2022
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n value\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
    }
    return 0;
}
