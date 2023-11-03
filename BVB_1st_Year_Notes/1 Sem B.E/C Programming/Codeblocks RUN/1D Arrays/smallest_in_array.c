//C Program to find smallest in array
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:smallest_in_array.c
    Date:24/04/2022
*/


int smallest(int a[],int n)
{
    int small=a[0],i;
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
            small=a[i];
    }
    return small;
}
