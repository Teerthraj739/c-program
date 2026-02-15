#include <stdio.h>
#include<math.h>
int main(){
    int principle, rate;
    float SI, CI, T, x;

    printf("enter principle value");
    scanf("%d", &principle);

    printf("enter rate");
    scanf("%d", &rate);

    printf("enter T");
    scanf("%f", &T);
    
    SI = (principle*rate*T)/100;
    printf("SI=%f\n", SI);

    x = pow((1+rate/100.0), T);

    CI = (principle*x)-principle;
    printf("CI=%f", CI);

    return 0;
}