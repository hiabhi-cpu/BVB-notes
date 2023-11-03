//C Program to compute gross salary
/*  Name:Prashanth S Aski
    Roll No:1736
    Division:Q
    Program Name:Profit_of_TV.c
    Date:02/02/2022
*/
#include<stdio.h>
int main ()
{
    float price,mrp,discount,selling_price,profit;
    printf("Enter Price for each TV");
    scanf("%f",&price);
    mrp=price*0.28+price;
    discount=mrp*0.12;
    selling_price=mrp-discount;
    profit=selling_price-price;
    printf("Profit on each TV = %f\n",profit);
    return 0;

}
