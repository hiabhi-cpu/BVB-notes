//C Program to compute total price Ram has to pay after discount.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:price_Ram_has_to_pay_after_discount
    Date:17/02/2022
*/
#include<stdio.h>
int main()
{
    int CM,CW,CK,TM,TW,TK,M,W,K;
    float DM,DW,DK,TD,TDM,TDW,TDK;
    printf("enter the cost of each men's wear and number of T-shirts purchased\n");
    scanf("%d%d",&CM,&M);
    TM=CM*M;
    printf("total cost on men's wear before discount is Rs %d\n",TM);
    DM=0.1*TM;
    TDM=TM-DM;
    printf("Total cost on men's wear after discount is Rs %f\n",TDM);
    printf("enter the cost of each women's wear and number of women's tops purchased\n");
    scanf("%d%d",&CW,&W);
    TW=CW*W;
    printf("total cost on women's wear before discount is Rs %d\n",TW);
    DW=0.2*TW;
    TDW=TW-DW;
    printf("Total cost on Women's wear after discount is Rs f\n",TDW);
    printf("Enter the cost of each Kid's wear and number of Kid's dresses purchased\n");
    scanf("%d%d",&CK,&K);
    TK=CK*K;
    printf("Total cost on Kid's wear before discount is Rs 4d\n",TK) ;
    DK=0.15*TK;
    TDK=TK-DK;
    printf("Total cost on Kid's wear after discount is Rs \r\n",TDK) ;
    TD=TDM+TDW+TDK;
    printf("total cost ram has to pay after discount on all purchase is rs %f\n",TD);
    if (TD>1250)
    {
    printf("ram will get an additional discount of Rs 250\n");
    }
    else
    {
    printf("ram will not get an additional discount of Rs 250\n");
    }
    return 0;
}
