#include <stdio.h>
#include <math.h>
int main(){
	char purpose;
	printf("Enter the mode of operation.\n 1.Area of Circle.\n 2.Area of Square.\n 3.Area of Rectangle.\n");
	scanf("%c", &purpose);
	float value1, value2;
	printf("Enter values of the shape:\n");
	scanf("%f %f", &value1, &value2);
	switch(purpose)
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