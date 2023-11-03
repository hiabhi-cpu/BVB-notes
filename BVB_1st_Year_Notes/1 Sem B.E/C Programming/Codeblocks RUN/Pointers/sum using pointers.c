//C Program to
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:
    Date:19/04/2022
*/

#include<stdio.h>

//function definition
void sum(int*ptr,int*ptr2)
{
    *ptr2=*ptr+*ptr2;
}

int main()
{
    int a,b;
    int*pa,*pb;
    pa=&a;
    pb=&b;
    printf("Enter 2 numbers \n");
    scanf("%d%d",&a,&b);
    //function call
    sum(pa,pb);
    printf("Sum of 2 numbers is %d\n",*pb);
    return 0;
}
