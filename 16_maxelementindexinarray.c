//A C Program to find max element and index in array.
#include<stdio.h>
int main(){
	int i;
	float arr[5];

	printf("Please enter five numbers:\n ");	//print any five numbers

	for (i = 0; i < 5; ++i)
	{
    scanf("%f", &arr[i]);		//scan the numbers given by users.
	}

		for (i = 1; i < 5; ++i)
		{
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]);	//print the output as the largest number among all the five numbers we have given.

	return 0;
}