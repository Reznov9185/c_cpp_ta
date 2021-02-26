// CS 271 - PA 1
// Program name :  ramp.c
// Nhat Le
// 2/4/21


#include<stdio.h>
#include<math.h>

int main (void) {
    
    // declare the variables
    double ver;
    double hor;
    double diag;
    
    // print a prompt
    printf("Enter a rise in inches: ");
    scanf("%lf", &ver);
    
    // for every 1 inch that the ramp rises vertically, there must be at least 12 inches horizontally
    hor = ver * 12;
    
    // determine if the ramp requires a landing.
    // 30 feet long equals to 360 in
    if (hor >360)
        printf("The ramp requires a landing.\n");
    
    // calculate the diagonal using Pythagoras theorem
    diag = sqrt ((pow (ver,2)) + (pow (hor,2)));
    
    // display output
    printf(" Horizontal distance is %.1lf feet: \n", (double) hor /12);
    printf(" The ramp length is %.1lf feet: \n", (double) diag /12);
    
} // end main
    
    
