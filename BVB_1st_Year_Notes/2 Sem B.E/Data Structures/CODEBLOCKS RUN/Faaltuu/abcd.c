#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define x 1000
struct stack
{
    char letter[x];
    int top;
};
void push(struct stack *s,char a);
char pop(struct stack *s);
void display(struct stack *s);
int main()
{
    struct stack s_var;
    struct stack *s;
    s=&s_var;
    s->top=-1;
    struct stack v_var;
    struct stack *v;
    v=&v_var;
    v->top=-1;
    struct stack c_var;
    struct stack *c;
    c=&c_var;
    c->top=-1;
    int n,i,v_count=0,c_count=0,j;
    char a,b;
    scanf("%d",&n);
    if(n>=2 && n<=26)
    {
      for(i=0;i<n;i++)
      {
          scanf(" %c",&a);
          push(s,a);
      }

       for(j=0;j<n;j++)
       {
        b=pop(s);
           if(b=='A' || b=='E' || b=='I' || b=='O' || b=='U')
           {
               v_count++;
               push(v,b);
           }
           else
           {
               c_count++;
               push(c,b);
           }
       }
      printf("%d %d\n",v_count,c_count);
        if(v_count==0)
        {
            printf("-1\n");
        }
        else
        {
            display(v);
        }
                if(c_count==0)
               {
                printf("-1\n");
               }
               else
               {
                display(c);
               }
    }
    else
    {
        printf("More number of cards needed.");
    }


    return 0;
}
void push(struct stack *s,char a)
{
    s->top=s->top+1;
    s->letter[s->top]=a;
}
char pop(struct stack *s)
{
    char a;
    a=s->letter[s->top];
    s->top=s->top-1;
    return a;
}
void display(struct stack *s)
{
    int i;
    for(i=0;i<=s->top;i++)
    {
     printf("%c ",s->letter[i]);
    }
    printf("\n");
}
