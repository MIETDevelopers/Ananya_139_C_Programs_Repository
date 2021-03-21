//A C Program to calculate distance b/w two points.
//formula:: distance = sqrt( (x2 - x1)(x2 - x1) + (y2 - y1)(y2 - y1)
#include<stdio.h>  
#include<math.h>  

int main()  
{  
    float x1, y1, x2, y2, distance;  

    printf("Enter point 1 (x1, y1)\n");  
    scanf("%f %f", &x1, &y1);       //scan the numbers.

    printf("Enter point 2 (x2, y2)\n");  
    scanf("%f %f", &x2, &y2);       //scan the numbers entered by users.

    distance = sqrt( (x2 - x1)(x2 - x1) + (y2 - y1)(y2 - y1) );  

    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", x1, y1, x2, y2, distance);      //this will give us our respective output.

    return 0;
}
