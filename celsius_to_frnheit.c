#include <stdio.h>
#include <stdlib.h>

int main() {

   int m1;

   printf("\n \n");

   printf("Enter the temperarure in Celsius = ");
   scanf("%d", &m1);

   double frn = ((double)m1*1.8)+32;

   printf("\nThe Avg is = %.4lf \n \n", frn);

   return 0;
}
