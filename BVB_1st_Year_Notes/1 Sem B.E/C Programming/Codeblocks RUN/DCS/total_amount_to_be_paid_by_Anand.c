//C Program to compute total amount to be paid by Anand.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:total_amount_to_be_paid_by_Anand
    Date:20/02/2022
*/
#include<stdio.h>
int main()
{
    int days;
    float distance,amount;
    printf("Enter the number of days of travel\n");
    scanf("%d",&days);
    if(days>=1&&days<=3)
    {
        printf("Enter the total distance of travel\n");
        scanf("%f",&distance);
        if(distance/days<300)
        {
            amount=days*300*9.5+350*days;
            printf("Amount to be paid by Anand = %0.2f\n",amount);
        }
        else
        {
            amount=distance*9.5+350*days;
            printf("Amount to be paid by Anand = %0.2f\n",amount);
        }
    }
    else if(days>=4&&days<=6)
    {
        printf("Enter the total distance of travel\n");
        scanf("%f",&distance);
        if(distance/days<250)
        {
            amount=days*250*9+300*days;
            printf("Amount to be paid by Anand = %0.2f\n",amount);
        }
        else
        {
            amount=distance*9+300*days;
            printf("Amount to be paid by Anand = %0.2f\n",amount);
        }
    }
    else if(days>=7&&days<=9)
    {
        printf("Enter the total distance of travel\n");
        scanf("%f",&distance);
        if(distance/days<200)
        {
            amount=days*200*8+250*days;
            printf("Amount to be paid by Anand = %0.2f\n",amount);
        }
        else
        {
            amount=distance*8+250*days;
            printf("Amount to be paid by Anand = %0.2f\n",amount);
        }
    }
    else
        printf("Company Won't allow to Travel\n");
        return 0;
}
