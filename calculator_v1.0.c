#include<stdio.h>
#include<stdlib.h>

void operatorMenu(){
    printf("===CALCULATOR MENU===\n1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n");
}
int main(){
    double num1;
    double num2;
    char op;
    double result;

    operatorMenu();
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter a operator: ");
    scanf(" %c", &op);
    if(!(op == '+' || op == '-' || op == '/' || op == '*')){
        printf("Select an valid operator.(+,-,*,/)");
        return 0;
    }
    printf("Enter second number: ");
    scanf("%lf", &num2);
    if(op == '/' && num2 == 0){
        printf("error");
        return 0;
    }
    if(op == '+') result = num1 + num2;
    if(op == '-') result = num1 - num2;
    if(op == '*') result = num1 * num2;
    if(op == '/') result = num1 / num2;
    printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);
    return 0;
}
