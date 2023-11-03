#include<stdio.h>
int main()
{
    FILE*fp1,*fp2;
    int num[10];
    fp1=fopen("number.txt","r");
    fp2=fopen("numberoutput.txt","w");
    if(fp1==NULL)
    {
        printf("File number.txt does not exist\n");
        exit(0);
    }
    for(int i=0; i<10; i++)
    {
        fscanf(fp1,"%d",&num[i]);
    }
    for(int i=0; i<10; i++)
    {
        if(num[i]==69)
        {
           for(int j=0;j<9;j++)
           {
               fprintf(fp2,"%d.%d\t",num[i],num[i]);
           }
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;


}


