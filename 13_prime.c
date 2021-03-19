// Check Prime or Not in C


#include<stdio.h>
#include<conio.h>
int main()
{
    int num, i, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("\nIt's a prime number");
    else
        printf("\nIt's not a prime number");
    getch();
    return 0;
}