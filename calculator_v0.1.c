#include<stdio.h>
#include<stdlib.h>

void operatorMenu(){
    printf("Select the operator from + , - , *, /\n");
}
int main(){
    double num1;
    double num2;
    char op;


    printf("Enter a number: ");
    scanf("%lf", &num1);
    operatorMenu();
    printf("Enter a operator: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    } else if(op == '-'){
        printf("%f", num1 - num2);
    } else if(op == '*'){
        printf("%f", num1 * num2);
    } else if(op == '/'){
        printf("%f", num1 / num2);
    } else {
        printf("Select an valid operator.(+,-,*,/)");
    }
    if(op == '/' && num2 == 0){
        printf("infinity");
    }

    return 0;
}
