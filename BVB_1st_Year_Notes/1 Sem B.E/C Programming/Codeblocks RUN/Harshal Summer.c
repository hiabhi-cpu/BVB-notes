#include <stdio.h>

int fare(int n);

int main()
{
    int n,x;
    printf("Enter the number of passengers\n");
    scanf("%d",&n);
    if(n>0)
    {
        x=fare(n);
        printf("the amount is %d",x);
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}

int fare(int n)
{
    int i,fare,age,a=0,b=0,c=0;
    char type;

    for(i=0;i<n;i++)
    {
        printf("enter the age of passenger\n");
        scanf("%d",&age);
        if(age>=5&&age<=14)
        {
            a++;
        }
        else if(age>=15&&age<=60)
        {
            b++;
        }
        else if(age>60)
        {
            c++;
        }
        else
        {
            printf("passenger underage\n");
        }
    }
    printf("Enter the type of train\n");
    scanf(" %c",&type);
    printf("kh");

    if(type=='S')
    {
        fare=(a*1000)+(b*2000)+(c*1500);
    }
    else if(type=='E')
    {
        fare=(a*800)+(b*1600)+(c*1200);
    }
      else if(type=='P')
    {
        fare=(a*600)+(b*1200)+(c*900);
    }
    else
    {
        printf("invalid input\n");
    }
    return fare;
}
