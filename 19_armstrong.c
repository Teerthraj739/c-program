#include <stdio.h>
#include<math.h>
int main(){
    int i, count, a, b, c, n, sum, original;
  

    for(i=1;i<=100;i++)
    {
    count=0;
    n=i;
    original=i;
    a=i%10;
    b=(i/10)%10;
    c=(i/100)%10;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    int sum=pow(a,count)+pow(b,count)+pow(c,count);

    if(sum==original)
    {
        printf("%d ", original);
    }
}
    return 0;
}
