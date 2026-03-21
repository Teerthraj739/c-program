#include <stdio.h>

int main(){
    int n, odd=0, even=0, i;
     printf("enter the number");
     scanf("%d", &n);

     for(i=0;i<=n;i++)
     {
        if(i%2==0)
        {
            even = even+i;
        }
        else
        {
            odd = odd+i;
        }
     }
     printf("sum of even number is %d\n", even);
     printf("sum of odd number is %d\n", odd);

    return 0;
}