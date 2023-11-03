//C Program mobile using structures
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:Mobile_using_structures.c
    Date:11/05/2022
*/
#include<stdio.h>
struct mobile
{
    char make[20];
    char model[30];
    int storage;
    int camera;
    char processor[15];
    int year_of_manufacture;
    int price;
    int RAM;
    int battery_capacity;
    char colour[15];
};

int main()
{
    struct mobile samsung={"Samsung","GalaxyS10",128,64,"Octacore",2022,25000,8,5500,"Black"};
    printf("Details of Mobile phone are\n");
    printf(" %s\n %s\n %d\n %d\n %s\n %d\n %d\n %d\n %d\n %s\n",samsung.make,samsung.model,samsung.storage,samsung.camera,samsung.processor,samsung.year_of_manufacture,samsung.price,samsung.RAM,samsung.battery_capacity,samsung.colour);
    return 0;
}
