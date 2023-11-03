#include<stdio.h>
void palindrome(int a[20],int n);
int main()
{
    int a[20],n,count,i=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    palindrome(a,n);
    return 0;
}
void palindrome(int a[20],int n)
{
    int count=0,number=0,reverse=0,digit=0,i;
    for(i=0; i<n; i++)
    {
        number=a[i];
        reverse=0;
        while(a[i]!=0)
        {
            digit=a[i]%10;
            reverse=digit+reverse*10;
            a[i]=a[i]/10;

        }
        if(reverse==number)
            {
                count++;
            }
    }
    printf("Number of PALINDROME numbers are %d",count);
}

