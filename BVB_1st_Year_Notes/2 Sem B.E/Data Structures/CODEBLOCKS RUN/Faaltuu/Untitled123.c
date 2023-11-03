#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char name[20];
    printf("Enter your Name\n");
    scanf(" %s",name);
    printf("Hello %s welcome to Chikkabidarakallu\n",name);
    printf("Did you have your breakfast??\n");
    char choice;
    printf("Type Y/N\n");
    scanf(" %c",&choice);
    switch(choice)
    {
    case 'Y':
        {
            printf("OK %s Have a good day ahead :)\n",name);
            break;
        }
    case 'N':
        {
            printf("What do you want to order??\n");
            printf("IDLI VADA\nDOSA\nPULIOGARE\n\n");
            char breakfast[30];
            scanf(" %s",breakfast);
            printf("\nHello %s \nYour %s will be served in 20 mins\n",name,breakfast);
            break;
        }
    default:
        {
            printf("Please enter valid choice %s\n",name);
            break;
        }
    }
    return 0;
}
