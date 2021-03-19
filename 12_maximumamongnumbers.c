/** 
 * C program to find maximum of three numbers using 
 * if else statement
 */ 
#include <stdio.h>  
   
int main()  {  
    int a, b, c, max;  
    /* 
     * Take three numbers as input from user 
     */ 
    printf("Enter Three Integers\n");  
    scanf("%d %d %d", &a, &b, &c);  
     
    if(a > b){
        // compare a and c
        if(a > c)
            max = a;
        else
            max = c;
    } else {
 // compare b and c
        if(b > c)
            max = b;
        else
            max = c;
    }
   
    /* Print Maximum Number */ 
    printf("Maximum Number is = %d\n", max);  
   
    return 0;  
}