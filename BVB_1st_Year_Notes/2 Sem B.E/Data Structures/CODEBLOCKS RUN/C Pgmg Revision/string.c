#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    char fname[20],lname[20],wlcm[20];
    scanf("%s",fname);
    scanf("%s",lname);
    wlcm[20]={'W','E','L','C','O','M','E','\0'};
    strcat(fname,lname);
    strcat(wlcm,fname);
    puts(wlcm);
    return 0;
}

