//A C Program to read in a file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;  //declaration of pointer of type file.

   //fopen is to open the file stream
   //fptr is a file pointer associated with the file to be closed.
   if ((fptr = fopen("C:\\program.txt","r")) == NULL){  //if file doesnot exists, it returns null.
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr);    //closing a file.
  
   return 0;
}