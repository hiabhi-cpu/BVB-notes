//C Program to find biggest
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:biggest.c
    Date:19/04/2022
*/

#include<stdio.h>
void biggest(int*pa,int*pb)
{
    if(*pa>*pb)
    {
        printf("%d is biggest\n",*pa);
    }
    else
    {
        printf("%d is biggest\n",*pb);
    }
}


int main()
{
    int a,b;
    printf("Enter 2 numbers \n");
    scanf("%d%d",&a,&b);
    //call by reference
    biggest(&a,&b);
    return 0;
}

