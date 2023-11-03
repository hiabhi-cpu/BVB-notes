//C Program to display natural numbers till n.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:display_natural_numbers_till_n.c
    Date:26/02/2022
*/
#include <stdio.h>
int main()
{
    int counter=1,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(counter<=n)
    {
        printf("%d\t",counter);
        counter++;
    }
    return 0;
}
