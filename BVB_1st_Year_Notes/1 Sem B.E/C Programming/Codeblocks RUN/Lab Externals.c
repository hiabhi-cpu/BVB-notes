//C Program to find minimum number of packages
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:minimun_number_of_packages.c
    Date:25/04/2022
*/

#include<stdio.h>

//function prototype
int minimum_package(int quantity);

int main()
{
    int quantity,package=0;
    printf("Enter the required quantity of paneer in litres\n");
    scanf("%d",&quantity);
    //function call
    package=minimum_package(quantity);
    printf("The minimum number of packages to deliver %d litres of paneer is %d\n",quantity,package);
    return 0;
}

//function definition
int minimum_package(int quantity)
{
    int package=0,rem=0;
    if(quantity>0&&quantity<5)
        package=quantity;
    else if(quantity>=5&&quantity<7)
        package=1+(quantity-5)*1;
    else if(quantity>=7&&quantity<10)
        package=1+(quantity-7)*1;
    else if(quantity==13)
        package=3;
    else if(quantity>=10&&quantity!=13)
        {
            package=quantity/10;
            rem=quantity%10;
            if(rem>=0&&rem<5)
                package=package+rem;
            else if(rem>=5&&rem<7)
                package=package+1+(rem-5)*1;
            else if(rem>=7&&rem<10)
                package=package+1+(rem-7)*1;
        }
    return package;
}
