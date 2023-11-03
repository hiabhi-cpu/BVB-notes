//C Program of Pointers
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:pointers.c
    Date:19/04/2022
*/

#include<stdio.h>

int main()
{
    int a;//variable declaration
    a=10;
    int*fptr,*cptr,*dptr,*ptr;//pointer declaration

    float f;
    fptr=&f;

    char c;
    cptr=&c;

    double d;
    dptr=&d;


    ptr=&a;//capturing the address of a
    printf("Address of a is %x\n",ptr);
    printf("Value at a is %d\n",*ptr);
    printf("Address of a is %x\n",&a);
    printf("Value of a is %d\n",a);


    printf("Size of variable a is %d bytes\n",sizeof(a));
    printf("Size of variable f is %d bytes\n",sizeof(f));
    printf("Size of variable c is %d bytes\n",sizeof(c));
    printf("Size of variable d is %d bytes\n",sizeof(d));

    printf("Size of pointer ptr is %d bytes\n",sizeof(ptr));
    printf("Size of pointer fptr is %d bytes\n",sizeof(fptr));
    printf("Size of pointer cptr is %d bytes\n",sizeof(cptr));
    printf("Size of pointer dptr is %d bytes\n",sizeof(dptr));
    return 0;
}
