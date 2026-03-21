#include <stdio.h>

int main(){
    int n, i, result=0;
    printf("enter the number to check prime or not");
    scanf("%d", &n);

    for(i=2;i<n;i++)
    {
    
        if(n%i==0)
        {
            result=1;
            break;
        }

    }
    if(result==1)
    {
        printf("enter number %d is not prime", n);
    }
    else
    {
        printf("enter number %d is prime", n);
    }
    return 0;
}