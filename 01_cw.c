#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the number a\n");
    scanf("%d", &a);

    printf("enter the number b\n");
    scanf("%d", &b);


    if (a != b)
    {
        printf("number is not equal");
    }
    else
    {
        printf("number number is equal");
    }
    return 0;
}