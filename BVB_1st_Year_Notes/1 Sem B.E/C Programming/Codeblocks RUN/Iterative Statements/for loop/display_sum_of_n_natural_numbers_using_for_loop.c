//C Program to display sum of n natural numbers using for loop.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:display_sum_of_n_natural_numbers_using_for_loop.c
    Date:05/03/2022
*/
#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter n value\n");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of %d natural numbers is %d\n",n,sum);
    return 0;
}
