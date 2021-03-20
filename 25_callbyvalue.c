/* A Program to swap two numbers using call by value */
//arguments pass by value
#include<stdio.h>

//user defined	//inline definition function
int swap(int x, int y){
	//function called
	printf("values within function before swapping: x=%d, y=%d \n", x, y);
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("values within function after swapping: x=%d, y=%d \n", x, y);
}
//function calling
int main(){
	int x,y;
	x=3;
	y=21;
	printf("values before function calling: x=%d, y=%d \n", x, y);
	swap(x, y);		//function call by value
	printf("values after function calling:x=%d, y=%d", x, y);

return 0;
}