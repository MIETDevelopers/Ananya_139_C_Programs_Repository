//A C Program to calculate area of circle, square and rectangle.
//area of circle : 22/7*r*r
//area of square : r*r
//area of rectangle : length*breadth

#include <stdio.h>	//pre-processor directive of standard input output header file.
#include <math.h>	
int main(){	//start of main function body.
	char purpose;
	printf("Enter the mode of operation.\n 1.Area of Circle.\n 2.Area of Square.\n 3.Area of Rectangle.\n");
	scanf("%c", &purpose);
	float value1, value2;
	printf("Enter values of the shape:\n");
	scanf("%f %f", &value1, &value2);
	switch(purpose)		//switch function used
	{
		case'1':
			printf("Area of Circle = %f", ((22*value1*value1)/7));
			break;
		case'2':
			printf("Area of Square = %f", value1*value1);
			break;	
		case'3':
			printf("Area of Rectangle = %f", value1*value2);
			break;

		default:
            printf("Error eccoured, Please enter the values correctly!");	
	}
	return 0;
} 
