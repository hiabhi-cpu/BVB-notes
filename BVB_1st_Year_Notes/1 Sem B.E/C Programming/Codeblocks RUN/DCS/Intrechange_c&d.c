//C Program to compute gross salary
/*  Name:Prashanth S Aski
    Roll No:1736
    Division:Q
    Program Name:gross_salary.c
    Date:02/02/2022
*/
#include<stdio.h>
int main()
{
    int c,d,t;
    printf("Enter values for c and d\n");
    scanf("%d,%d",&c,&d);
    printf("Before interchange\nc=%d\nd=%d\n",c,d);
    t=c;
    c=d;
    d=t;
    printf("c=%d\nd=%d\n",c,d);
    return 0;
}
