#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void newtons_third_law(){
    printf("Newton's third law\n");
    char ch[20] = "\0";
    scanf("%s",ch);
    int len = 0,i=0;
    while(ch[i++])
        ++len;
    for(int i=len-1;i >= 0; --i)
        printf("%c",ch[i]);
    printf("\n");
    return;
}

int free_lunch(){
    // Here is the brute-force method to find the max-sum of
    // a sub-array. But this solution is very slow and it will
    // take lot of resources, hence we should not go for this
    // solution

    // We should never assume that we get lunch for free
    int a[10];
    int sum = 0,max = INT_MIN;
    for(int i=0;i<10;++i)
        scanf("%d",&a[i]);
    for(int i=0;i<10;++i){
        for(int j=i;j<10;++j){
            sum += a[j];
            if(sum > max)
                max = sum;
        }
        sum = 0;
    }
    return max;
}

int occams_razor(){
    // Here is an efficient solution to find the maximum
    // sum of a sub-array.
    int a[10];
    int ans = INT_MIN;
    int sum = 0;
    for(int i=0;i<10;++i)
        scanf("%d",&a[i]);
    for(int i=0;i<10;++i){
        if(sum < 0)
            sum = 0;
        sum += a[i];
        if(sum > ans)
            ans = sum;
    }
    return ans;
}

void murphy_law(){
    int *temp = NULL;
    // Always check if a pointer is NULL before freeing it
    // Else it will cause segmentation fault
    free(temp);
}

int main(){
    newtons_third_law();
    printf("Free Lunch : %d\n",free_lunch());
    printf("Occams razor : %d\n",occams_razor());

    // The following function will cause segmentation fault.
    murphy_law();
}
