#include<stdio.h>

int count_characters(char string[100])
{
    int c=0;
    while(string[c]!='\0')
    {
        c++;
    }
    return c;
}

int check_password(char pass[20])
{
    int fst=0, lst=0, ust=0, dst=0, i=0;
    if(count_characters(pass)>=8)
    {
        while(pass[i]!='\0')
        {
            if(pass[i]>='a'&& pass[i]<='z')
                lst=1;
            if(pass[i]>='A'&& pass[i]<='Z')
                ust=1;
            if(pass[i]>='0'&& pass[i]<='9')
                dst=1;
            i++;
        }
        if(lst==1 && ust==1 && dst==1)
            fst=1;
    }
    return fst;
}

int main()
{
    char pass[20];
    int fst;
    do
    {
        printf("Enter Valid password\n");
        gets(pass);
        fst=check_password(pass);
        if(fst==1)
        {
            printf("Password accepted\n");
            break;
        }
    }
        while(1);//infinite loop
        return 0;
}
