#include<stdio.h>
#include<stdlib.h>
int count_chars(FILE*fp);
int compare_files(FILE*fp1,FILE*fp2);

int main()
{
    int status=0;
    FILE*fp1,*fp2;
    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","r");
    if(fp1==NULL)
    {
        printf("file1.txt does not exist\n");
        exit(0);
    }
    if(fp2==NULL)
    {
        printf("file2.txt does not exist\n");
        exit(0);
    }
    int c1=count_chars(fp1);
    int c2=count_chars(fp2);
    printf("Number of characters in file1.txt=%d\n",c1);
    printf("Number of characters in file2.txt=%d\n",c2);
    if(c1==c2)
    {
        status=compare_files(fp1,fp2);
    }
    if(status==1)
    {
        printf("Both files contents are same\n");
    }
    else
    {
        printf("Both files contents are different\n");
    }
    fclose(fp1);
    fclose(fp2);
}

int count_chars(FILE*fp)
{
    int c=0;
    char ch;
    while(!feof(fp))
    {
        ch=getc(fp);
        c++;
    }
    return c;
}

int compare_files(FILE*fp1,FILE*fp2)
{
    int status=1;
    //fseek(fp1,0,SEEK_SET);
    //fseek(fp1,0,SEEK_SET);
    rewind(fp1);
    rewind(fp1);
    while(!feof(fp1))
    {
        if(getc(fp1)==getc(fp2))
        {
            continue;
        }
        else
        {
            status=0;
            break;
        }
    }
    return status;
}
