//C Program to swap without using pointers
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:swap_without_using_pointers.c
    Date:19/04/2022
*/

#include<stdio.h>

void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping numbers are\n");
    printf("%d\t%d\n",a,b);
    swap(a,b);
    printf("After swapping numbers are\n");
    printf("%d\t%d\n",a,b);
    return 0;
}
