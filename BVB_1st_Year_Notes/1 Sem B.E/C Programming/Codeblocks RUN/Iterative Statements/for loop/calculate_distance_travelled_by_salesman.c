//C Program to calculate distance travelled by salesman.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:calculate_distance_travelled_by_salesman.c
    Date:05/03/2022
*/
#include<stdio.h>
int main()
{
    int i,n,total_dist,f1,f2,f3;
    printf("Enter number of days travelled by salesman\n");
    scanf("%d",&n);
    f1=0;
    f2=1;
    total_dist=f1+f2;
    printf("Distance travelled by salesman on successive days is\n%d km\n%d km\n",f1,f2);
    for(i=3;i<=n;i++)
    {
        f3=f1+f2;
        printf("%d km\n",f3);
        total_dist+=f3;
        f1=f2;
        f2=f3;
    }
    printf("Total distance travelled by salesman is %d km\n",total_dist);
    return 0;
}
