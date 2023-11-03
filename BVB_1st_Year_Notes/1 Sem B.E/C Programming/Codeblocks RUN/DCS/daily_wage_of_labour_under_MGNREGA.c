//C Program to compute daily wage of labour under MGNREGA
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:daily_wage_of_labour_under_MGNREGA
    Date:19/02/2022
*/
#include<stdio.h>
int main()
{
    int no_of_working_hours,wage;
    char gender;
    printf("Enter the Gender of the Labour(M for male,F for female)\n");
    scanf("%c",&gender);
    printf("Enter the number of working hours\n");
    scanf("%d",&no_of_working_hours);
    switch(gender)
    {
    case 'M':
    case 'm':
        if(no_of_working_hours>=1&&no_of_working_hours<=6)
            wage=no_of_working_hours*50;
        else if(no_of_working_hours>=7&&no_of_working_hours<=10)
            wage=(6*50)+(no_of_working_hours-6)*80;
        else if(no_of_working_hours>10&&no_of_working_hours<=24)
            wage=(6*50)+(4*80)+(no_of_working_hours-10)*150;
        else
            printf("Invalid input for hours\n");
        break;
    case 'F':
    case 'f':
        if(no_of_working_hours>=1&&no_of_working_hours<=6)
            wage=no_of_working_hours*40;
        else if(no_of_working_hours>=7&&no_of_working_hours<=10)
            wage=(6*40)+(no_of_working_hours-6)*60;
        else if(no_of_working_hours>10&&no_of_working_hours<=24)
            wage=(6*40)+(4*60)+(no_of_working_hours-10)*150;
        else
            printf("Invalid input for hours\n");
        break;
    default:
        printf("Invalid input for Gender entered\n");
    }
    printf("Total wage of the labour =%d",wage);
    return 0;
}
