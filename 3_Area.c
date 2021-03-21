//A C Program to calculate the area/perimeter of circle, rectangle and square.
//perimeter of square: 4*side*side	side
//area of square:side*side	side
//perimeter of rectangle:2*length*breadth	length, breadth
//area of rectangle:length*breadth	length, breadth
//perimeter of circle:2*(22/7)*r	radius
//area of circle:(22/7)*r*r	radius
#include<stdio.h>
int main(){
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);	//scan the value entered by user.
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));
	return 0;
}
