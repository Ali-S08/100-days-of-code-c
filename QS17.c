#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d;

    printf("enter a :");
    scanf("%f", &a);

    printf("enter b :");
    scanf("%f", &b);

    printf("enter c :");
    scanf("%f", &c);

    d = b * b - 4 * a * c;

    if(d > 0){
        printf("Roots are real and different");
    }
    else if(d == 0){
        printf("Roots are real and equal");
    }
    else{
        printf("Roots are imaginary");
    }

    return 0;
}