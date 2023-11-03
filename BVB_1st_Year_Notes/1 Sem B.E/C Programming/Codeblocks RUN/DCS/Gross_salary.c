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
    float basic_salary,da,hra,gross;
    printf("Enter Basic Salary\n");
    scanf("%f",&basic_salary);
    da=basic_salary*0.4;
    hra=basic_salary*0.2;
    gross=basic_salary+da+hra;
    printf("Dearness Allowance =%f\n",da);
    printf("House Rent Allowance=%f\n",hra);
    printf("Gross Salary=%f\n",gross);
    return 0;
}
