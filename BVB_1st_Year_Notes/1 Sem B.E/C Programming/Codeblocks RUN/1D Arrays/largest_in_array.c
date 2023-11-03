//C Program to find largest in array
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:largest_in_array.c
    Date:24/04/2022
*/

int largest(int a[],int n)
{
    int large=a[0],i;
    for(i=1;i<n;i++)
    {
        if(a[i]>large)
            large=a[i];
    }
    return large;
}
