//C Program to read and display details of television
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:read_display_details_of_television.c
    Date:01/06/2022
*/
#include<stdio.h>
#include<string.h>

typedef struct television
{
    char company[20],model[20],wifi[10];
    int price,year_of_manufacture;
}TV;

void read(TV*tptr,int n)
{
    int i=0;
    printf("Enter the details of Television\n");
    printf("Company Model Wifi Year_of_Manufacture Price\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s%d%d",tptr->company,tptr->model,tptr->wifi,&tptr->year_of_manufacture,&tptr->price);
        tptr++;
    }
}

void display(TV*tptr,int n)
{
    int i=0;
    printf("\n\nThe details of Television are\n");
    printf("Company\tModel\tWifi\tYear_of_Manufacture\tPrice\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%s\t\t%d\t\t%d\n",tptr->company,tptr->model,tptr->wifi,tptr->year_of_manufacture,tptr->price);
        tptr++;
    }

}

void specific_price_range(TV*tptr,int n)
{
    int i=0;
    printf("\n\nThe details of Television with price range between 20000 and 30000 are\n");
    printf("Company\tModel\tWifi\tYear_of_Manufacture\tPrice\n");
    for(i=0;i<n;i++)
    {
        if(tptr->price>20000&&tptr->price<30000)
        {
            printf("%s\t%s\t%s\t\t%d\t\t%d\n",tptr->company,tptr->model,tptr->wifi,tptr->year_of_manufacture,tptr->price);
        }
        tptr++;
    }
}

void wifi(TV*tptr,int n)
{
    int i=0;
    char wifi[10];
    printf("\n\nEnter YES to display list of Televisions with wifi feature\n");
    scanf("%s",&wifi);
    printf("\nThe details of Television with wifi feature are\n");
    printf("Company\tModel\tWifi\tYear_of_Manufacture\tPrice\n");
    for(i=0;i<n;i++)
    {
        if(strcmp(wifi,tptr->wifi)==0)
        {
            printf("%s\t%s\t%s\t\t%d\t\t%d\n",tptr->company,tptr->model,tptr->wifi,tptr->year_of_manufacture,tptr->price);
        }
        tptr++;
    }
}

int main()
{
    int n;
    TV tv[20];
    TV*tptr;
    tptr=tv;
    printf("Enter the number of televisions\n");
    scanf("%d",&n);
    read(tptr,n);
    display(tptr,n);
    specific_price_range(tptr,n);
    wifi(tptr,n);
    return 0;
}
