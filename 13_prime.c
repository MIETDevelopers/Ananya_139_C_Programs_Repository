// Check Prime or Not in C


#include<stdio.h>
#include<conio.h>
int main()
{
    int num, i, count=0;
    printf("Enter a number: ");     //print the number entered
    scanf("%d", &num);      //scan the number given by the user.
    for(i=2; i<num; i++)        //for loop function
    {
        if(num%i == 0)
        {
            count++;
            break;
        }
    }
    if(count==0)            //this will give the respective output.
        printf("\nIt's a prime number");
    else
        printf("\nIt's not a prime number");
    getch();
    return 0;
}
