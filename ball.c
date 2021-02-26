// CS 271 -PA 1
// Program name:  ball.c
// Sajidur Rahman
// January 31 2021

#include <stdio.h>
#include <math.h>

int main() {
   double ex_diameter, in_diameter, rubber_needed;

   printf("Input the exterior diameter(decimal, inches): ");
   scanf("%lf", &ex_diameter);
   printf("Input the interior diameter(decimal, inches): ");
   scanf("%lf", &in_diameter);
   
   if(in_diameter >= ex_diameter)
   {
       printf("\nExterior diameter must be larger than interior diameter.\n");
       return 0;
   }
   
   // Calculating the rubber_needed in cubic inches
   rubber_needed = (4.0/3) * M_PI * (pow(ex_diameter, 3) - pow(in_diameter, 3));
   
   // Printing the rubber_needed in cubic inches
   printf("\nRubber Needed(in cubic inches): %.2lf\n", rubber_needed);

   return 0;
}
