//C Program to compute Total Amount and check Alice shall reach the office.
/*  NAME:PRASHANTH ASKI
    Roll No:1736
    Division:Q
    Program Name:Online_taxi2.c
    Date:05/02/2022
*/
#include<stdio.h>
int main()
{
    int N,D;
    float X,Y,R,total_amount;
    printf("Enter values for X,Y,D,N,R\n");
    scanf("%f,%f,%d,%d,%F",&X,&Y,&D,&N,&R);
    total_amount=X+(D-N)*Y;
    printf("Total Amount is %f\n",total_amount);
    if(total_amount<=R)
    {
        printf("Alice shall reach the office\n");
    }
    else
    {
        printf("Alice shall not reach the office\n");
    }
    return 0;
}
