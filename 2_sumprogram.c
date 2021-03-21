//a basic program to calculate sum of numbers
#include<stdio.h>	//pre processor directive to include standard input output header file.
int main(){	//start of main function body.
	int number1, number2, sum;	//declaring variables.
	scanf("%d %d", &number1, &number2);	//scanning value entered by user.
	sum=number1+number2;	//processing the sum operation.
	printf("sum of two numbers=%d", sum);	//printing the output.
	return 0;	//returning
}
//End