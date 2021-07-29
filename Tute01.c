/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  double num1, num2, total, avg;

  printf("Input your mark: \n");
  scanf("%lf", &num1);
  printf("Input your mark: \n");
  scanf("%lf", &num2);

  total = num1 + num2;
  avg = total / 2;

  printf("Avarage is %lf", avg);
  
  return 0;
}

