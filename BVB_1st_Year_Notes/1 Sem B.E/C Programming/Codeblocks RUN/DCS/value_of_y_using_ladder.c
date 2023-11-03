//C Program to compute value of y based on input x.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:value_of_y_using_ladder
    Date:12/02/2022
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Enter x value (0,1 or 2)\n");
    scanf("%d",&x);
    if(x==0)
    {
        y=0;
        printf("y=%d \n",y);
    }
    else if(x==1)
    {
        y=1;
        printf("y=%d \n",y);
    }
    else if(x==2)
    {
        y=pow(x,2)+2*x+3;
        printf("y=%d \n",y);
    }
    else
        printf("x value is none of the specified values \n");
    return 0;
}
