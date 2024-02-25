
#include <stdio.h>
#include <stdlib.h> 


int main(){

   int sec, min, hr, rsec;
     
   printf("\n \nEnter the seconds = ");
   scanf("%d", &sec);

   hr = sec/3600;
   min = (sec - hr*3600)/60;
   rsec = (sec - min*60) % 60;

   printf("Time remaining is = %d:%d:%d \n \n", hr, min, rsec);
   return 0;
}

