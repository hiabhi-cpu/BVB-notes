//C Program to linear search in array
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:linear_search.c
    Date:24/04/2022
*/
#include<stdio.h>
int linear_search(int a[],int n,int key)
{
    int found=0,i;
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            found=1;
            break;
        }
    }
    return found;
}


int main()
{
    int key,a[10],n;
    printf("Enter the element to be searched for linear search\n");
    scanf("%d",&key);
    int res=linear_search(a,n,key);
    if(res==0)
    {
        printf("Item not found\n");
    }
    else
        printf("Item found\n");
    return 0;
}
