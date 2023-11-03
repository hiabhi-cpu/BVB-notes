#include<stdio.h>
#include<math.h>
#define PI 3.14159

//function prototype
float sine_series(float x_radian);

int main()
{
    int x_degrees;
    float x_radian,sum;
    printf("Enter x in degrees\n");
    scanf("%d",&x_degrees);
    x_radian=x_degrees*(PI/180);
    //function call
    sum=sine_series(x_radian);
    printf("Sine series for %d is %f\n",x_degrees,sum);
    printf("Builtin function sine %d is %f\n",x_degrees,sin(x_radian));
    return 0;
}

//function definition
float sine_series(float x_radian)
{
    float term,numerator,denominator,sum=0;
    int i;
    numerator=x_radian;
    denominator=1;
    do
    {
        term=numerator/denominator;
        sum=sum+term;
        numerator=numerator*x_radian*x_radian*(-1);
        denominator=denominator*(i+1)*(i+2);
        i=i+2;
    }while(fabs(term)>=0.00001);
    return sum;
}
