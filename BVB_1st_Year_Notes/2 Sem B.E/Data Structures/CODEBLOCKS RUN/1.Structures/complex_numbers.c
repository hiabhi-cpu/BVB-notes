//C Program to add two complex numbers using structures
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:Complex_numbers.c
    Date:14/05/2022
*/
#include<stdio.h>

typedef struct complex_number
{
    float real_part,imaginary_part;
}COMPLEX;

COMPLEX add_complex_no(COMPLEX c1,COMPLEX c2);
COMPLEX read_complex_no(COMPLEX c);
void display(COMPLEX c);

int main()
{
    COMPLEX c1,c2,c3;
    c1=read_complex_no(c1);
    c2=read_complex_no(c2);
    display(c1);
    display(c2);
    c3=add_complex_no(c1,c2);
    display(c3);
    return 0;
}

COMPLEX add_complex_no(COMPLEX c1,COMPLEX c2)
{
    COMPLEX c3;
    c3.real_part=c1.real_part+c2.real_part;
    c3.imaginary_part=c1.imaginary_part+c2.imaginary_part;
    return c3;
}

COMPLEX read_complex_no(COMPLEX c)
{
    printf("Enter the Real part of complex number\n");
    scanf("%f",&c.real_part);
    printf("Enter the Imaginary part of complex number\n");
    scanf("%f",&c.imaginary_part);
    return c;
}

void display(COMPLEX c)
{
    printf("The complex number is:\n");
    if(c.imaginary_part>=0)
    printf("%f + i%f\n",c.real_part,c.imaginary_part);
    else
    printf("%f i%f\n",c.real_part,c.imaginary_part);
}
