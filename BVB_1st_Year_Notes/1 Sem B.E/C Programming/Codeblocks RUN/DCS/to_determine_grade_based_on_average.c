//C Program to determine grade based on average
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:to_determine_grade_based_on_average
    Date:16/02/2022
*/
#include<stdio.h>
int main()
{
    int M1,M2,M3,M4;
    float average;
    printf("Enter marks of 4 tests\n");
    scanf("%d%d%d%d",&M1,&M2,&M3,&M4);
    average=(float)(M1+M2+M3+M4)/4;
    printf("Average Marks = %0.2f\n",average);
    if(average>=80)
        printf("Grade=Distinction\n");
    else if(average>=60)
        printf("Grade=First Division");
    else if(average>=50)
        printf("Grade=Second Division");
    else if(average>=40)
        printf("Grade=Pass");
    else
        printf("Grade=Fail");
    return 0;
}
