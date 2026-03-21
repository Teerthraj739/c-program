#include <stdio.h>

int main(){
    int n, i, fact;
    
    printf("enter the number for factorial calculation ");
    scanf("%d", &n);
    fact = 1;

    for(i=1;i<=n;i++)
    {
        if(n!=0)
        {

            fact=fact*i;
        }
        else
        {
            printf("factorial of 0 is 1");
        }
    }
    printf("the factorial of %d = %d", n, fact);

    return 0;
}