// CS 271 -PA 2
// Program name:  pattern.c
// Sajidur Rahman
// February 8 2021

#include <stdio.h>
#include <stdlib.h>

void main() {
   int i, j, k, n;
   
   printf("Enter the no of lines: ");
   scanf("%d", &n);
   
   if (n%2==0) {
	   for(i=0; i<n/2; i++) {
		for(j=0; j<n; j++) {
				if (abs(j-i)==(n/2)-1 || (i+j)==(n/2)-1) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
		for(i=n/2; i<n; i++) {
			for(j=0; j<n; j++) {
				if((i-j)==n/2 || i+j==n+((n/2)-2)) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
   }
   else {
	   for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(i+j==n/2 || abs(j-i)==n/2 || i+j==(n/2)+n-1) {
					printf("*");
				}
			else {
				printf(" ");
			}
		}
	   printf("\n");
   }
   }
}
