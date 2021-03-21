#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):");  //it will print the operator to be entered by user.
    scanf("%c", &operator);         //scan the operator.
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b);        //scan the numbers.
    switch(operator)
    {
        case '+':
            printf("%.lf + %.lf = %.lf",a, b, a+b);     //addition function
            break;

        case '-':
            printf("%.lf - %.lf = %.lf",a, b, a-b);     //subtraction function
            break;

        case '*':
            printf("%.lf * %.lf = %.lf",a, b, a*b);     //multiplication function
            break;

        case '/':
            printf("%.lf / %.lf = %.lf",a, b, a/b);     //division function
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}