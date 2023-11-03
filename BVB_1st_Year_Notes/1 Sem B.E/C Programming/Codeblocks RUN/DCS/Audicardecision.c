#include<stdio.h>
int main()
{
    float petrol_price, fuel_in_litres, distance;
    printf("Enter petrol price per litre\n");
    scanf("%f",&petrol_price);
    fuel_in_litres=1066.64/petrol_price;
    distance=fuel_in_litres*14;
    printf("Distance travelled by car is %f\n",distance);
    if(distance>=96)
    {
        printf("Yes, Car can travel from Hubli to Belgaum\n");

    }
    else
    {
        printf("NO, Car cannot reach Belgaum from Hubli");
    }
    return 0;
}
