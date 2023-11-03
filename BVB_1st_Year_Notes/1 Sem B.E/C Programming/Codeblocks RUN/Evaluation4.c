//C Program to check if array is fit or not.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:array_is_fit_or_not.c
    Date:06/04/2022
*/

#include<stdio.h>
#define R 20
#define P 20
//function prototype
void read_array(int a[],int r);
int compare(int a[],int b[], int r);

int main()
{
    int a[R],b[P];
    int r,status;
    printf("Enter the size of array\n");
    scanf("%d",&r);
    printf("Enter the elements of array 1\n");
    read_array(a,r);
    printf("Enter the elements of array 2\n");
    //function call
    read_array(b,r);
    status=compare(a,b,r);
    if(status==1)
        printf("The given arrays are fit\n");
    else
        printf("The given arrays are not fit");
    return 0;
}

//function definition
void read_array(int a[],int r)
{
    int i;
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
}

int compare(int a[],int b[],int r)
{
    int i,status=1;
    for(i=0;i<r;i++)
    {
        if(a[i]!=b[i])
        {
            status=0;
            break;
        }
    }
    return status;
}
