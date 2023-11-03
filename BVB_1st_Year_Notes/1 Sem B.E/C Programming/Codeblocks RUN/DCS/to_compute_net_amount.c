//C Program to compute net amount
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:to_compute_net_amount
    Date:16/02/2022
*/
#include<stdio.h>
int main()
{
    int amount;
    float discount,net_amount;
    printf("Enter purchase amount\n");
    scanf("%d",&amount);
    if(amount<=1000)
    {
        discount=(float)amount*0;
        net_amount=(float)amount-discount;
        printf("Net Amount = %0.2f\n",net_amount);
    }
    else if(amount<=2000)
    {
        discount=(float)amount*0.25;
        net_amount=(float)amount-discount;
        printf("Net Amount = %0.2f\n",net_amount);
    }
    else if(amount<=3000)
    {
        discount=(float)amount*0.35;
        net_amount=(float)amount-discount;
        printf("Net Amount = %0.2f\n",net_amount);
    }
    else
    {
        discount=(float)amount*0.45;
        net_amount=(float)amount-discount;
        printf("Net Amount = %0.2f\n",net_amount);
    }
    return 0;
}
