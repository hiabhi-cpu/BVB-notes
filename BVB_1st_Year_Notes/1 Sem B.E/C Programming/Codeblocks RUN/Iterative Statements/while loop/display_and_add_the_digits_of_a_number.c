//C Program to display and add the digits of a number.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:display_and_add_the_digits_of_a_number.c
    Date:02/03/2022
*/
#include<stdio.h>
int main()
{
    int number,sum=0,digit;
    printf("Enter the number\n");
    scanf("%d",&number);
    while(number!=0)
    {
        digit=number%10;
        printf("The digit is %d\n",digit);
        sum=sum+digit;
        number=number/10;
    }
    printf("Sum of digits=%d\n",sum);
    return 0;
}
