//C Program to swap using pointers
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:swap_using_pointers.c
    Date:19/04/2022
*/

#include<stdio.h>

void swap(int *pa, int *pb)
{
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}

int main()
{
    int a,b;
    int*pa=&a,*pb=&b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping numbers are\n");
    printf("%d\t%d\n",a,b);
    swap(pa,pb);
    printf("After swapping numbers are\n");
    printf("%d\t%d\n",a,b);
    return 0;
}
