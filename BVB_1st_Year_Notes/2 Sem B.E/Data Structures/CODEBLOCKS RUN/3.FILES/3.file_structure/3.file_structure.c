#include<stdio.h>
#include<stdlib.h>

struct players
{
    char name[20],team[20];
    int runs;
    float avg;
};

int main()
{
    struct players p1[10];
    FILE*fp1;
    fp1=fopen("player.txt","r");
    if(fp1==NULL)
    {
        printf("File player.txt does not exist\n");
        exit(0);
    }
    printf("Player Details\n");
    printf("Name\tTeam\tRuns\tAverage\n");
    for(int i=0; i<4; i++)
    {
        fscanf(fp1,"%s%s%d%f",p1[i].name,p1[i].team,&p1[i].runs,&p1[i].avg);
        printf("%s\t%s\t%d\t%0.2f\n",p1[i].name,p1[i].team,p1[i].runs,p1[i].avg);
    }
    fclose(fp1);
    return 0;
}
