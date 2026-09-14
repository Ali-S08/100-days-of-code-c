#include <stdio.h>
#include <math.h>

int main(){
    float p, r, t;

    printf("enter principal :");
    scanf("%f", &p);

    printf("enter rate :");
    scanf("%f", &r);

    printf("enter time :");
    scanf("%f", &t);

    printf("Simple Interest is %f\n", (p * r * t) / 100);
    printf("Compound Interest is %f", p * pow((1 + r / 100), t) - p);

    return 0;
}  