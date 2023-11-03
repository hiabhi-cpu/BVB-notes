//C Program to compute distance travelled by Audi car.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:Audicar.c
    Date:29/01/2022
*/
#include<stdio.h>
int main()
{
    float petrol_price,fuel_in_litres,distance;
    printf("Enter Petrol Price");
    scanf("%f",&petrol_price);
    fuel_in_litres=1066.64/petrol_price;
    distance=fuel_in_litres*14;
    printf("Distance travelled by car is %f",distance);
    return 0;

}
