//C programming to find maximum out of two numbers
/* Name:PRASHANTH ASKI
   Roll No:1736
   Div:Q
   Program Name:Maximum_out_of_2_numbers.c
   Date:05/02/2022
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any Two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",b,a);
    }
    return 0;
}
