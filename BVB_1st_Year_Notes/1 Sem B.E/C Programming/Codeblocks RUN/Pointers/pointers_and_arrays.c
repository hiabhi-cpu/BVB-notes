//C Program for pointers and arrays
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:pointers_and_arrays.c
    Date:19/04/2022
*/

#include<stdio.h>

void read_array(int*numptr, int*nptr)
{
    int i;
    for(i=0;i<*nptr;i++)
    {
        scanf("%d",numptr);
        numptr++;
    }
}

void display_array(int*numptr, int*nptr)
{
    int i;
    for(i=0;i<*nptr;i++)
    {
        printf("%d\t ",*numptr);
        numptr++;
    }
}


int sum_array(int*numptr, int*nptr)
{
    int i,sum=0;
    for(i=0;i<*nptr;i++)
    {
        sum=sum+*numptr;
        numptr++;
    }
    return sum;
}
int main()
{
    int num[10],n;
    int*nptr=&n;
    int sum=0;
    printf("Enter n value\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    read_array(num,nptr);
    printf("The array elements are\n");
    display_array(num,nptr);
    printf("\n");
    printf("The sum of array elements is\n",sum);
    sum=sum_array(num,nptr);
    printf("%d",sum);
    return 0;
}

