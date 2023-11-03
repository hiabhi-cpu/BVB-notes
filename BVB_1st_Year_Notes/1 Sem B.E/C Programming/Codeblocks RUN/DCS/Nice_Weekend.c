//C programming to print Nice weekend if friday else nice day
/* Name:PRASHANTH ASKI
   Roll No:1736
   Div:Q
   Program Name:Nice_Weekend.c
   Date:05/02/2022
*/
#include<stdio.h>
int main()
{
    char day;
    printf("Enter the day as single character\n");
    scanf("%c",&day);
    if(day=='F'||day=='f')
    {
        printf("Have a nice Weekend!\n");
    }
    else
    {
        printf("Have a nice Day!\n");
    }
    return 0;
}

