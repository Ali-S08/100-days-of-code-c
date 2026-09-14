#include <stdio.h>

int main(){
    float radius;

    printf("enter radius :");
    scanf("%f", &radius);

    printf("Area is %f\n", 3.14 * radius * radius);
    printf("Circumference is %f", 2 * 3.14 * radius);

    return 0;
}