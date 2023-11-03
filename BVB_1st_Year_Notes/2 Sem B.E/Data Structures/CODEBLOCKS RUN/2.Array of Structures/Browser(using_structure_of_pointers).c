#include<stdio.h>
#include<string.h>
typedef struct
{
    char browser_name[30],language[20],company[30];
    int version;
}B;

void read(B*bptr, int n)
{
    int i;
    printf("\n\nEnter the browser details\n");
    printf("Browser Language Company Version\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s%d",bptr->browser_name,bptr->language,bptr->company,&bptr->version);
        bptr++;
    }
}

void display(B*bptr, int n)
{
    int i;
    printf("\n\nBROWSER DETAILS\n");
    printf("Browser\tLanguage\tCompany\t\tVersion\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t\t%s\t\t%d\n",bptr->browser_name,bptr->language,bptr->company,bptr->version);
        bptr++;
    }
}


void latest(B*bptr, int n)
{
    int i,latest=0;
    B*latest_ptr;
    for(i=0;i<n;i++)
    {
        if(latest<bptr->version)
        {
            latest=bptr->version;
            latest_ptr=bptr;
        }
        bptr++;
    }
    printf("\n\nBrowser with the latest version is \n");
    printf("Browser\tLanguage\tCompany\t\tVersion\n");
    printf("%s\t\t%s\t%s\t\t%d\n",latest_ptr->browser_name,latest_ptr->language,latest_ptr->company,latest_ptr->version);
}


void specific(B*bptr,int n)
{
    int i;
    char search_company[30];
    printf("\n\nEnter the company to be searched\n");
    scanf("%s",search_company);
    printf("Browsers from %s company are\n",search_company);
    for(i=0;i<n;i++)
    {
        if(strcmp(search_company,bptr->company)==0)
        {
            printf("%s\t\t%s\t%s\t\t%d\n",bptr->browser_name,bptr->language,bptr->company,bptr->version);
        }
        bptr++;
    }
}


int main()
{
    B b[10];
    B*bptr;
    bptr=b;
    int n;
    printf("Enter number of browsers\n");
    scanf("%d",&n);
    read(bptr,n);
    display(bptr,n);
    latest(bptr,n);
    specific(bptr,n);
    return 0;
}
