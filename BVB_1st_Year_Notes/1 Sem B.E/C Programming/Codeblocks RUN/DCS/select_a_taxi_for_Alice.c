//C Program to select a taxi for Alice to go to office.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:select_a_taxi_for_Alice
    Date:17/02/2022
*/
#include<stdio.h>
#define da 10
int main()
{
    int n,x,y,z,d,ot,ct;
    printf("enter distance between home to office\n");
    scanf("%d",&d);
    printf("enter the 1st n kilometer value in online taxi\n");
    scanf("%d",&n);
    printf("enter cost for 1st n kilometers in online taxi\n");
    scanf("%d",&x);
    printf("enter cost for every kilometer after n kilometer in online taxi\n");
    scanf("%d",&y);
    printf("enter the cost for every km in classic taxi\n");
    scanf("%d",&z);
    ot=x+(d-n)*y;
    ct=da+(d*z);
    printf("online taxi will cost Alice %d\n",ot);
    printf("classic taxi will cost Alice %d\n",ct);
    if (ot<=ct)
        printf("Alice should go with online taxi\n");
    else
        printf("Alice should go with classic taxi\n");
    return 0;

}
