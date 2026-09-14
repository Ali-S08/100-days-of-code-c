// Q25: Write a program to implement a basic calculator using switch-case.

#include <stdio.h>

int main(){
    int a, b;
    char op;

    printf("enter two numbers :");
    scanf("%d %d", &a, &b);

    printf("enter operator :");
    scanf(" %c", &op);

    switch(op){
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        case '%':
            printf("Result = %d", a % b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}