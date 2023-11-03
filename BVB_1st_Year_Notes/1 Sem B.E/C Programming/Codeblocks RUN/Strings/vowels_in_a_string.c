#include<stdio.h>
int count_vowels(char string[30])
{
    int vowels=0,i=0;
    while(string[i]!='\0')
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
        {
            vowels++;
        }
        i++;
    }
    return vowels;
}


int main()
{
    char name[30];
    int vowels;
    printf("Enter name\n");
    gets(name);
    vowels=count_vowels(name);
    printf("Number of vowels are %d\n",vowels);
    return 0;
}
