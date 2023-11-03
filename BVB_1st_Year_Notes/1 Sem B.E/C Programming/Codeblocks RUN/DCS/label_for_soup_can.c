//C Program to compute gross salary
/*  Name:Prashanth S Aski
    Roll No:1736
    Division:Q
    Program Name:gross_salary.c
    Date:02/02/2022
*/
#include<stdio.h>
#define PI 3.142
int main()
{
    float d,h,A,cost,total_cost;
    printf("Enter diamater and height of can\n");
    scanf("%f,%f",&d,&h);
    A=PI*d*h;
    cost=10*A;
    total_cost=cost*1000;
    printf("Total Cost = %f\n",total_cost);
    return 0;

}
