//C Program to store book details using structures.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:book_details.c
    Date:14/5/2022
*/
#include<stdio.h>
typedef struct book_details
{
    char name[20],author[20];
    int edition,year;
    float price;
    int iday,imonth,iyear;
    int rday,rmonth,ryear;
}BOOK;

BOOK read_book_details(BOOK b)
{
    printf("Enter name, author, edition, year, price\n");
    scanf("%s %s %d %d %f",b.name,b.author,&b.edition,&b.year,&b.price);
    printf("Enter issue date(day month year)\n");
    scanf("%d%d%d",&b.iday,&b.imonth,&b.iyear);
    printf("Enter return date(day month year\n");
    scanf("%d%d%d",&b.rday,&b.rmonth,&b.ryear);
    return b;
}

void display_book_details(BOOK b)
{
    printf("Name\tAuthor\tEdition\tYear\tPrice\tIssue Date\tReturn Date\n");
    printf("%s\t%s\t%d\t%d\t%0.2f\t%d-%d-%d\t%d-%d-%d\n",b.name,b.author,b.edition,b.year,b.price,b.iday,b.imonth,b.iyear,b.rday,b.rmonth,b.ryear);
}

void compute_days(int ret_day,int issue_day)
{
    int days;
    days=ret_day-issue_day+1;
    printf("No of days is %d\n",days);
}

int main()
{
    BOOK b;
    b=read_book_details(b);
    display_book_details(b);
    compute_days(b.rday,b.iday);
    return 0;
}
