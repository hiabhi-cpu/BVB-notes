#include<stdio.h>
//function prototype
int divisions(int a,int b,int c,int x);

int main()
{
    int i,digit,number,format,a,b,c,x;
    printf("Enter the phone number\n");
    scanf("%d",&number);
    int copy=number;
    for(i=1; number!=0; i++)
    {
        digit=number%10;
        number=number/10;
    }
    if(i==7)
    {
        //function call
        format=divisions(a,b,c,x);
        printf("Required format of the given number is %d-%d-%d\n",a,b,c);
    }
    else
        printf("Invalid phone number\n");
}


//function definition
int divisions(int a,int b,int c,int x)
{
    int i,j,k,copy;
    for(i=1; i<=1; i++)
    {
        c=copy%100;
        for(j=1; j<=1; j++)
        {
            x=copy%100000;
            b=x/100;
            for(k=1; k<=1; k++)
                a=copy/100000;
        }
    }
    return divisions;
}

