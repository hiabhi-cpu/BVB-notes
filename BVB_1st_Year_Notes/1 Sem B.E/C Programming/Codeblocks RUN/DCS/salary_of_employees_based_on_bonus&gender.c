//C Program to compute salary of employees based on bonus and gender
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:salary_of_employees_based_on_bonus&gender
    Date:16/02/2022
*/
#include<stdio.h>
int main()
{
    int basic_salary,net_salary;
    float bonus;
    char gender;
    printf("Enter the Gender of the employee\n");
    scanf("%c",&gender);
    printf("Enter the Basic salary of the employee\n");
    scanf("%d",&basic_salary);
    switch(gender)
    {
    case 'M':
    case 'm':
        if(basic_salary<10000)
        {
            bonus=basic_salary*0.07;
            net_salary=basic_salary+bonus;
            printf("Bonus=%0.2f\nNet Salary=%d\n",bonus,net_salary);
        }
        else
        {
            bonus=basic_salary*0.05;
            net_salary=basic_salary+bonus;
            printf("Bonus=%0.2f\nNet Salary=%d\n",bonus,net_salary);
        }
        break;
    case 'F':
    case 'f':
        if(basic_salary<10000)
        {
            bonus=basic_salary*0.12;
            net_salary=basic_salary+bonus;
            printf("Bonus=%0.2f\nNet Salary=%d\n",bonus,net_salary);
        }
        else
        {
            bonus=basic_salary*0.10;
            net_salary=basic_salary+bonus;
            printf("Bonus=%0.2f\nNet Salary=%d\n",bonus,net_salary);
        }
        break;
    default:
        {
            printf("Invalid input for Gender");
        }
    }
    return 0;
}
