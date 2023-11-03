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
struct cricket_player read_details(struct cricket_player);
void display(struct cricket_player);


int main()
{
    struct cricket_player p1;
    //FUNTION CALL
    p1=read_details(p1);
    display(p1);
    return 0;
}

struct cricket_player read_details(struct cricket_player p)
{
    printf("Enter cricket player details\n");
    printf("Name,Team Name,Average,Highest score,100s,Rank\n");
    scanf("%s%s%f%d%d%d,p.player_name,p.team_name,p.average,p.highest_score,p.centuries,p.ODI_rank");
    return p;

};
void display(struct cricket_player p)
{
    printf("Player Name\t\tAverage\t\tODI Rank\n");
    printf("%s\t\t%0.2f\t\t%d",p.player_name,p.average,p.ODI_rank);
}

