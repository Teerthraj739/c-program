#include <stdio.h>

int main(){
    int a, b, c;
    printf("enter the three no.");
    scanf("%d%d%d", &a, &b, &c);

    if(a>=b && a>=c)
    {
        printf("greatest number is %d", a);
    }
    else if(b>=a && b>=c)
    {
        printf("the greatest nuber is %d", b);
    }
    else
    {
        printf("greatest number is %d", c);

    }
    return 0;
}