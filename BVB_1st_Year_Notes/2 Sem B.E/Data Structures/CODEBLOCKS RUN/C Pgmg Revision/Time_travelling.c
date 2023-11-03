#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year between 1920 and 2700\n");
    scanf("%d",&year);
    if(year>1920&&year<2700)
    {
        if(year%400==0||year%4==0&&year%100!=0)
        {
            printf("%d is leap year \n\a",year);
            printf("256th day of the year is 13.09.%d\n",year);
        }
        else
        {
            printf("%d is not a leap year\n",year);
            printf("256th day of the year is 12.09.%d\n",year);
        }
    }
    else
        printf("Invalid input entered\n");
    return 0;
}
