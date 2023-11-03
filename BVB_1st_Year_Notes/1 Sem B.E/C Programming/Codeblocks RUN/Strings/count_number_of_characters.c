#include<stdio.h>
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
    char name[20];
    int count;
    printf("Enter the name\n");
    gets(name);
    count=count_char(name);
    printf("Number of chars in name are %d\n",count);
    return 0;
}
