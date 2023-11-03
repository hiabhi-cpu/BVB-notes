//C programming to find the distance and time taken by mohan to reach sohan
/* Name:PRASHANTH ASKI
   Roll No:1736
   Div:Q
   Program Name:MohanSohan.c
   Date:05/02/2022
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    float distance,time,speed;
    printf("Enter coordinate of mohan\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter coordinate of sohan\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter speed of mohan\n");
    scanf("%f",&speed);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("distance between mohan and sohan %f\n",distance);
    time=distance/speed;
    printf("time taken by mohan %f\n",time);
    if(time<1)
    {
        printf("Yes Mohan can reach Sohan within one hour");
    }
    else
    {
        printf("No mohan cant reach sohan ");
    }
    return 0;

}
