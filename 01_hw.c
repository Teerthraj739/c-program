#include <stdio.h>

int main()
{
      int m1, m2, m3, m4, m5, sum; 
      
    float  percentage;
      printf("enter number m1: ");
      scanf("%d", &m1);

      printf("enter number m2: ");
      scanf("%d", &m2);

      printf("enter number m3: ");
      scanf("%d", &m3);

      printf("enter number m4: ");
      scanf("%d", &m4);

      printf("enter number m5: ");
      scanf("%d", &m5);

      sum = m1+m2+m3+m4+m5;
      printf("sum = %d\n", sum);
      percentage = sum/5.0;
      printf("percentage = %f", percentage);
      
    return 0 ;
}