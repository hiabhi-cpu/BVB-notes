//C Program to reverse array
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:reverse_array.c
    Date:24/04/2022
*/

void reverse(int a[],int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}
