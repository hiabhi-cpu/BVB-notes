#include<stdio.h>
#include<ctype.h>

int compare_strings(char s1[20],char s2[20])
{
    int i=0, status=0;
    if (count_char(s1)!=count_char(s2))
    {
        return 0;
    }
    while (s1[i]!='\0')
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]==s2[i])
        {
            status=1;
        }
        else
        {
            status=0;
            break;
        }
        i++;
    }
    return status;
}


int count_char(char string[20])
{
    int i,count=0;
    i=0;
    while(string[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}


int main()
{
    int status;
    char s1[20],s2[20];
    printf("Enter string 1\n");
    gets(s1);
    printf("Enter string 2\n");
    gets(s2);
    status=compare_strings(s1,s2);
    if(status==1)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Both strings are different\n");
    }
    return 0;
}
