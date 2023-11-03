//C Program to check Armstrong number
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:to_check_armstrong_number.c
    Date:02/03/2022
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int number,digit,sum=0,count=0;
    printf("Enter the number\n");
    scanf("%d",&number);
    int copy=number;
    while(number!=0)
    {
        digit=number%10;
        count++;
        number=number/10;
    }
    printf("No of digits=%d\n",count);
    number=copy;
    while(number!=0)
    {
        digit=number%10;
        sum=sum+pow(digit,count);
        number=number/10;
    }
    printf("Sum of powers of digits is=%d\ncopy=number",sum);
    if(sum==copy)
        printf("%d is Armstrong Number\n",copy);
    else
        printf("%d is not Armstrong Number\n",copy);
    return 0;
}
