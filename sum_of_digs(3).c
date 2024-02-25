#include <stdio.h>
#include <stdlib.h>

int main() {

   int num, units, tens, huns, sum;

   printf("\n \nEnter a 3-digit number = ");
   scanf("%d", &num);

   units = num%10;
   tens = (num%100)/10;
   huns = num/100;

   //for tens this can also be used "tens = (num/10) % 10"

   sum = units + tens + huns;

   printf("The sum of %d is %d \n \n", num, sum);
   
   return 0;
}
