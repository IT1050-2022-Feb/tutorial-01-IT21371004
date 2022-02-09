/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  float subject1, subject2 ;
  float average, total;
   
  printf("Enter marks of two subject :\n ");
  scanf("%f%f", &subject1, &subject2);

  total = subject1 + subject2 ;
  average = total/2;

  printf ("Average marks = %.2f\n", average);
  
  return 0;
}

