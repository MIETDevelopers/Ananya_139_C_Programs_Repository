#include <stdio.h>
#include <math.h>
#include<stdio.h>
int main(){
    char purpose;
    printf("Enter the mode of operation.\n 1.Perimeter of square.\n 2.Perimeter of rectangle.\n 3.Perimeter of circle.\n 4.Area of square.\n 5.Area of rectangle.\n 6.Area of circle.\n");
    scanf("%c", &purpose);
    float value1, value2;
    printf("Enter values of the shape:\n");
    scanf("%f %f", &value1, &value2);
    switch(purpose)
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator);
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b);
    switch(operator)
    {
        case'1':
            printf("Perimeter of square = %f", 4*value1);
        case '+':
            printf("%.lf + %.lf = %.lf",a, b, a+b);
            break;
        case'2':
            printf("Perimeter of rectangle = %f", 2*(value1+value2));

        case '-':
            printf("%.lf - %.lf = %.lf",a, b, a-b);
            break;
        case'3':
            printf("Perimeter of circle = %f", ((2*22*value1)/7));

        case '*':
            printf("%.lf * %.lf = %.lf",a, b, a*b);
            break;
        case'4':
            printf("Area of square = %f", value1*value1);
            break;  
        case'5':
            printf("Area of rectangle = %f", value1*value2);

        case '/':
            printf("%.lf / %.lf = %.lf",a, b, a/b);
            break;
        case'6':
            printf("Area of circle = %f", ((22*value1*value1)/7));
            break;
        default:
            printf("Error eccoured, Please input the values correctly!");   
    printf("Error encountered by the input values");
    }
    return 0;
} 