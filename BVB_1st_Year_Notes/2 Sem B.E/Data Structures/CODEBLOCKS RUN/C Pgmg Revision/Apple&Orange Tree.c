#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,s,t,d1,d2,d3,d4,d5,d6,count1=0,count2=0;
    char fruit;
    printf("Welcome to RAM's house\n");
    printf("Enter the positions of apple tree, orange tree and x-coordinates of house\n");
    scanf("%d %d %d %d",&a,&b,&s,&t);
    printf("Enter the distance of falling of orange fruits\n");
    scanf("%d %d %d",&d1,&d2,&d3);
    if(d1<0)
    {
        if(abs(d1)>(b-t)&&abs(d1)<(b-s))
            count1++;
    }
    if(d2<0)
    {
        if(abs(d2)>(b-t)&&abs(d1)<(b-s))
            count1++;
    }
    if(d3<0)
    {
        if(abs(d3)>(b-t)&&abs(d3)<(b-s))
            count1++;
    }

    printf("Enter the distance of falling of apple fruits\n");
    scanf("%d %d %d",&d4,&d5,&d6);
    if(d4>0)
    {
        if(d4>(s-a)&&d4<(t-a))
            count2++;
    }
    if(d5>0)
    {
        if(d5>(s-a)&&d5<(t-a))
            count2++;
    }
    if(d6>0)
    {
        if(d6>(s-a)&&d6<(t-a))
            count2++;
    }


    printf("Number of apples fallen on RAM'S house are %d\n",count2);
    printf("Number of oranges fallen on RAM'S house are %d\n",count1);

}
