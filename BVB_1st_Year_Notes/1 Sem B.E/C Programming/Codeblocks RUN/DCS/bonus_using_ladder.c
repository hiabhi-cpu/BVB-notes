//C Program to compute bonus of an employee.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:bonus_using_ladder.c
    Date:12/02/2022
*/
#include<stdio.h>
int main()
{
    int experience;
    float basic_salary, bonus;
    printf("Enter the Basic salary and experience of employee \n");
    scanf("%f%d",&basic_salary,&experience);
    if(experience<=7)
    {
        bonus=basic_salary*0.1;
        printf("Bonus=%f\n",bonus);
    }
    else if(experience>=8)
    {
        bonus=basic_salary*0.2;
        printf("Bonus=%f\n",bonus);
    }
    else
    {
        bonus=0;
        printf("Bonus=%f\n",bonus);
    }
    return 0;
}
