#include <stdio.h>

int main(){
    int i, sum=0, sum1=1, n, nextterm;
    printf("enter the number for fibonacci series");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        nextterm=sum+sum1;
        sum=sum1;
        sum1=nextterm;
        printf("%d", nextterm);
    }

    return 0;
}