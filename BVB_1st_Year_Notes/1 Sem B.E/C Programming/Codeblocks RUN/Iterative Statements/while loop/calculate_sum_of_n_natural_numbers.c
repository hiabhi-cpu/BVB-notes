//C Program to calculate sum of n natural numbers.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:calculate_sum_of_n_natural_numbers.c
    Date:26/02/2022
*/
#include<stdio.h>
int main()
{
    int sum=0,counter=1,n;
    printf("Enter n value\n");
    scanf("%d",&n);
    while(counter<=n)
    {
        sum=sum+counter;
        counter++;
    }
    printf("Sum of %d natural numbers is %d\n",n,sum);
    return 0;


}
