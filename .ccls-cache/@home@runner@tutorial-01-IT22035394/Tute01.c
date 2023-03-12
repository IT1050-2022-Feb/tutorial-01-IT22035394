/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  float a,b,average;

  printf("Enter marks of subject 01:");
  scanf("%f",&a);

  printf("Enter marks of subject 02 :");
  scanf("%f",&b);

  average = (a + b)/2.0 ;
  
  printf("Average of the two marks is : %.2f\n", average);
  
  return 0;
}

