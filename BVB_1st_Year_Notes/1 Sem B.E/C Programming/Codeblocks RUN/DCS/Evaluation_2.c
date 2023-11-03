//C Program to compute the loan amount.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:to_compute_the_loan_amount.
    Date:23/02/2022
*/
#include<stdio.h>
int main()
{
    int breadth,width,area,total_cost,net_cost,loan_amount;
    printf("Enter the dimension of the site\n");
    scanf("%d%d",&breadth,&width);
    area=breadth*width;
    if(area==600)
    {
        total_cost=area*2000;
        net_cost=total_cost+0.08*total_cost+0.02*total_cost;
        loan_amount=0.8*net_cost;
    }
    else if(area==1200)
    {
        total_cost=area*2200;
        net_cost=total_cost+0.09*total_cost+0.03*total_cost;
        loan_amount=0.8*net_cost;
    }
    else if(area==2400)
    {
        total_cost=area*2500;
        net_cost=total_cost+0.1*total_cost+0.04*total_cost;
        loan_amount=0.8*net_cost;
    }
    else
    {
        printf("Invalid input for dimension of site\n");
    }
    printf("Loan Amount = %d",loan_amount);
    return 0;

}
