//C Program to binary search in array
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:binary_search.c
    Date:24/04/2022
*/
#include<stdio.h>


void read(int a[],int n)
{
    int i;
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
}

int binary_search(int a[],int n,int key1)
{
    printf("Inside bin\n");
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key1)
            return mid;
        else if(a[mid]<key1)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
}




void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
}

void sort(int a[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    int key,res,a[10],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    sort(a,n);
    display(a,n);
    printf("Enter the element to be searched for binary search\n");
    scanf("%d",&key);
    res=binary_search(a,n,key);
    if(res==0)
    {
        printf("Item not found\n");
    }
    else
        printf("Item found\n");

    return 0;
}
