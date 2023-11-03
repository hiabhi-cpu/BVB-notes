#include<stdio.h>
int main()
{
    //declare the string variable.
    char name[20];
    printf("Enter your name\n");
    gets(name);
    printf("Name is ",name);
    puts(name);
    return 0;
}

