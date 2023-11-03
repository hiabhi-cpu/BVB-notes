//C Program to print prime numbers
#include<stdio.h>

//function prototype
void prime_range(int start,int end);

int main()
{
    int start,end;
    printf("Enter the range\n");
    scanf("%d%d",&start,&end);
    //function call
    prime_range(start,end);
    return 0;
}

//function definition
void prime_range(int start,int end)
{
    int i,j,status;
    for(i=start;i<=end;i++)
    {
        status=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                status=0;
                break;
            }
        }
        if(status==1)
            printf("%d\t",i);
    }
}
