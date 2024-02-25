#include <stdio.h>
#include <stdlib.h>

int main() {

   int m1, m2, m3;

   printf("\n \n");

   printf("Enter Marks of Subject 1 = ");
   scanf("%d", &m1);

   printf("\nEnter Marks of Subject 2 = ");
   scanf("%d", &m2);

   printf("\nEnter Marks of Subject 3 = ");
   scanf("%d", &m3);

   double avg = ((double)m1 + m2 + m3)/3;

   printf("\nThe Avg is = %lf \n \n", avg);

   return 0;
}
 
