//C Program array of structures using pointers
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:
    Date:25/05/2022
*/
#include<stdio.h>
#include<string.h>
typedef struct cricket_player
{
    char name[20], team_name[20];
    float avg;
    int highest_score, ODI_rank;
}CRICKET;

//function prototypes.
void read_details(CRICKET*cpptr,int n);
void display_details(CRICKET*cpptr,int n);
void max_average(CRICKET*cpptr, int n);
void min_average(CRICKET*cpptr, int n);
void display_specific_team(CRICKET*cpptr, int n);

int main()
{
    CRICKET cp[20];
    CRICKET*cpptr;
    cpptr=cp;//cpptr=&cp[0];
    int n;
    printf("Enter number of cricket players\n");
    scanf("%d",&n);
    read_details(cpptr,n);
    display_details(cpptr,n);
    max_average(cpptr,n);
    min_average(cpptr,n);
    display_specific_team(cpptr,n);
    return 0;
}

void read_details(CRICKET*cpptr, int n)
{
    int i;
    printf("\nEnter cricket player details\n");
    printf("Name Team_name Average Highest_score ODI_rank\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %f%d%d",cpptr->name,cpptr->team_name,&cpptr->avg,&cpptr->highest_score,&cpptr->ODI_rank);
        cpptr++;
    }
}


void display_details(CRICKET*cpptr, int n)
{
    int i;
    printf("\n\n\nCRICKET TEAM\n");
    printf("Name\tTeam_name\tAverage\tHighest_Score\tODI_rank\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t\t%0.2f\t%d\t\t%d\n",cpptr->name,cpptr->team_name,cpptr->avg,cpptr->highest_score,cpptr->ODI_rank);
        cpptr++;
    }
}


void max_average(CRICKET*cpptr, int n)
{
    int i;
    float max=0;
    CRICKET*max_ptr;
    for(i=0;i<n;i++)
    {
        if(max<cpptr->avg)
        {
            max=cpptr->avg;
            max_ptr=cpptr;
        }
        cpptr++;
    }
    printf("\n\nPlayer with highest average is\n");
    printf("Name\tTeam_name\tAverage\tHighest_Score\tODI_rank\n");
    printf("%s\t%s\t\t%0.2f\t%d\t\t%d\n",max_ptr->name,max_ptr->team_name,max_ptr->avg,max_ptr->highest_score,max_ptr->ODI_rank);
}


void min_average(CRICKET*cpptr, int n)
{
    int i;
    float min=300;
    CRICKET*min_ptr;
    for(i=0;i<n;i++)
    {
        if(min>cpptr->avg)
        {
            min=cpptr->avg;
            min_ptr=cpptr;
        }
        cpptr++;
    }
    printf("\n\nPlayer with lowest average is\n");
    printf("Name\tTeam_name\tAverage\tHighest_Score\tODI_rank\n");
    printf("%s\t%s\t\t%0.2f\t%d\t\t%d\n",min_ptr->name,min_ptr->team_name,min_ptr->avg,min_ptr->highest_score,min_ptr->ODI_rank);
}


void display_specific_team(CRICKET*cpptr, int n)
{
    int i;
    char search_team[20];
    printf("\n\nEnter team name to search\n");
    scanf("%s",search_team);
    printf("\n\nCricket players of %s team are\n",search_team);
    for(i=0;i<n;i++)
    {
        if(strcmp(search_team,cpptr->team_name)==0)
        {
            printf("%s\t%s\t\t%0.2f\t%d\t\t%d\n",cpptr->name,cpptr->team_name,cpptr->avg,cpptr->highest_score,cpptr->ODI_rank);
        }
        cpptr++;
    }
}
