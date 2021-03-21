//A C Program to write in a file.
#include <stdio.h>
#include <stdlib.h>

struct threeNum   //declaring a structure (threeNum) with three numbers.
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;    //[declare a pointer]this declaration is needed for communication b/w the file and program.

   if ((fptr = fopen("C:\\program.bin","wb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 1; n < 5; ++n)
   {
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      fwrite(&num, sizeof(struct threeNum), 1, fptr);   //store the value into file(inside the for loop)
   }
   fclose(fptr);    //close the file.
  
   return 0;
}