#include<stdio.h>
#include<ctype.h>

int count_characters(char string[100])
{
    int c=0;
    while(string[c]!='\0')
    {
        c++;
    }
    return c;
}

int compare_strings(char s1[20], char s2[20])
{
    int i=0,status=0;
    if(count_characters(s1)!=count_characters(s2))
    {
        return 0;
    }
    while(s1[i]!='\0')
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


int main()
{
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
