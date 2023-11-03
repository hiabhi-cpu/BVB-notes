//C Program file basics
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:file_basics.c
    Date:03/06/2022
*/
#include<stdio.h>
int main()
{
    FILE*fp1,*fp2;
    int num;
    float fnum;
    fp1=fopen("number.txt","r");
    fp2=fopen("numberoutput.txt","w");
    if(fp1==NULL)
    {
        printf("File number.txt does not exist\n");
        exit(0);
    }
    fscanf(fp1,"%d%f",&num,&fnum);
    fprintf(fp2,"%d\t%0.2f\n",num,fnum);
    fclose(fp1);
    fclose(fp2);
    return 0;

}

