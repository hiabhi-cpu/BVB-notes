//C Program to compute parking charges for different type of vehicles.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:parking_charges_of_vehicles
    Date:19/02/2022
*/
#include<stdio.h>
int main()
{
    int in_hr,in_min, out_hr,out_min,diff_hr,diff_min;
    float charges;
    char type;
    printf("Enter type of Vehicle (F for four wheeler,T for two wheeler)\n");
    scanf("%c",&type);
    printf("Enter in time(hh mm)\n");
    scanf("%d%d",&in_hr,&in_min);
    printf("Enter out time(hh mm)\n");
    scanf("%d%d",&out_hr,&out_min);
    diff_hr=out_hr-in_hr;
    diff_min=out_min-in_min;
    if(diff_min<0)
    {
        diff_hr--;
        diff_min=60+diff_min;
    }

    switch(type)
    {
        case 'F':
        case 'f':
            if(diff_hr>=8&&diff_min>0)
                charges=30;
            else
                charges=20;
                printf("Charges=%0.2f\n",charges);
            break;
        case 'T':
        case 't':
            if(diff_hr>=8&&diff_min>0)
                charges=20;
            else
                charges=10;
                printf("Charges=%0.2f\n",charges);
            break;
        default:
            printf("Invalid type of vehicle\n");
            break;
    }
    printf("Parking Duration:%dhours:%dmins\n",diff_hr,diff_min);
    return 0;
}
