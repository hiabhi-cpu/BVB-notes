#include<stdio.h>

//function prototype
float permutation(int n,int r);
int factorial(int n);
int main()
{
    int n,r,npr;
    printf("Enter n and r value\n");
    scanf("%d%d",&n,&r);
    //function call
    npr=permutation(n,r);
    if(n>=r)
        printf("npr=%d",npr);
    else
        printf("invalid input");
    return 0;
}
//function definition
float permutation(int n,int r)
{
    float npr;
    npr=factorial(n)/factorial(n-r);
    return npr;
}
int factorial(int n)
{
    int i,factorial=1;
    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
