// CS 271 -PA 2
// Program name:  cargo.c
// Sajidur Rahman
// February 5 2021

#include <stdio.h>

void main() {
   float capacity, current_cargo, total_cargo_loaded = 0.0; 
   int no_of_containers = 0;
   
   scanf("%f", &capacity);
   
   while (total_cargo_loaded <= capacity) {
	   scanf("%f", &current_cargo);
	   if (current_cargo > 0) {
		if (total_cargo_loaded + current_cargo > capacity) {
			printf("The ship is full.\n");
			printf("Ship's Weight Capacity: %f tons\n", capacity);
            printf("%d containers were loaded\n", no_of_containers);
			printf("Total weight loaded: %f tons\n", total_cargo_loaded);
		}
		no_of_containers++;
		total_cargo_loaded = total_cargo_loaded + current_cargo;
	   }
   }
}
