#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nWhat type of operation(+ - * /) do you want to use?");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf ("%lf", &num1);

    printf("Enter number 2: ");
    scanf ("%lf", &num2);

    switch (operator)
    {
        case'+':
            result = num1 + num2;
            printf("\nresult: %.1lf", result);
            break;
        case'-':
            result = num1 - num2;
            printf("\nresult: %.1lf", result);
            break;
        case'*':
            result = num1 * num2;
            printf("\nresult: %.1lf", result);
            break;
        case'/':
            result = num1 / num2;
            printf("\nresult: %.1lf", result);
            break;     
        default:
        printf("\n%C is not valid; Please enter an valid operator", operator);
    }
    return 0;
}