#include <stdio.h>
#include<math.h>

int main(){
    float r, x, area, circumference;

    printf("enter the radius of the circle");
    scanf("%f", &r);

    x = pow(r, 2);
    area = 3.14*x;
    printf("area=%.2f\n", area);

    circumference = 2.0*3.14*r;
    printf("circumference=%.2f", circumference);

    return 0;
}