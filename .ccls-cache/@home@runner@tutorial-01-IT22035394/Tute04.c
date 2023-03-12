/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2, multi,max,min;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   if (no1>no2) 
     {max = no1 ;
      min = no2 ;
     }
   else
     {max = no2 ;
      min = no1 ;
      return 0;
     }
  
  printf("minimum = %d ",min);
  printf("Maxmimum = %d ",max);
   multi = no1*no2 ;
   printf("Multiplication = %d ",multi);

  return 0;
}
