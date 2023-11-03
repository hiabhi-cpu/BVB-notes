//C Program to read and display marks of N students and display class average.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:read_marks_&_display_average.c
    Date:
*/
#include<stdio.h>
int main()
{
    int n,total_marks=0, marks, i=1;
    float average;
    printf("Enter number of students\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("Enter marks\n");
        scanf("%d",&marks);
        printf("Marks=%d\n",marks);
        total_marks=total_marks+marks;
        i++;
    }
    average=(float)total_marks/n;
    printf("Class Averge = %0.2f\n",average);
    return 0;
}
