//C Program to print numbers in sequence using loops
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:print_sequence_using_loops.c
    Date:09/03/2022
*/
#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        j=5;
        while(j>=i)
        {
            printf("%d\t",j);
            j--;
        }
        i++;
        printf("\n");
    }
    return 0;
}
