//C Program for odd sum and even sum of input numbers.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:odd_sum_and_even_sum_of_input_numbers.c
    Date:05/03/2022
*/
#include<stdio.h>
int main()
{
    int odd_sum,even_sum,i,n,number;
    printf("Enter n value\n");
    scanf("%d",&n);
    odd_sum=0;
    even_sum=0;
    for(i=1;i<=n;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&number);
        if(number%2==0)
            //even_sum=even_sum+number;
            even_sum+=number;
        else
            //odd_sum=odd_sum+number;
            odd_sum+=number;
    }
    printf("Sum of odd input numbers is %d\n",odd_sum);
    printf("Sum of even input numbers is %d\n",even_sum);
    return 0;
}
