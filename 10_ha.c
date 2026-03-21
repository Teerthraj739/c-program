#include <stdio.h>

int main(){
    int phy, math, chem, eng, cs, sum;
    float per;

    printf("enter marks of physics");
    scanf("%d", &phy);

    printf("enter marks of math");
    scanf("%d", &math);

    printf("enter marks of chemistry");
    scanf("%d", &chem);

    printf("enter marks of CS");
    scanf("%d", &cs);

    printf("enter marks of English");
    scanf("%d", &eng);

    sum=phy+chem+math+eng+cs;
    per=sum/5;

    printf("percentage is %f\n:", per);

    if(per>=90 && per<=100)
    {
        printf(" pass with grade A");
    }
    else if(per>=80 && per<90)
    {
        printf("pass with grade B");
    }

    else if(per>=60 && per<80)
    {
        printf("pass with grade c");

    }
    else{
        printf("grade");
    }


    
    return 0;
}