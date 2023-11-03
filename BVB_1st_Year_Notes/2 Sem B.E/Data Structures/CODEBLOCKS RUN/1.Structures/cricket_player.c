//C Program to
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:
    Date:
*/
#include<stdio.h>

struct cricket_player
{
    char player_name[40];
    char team_name[50];
    float average;
    int highest_score;
    int centuries;
    int ODI_rank;
};


//FUNCTION PROTOTYPE
void display(char[],float,int);


int main()
{
    struct cricket_player p1={"Virat Kohli","INDIA",49.17,197,70,1};
    //FUNCTION CALL
   display(p1.player_name,p1.average,p1.ODI_rank);
   return 0;
}


void display(char player_name[],float average ,int ODI_rank)
{
    printf("Player Name\t\tAverage\t\tODI Rank\n");
    printf("%s\t\t%0.2f\t\t%d",player_name,average,ODI_rank);
}


