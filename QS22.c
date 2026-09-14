// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main(){
    float cp, sp, profit, loss;

    printf("enter cost price :");
    scanf("%f", &cp);

    printf("enter selling price :");
    scanf("%f", &sp);

    if(sp > cp){
        profit = sp - cp;
        printf("Profit = %f\n", profit);
        printf("Profit Percentage = %f", (profit / cp) * 100);
    }
    else if(cp > sp){
        loss = cp - sp;
        printf("Loss = %f\n", loss);
        printf("Loss Percentage = %f", (loss / cp) * 100);
    }
    else{
        printf("No Profit No Loss");
    }

    return 0;
}