//C Program to choose mode of transport for trip
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:to_choose_mode_of_transport
    Date:23/02/2022
*/
#include<stdio.h>
int main()
{
    int budget;
    printf("Enter the money received from parent for trip.\n");
    scanf("%d",&budget);
    if(budget>=10000)
        printf("You will go by flight.\n");
    else if(budget>0&&budget<10000)
        printf("You will go by Bus.\n");
    else
      printf("Insufficient Budget, better luck next time.\n");
    return 0;
}
