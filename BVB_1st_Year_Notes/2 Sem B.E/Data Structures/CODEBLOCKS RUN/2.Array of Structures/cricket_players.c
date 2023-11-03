#include<stdio.h>
typedef struct cricket_player
{
    char name[20];
    float average;
    int highest_score,centuries,ODI_rank;
}PLAYER;

//function prototypes
void read_details(PLAYER player[10], int n);
void display_details(PLAYER player[10], int n);

int main()
{
    PLAYER player[10];
    int n;
    printf("Enter number of players\n");
    scanf("%d",&n);
    read_details(player,n);
    display_details(player,n);
    return 0;
}

void read_details(PLAYER player[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter player %d details\n",i+1);
        printf("Name Average Highest Score Centuries ODI Rank\n");
        scanf("%s%f%d%d%d",player[i].name,&player[i].average,&player[i].highest_score,&player[i].centuries,&player[i].ODI_rank);
    }
}

void display_details(PLAYER player[10],int n)
{
    int i;
    printf("Name\t\tAverage\t\tHighest Score\tCenturies\tODI_Rank\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%f\t%d\t\t%d\t\t%d\n",player[i].name,player[i].average,player[i].highest_score,player[i].centuries,player[i].ODI_rank);
    }
}
