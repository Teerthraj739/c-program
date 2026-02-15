#include <stdio.h>

int main(){
    float centigrade, fahrenheit;

    printf("centigrade=");
    scanf("%f", &centigrade);

    fahrenheit = 1.8*centigrade+32;
    printf("fahrenheit=%.2f", fahrenheit);

    return 0;
}