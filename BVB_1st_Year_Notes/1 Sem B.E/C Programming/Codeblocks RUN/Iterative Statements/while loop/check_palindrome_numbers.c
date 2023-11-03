//C Program to check palindrome numbers.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:check_palindrome_numbers.c
    Date:02/03/2022
*/
#include<stdio.h>
int main()
{
    int number,reverse=0,digit;
    printf("Enter the number\n");
    scanf("%d",&number);
    int copy=number;
    while(number!=0)
    {
        digit=number%10;
        reverse=digit+reverse*10;
        number=number/10;
    }
    if(reverse==copy)
        printf("%d is palindrome\n",copy);
    else
        printf("%d is not palindrome\n",copy);
    return 0;
}
