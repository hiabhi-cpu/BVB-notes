#include<stdio.h>

void join_strings(char fname[60],char mname[20], char lname[20])
{
    int i=0,j=0,k=0;
    char sname[50];
    while (fname[i]!='\0')
    {
        i++;
    }
    fname[i++]=' ';
    while(mname[j]!='\0')
    {
        fname[i++]=mname[j++];
    }
    fname[i++]=' ';
    while(lname[k]!='\0')
    {
        fname[i++]=lname[k++];
    }
    fname[i]='\0';
    printf("Full name: %s\n",fname);
    sname[0]=fname[0];
    sname[1]=mname[0];
    sname[2]=lname[0];
    sname[3]='\0';
    printf("Short name=%s\n",sname);

}

int main()
{
    char fname[20],mname[20],lname[20];
    printf("Enter the first name\n");
    gets(fname);
    printf("Enter the middle name\n");
    gets(mname);
    printf("Enter the last name\n");
    gets(lname);
    join_strings(fname,mname,lname);
    return 0;
}
