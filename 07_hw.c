#include <stdio.h>

int main(){
    int a, b;
    printf("enter the any positive number");
    scanf("%d", &a);

    b=a%2;

    if(b==0)
    {
        printf("given number is even");
    }
    else{
        printf("given number is odd");
    }
    return 0;
}