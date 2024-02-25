#include <stdio.h>
#include <stdlib.h>

   int main() {

   double pr, l, b;

   printf("Enter length = ");
   scanf("%lf", &l);  //Asking user for the age...

   printf("\n \nEnter the breadth = ");
   scanf("%lf", &b); //Asking user for present year...

   pr = 2*(l+b);

   printf("\n \nPerimeter of Rectangle = %lf \n \n", pr);

   return 0;
}
