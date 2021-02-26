#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include "arrayfunctions.h"

int main (void) {
	// Use current time as seed for random generator
    srand(time(0));
	
	printf("Problem 1\n");
	
	int intArray[20];
	
	fillInteger(intArray, 20, -20, 20);
	
	for(int i=0; i<20; i++) {
		printf("%d ", intArray[i]);
		if( (i+1)%10 == 0) {
			printf("\n");
		}
	}
	
	findConsecutive(intArray, 20);
	
	printf("\n\n");
	
	printf("Problem 2\n");
	
	char charArray[50];
	
	fillCharacter(charArray, 50, 'a', 'd');
	
	for(int i=0; i<50; i++) {
		printf("%c ", charArray[i]);
		if( (i+1 )== 50) {
			printf("\n");
		}
	}
	
	// char testArray[10] = {'a', 'b', 'c', 'i', 'k', 'j', 'l', 'm', 'n', 'x'};
	findTriples(charArray, 50);
	
	printf("\n\n");
	
	printf("Problem 3\n");
	
	char cinput;
	
	while((cinput=getchar())!=EOF && cinput!='\n' && isalpha(cinput)){
		printf("Input Character count in generated Array: %d\n", countCharacter(charArray, 50, tolower(cinput)));
	};
	
	printf("\n\n");
	
	printf("Problem 4\n");
	
	float floatArray[10];
	
	fillFloat(floatArray, 10, -20.1, 20.5);
	
	for(int i=0; i<10; i++) {
		printf("%0.1f  ", floatArray[i]);
	}
	
	printf("\n");
	
	printf("Mean of the generated float Array: %0.1f", floatMean(floatArray, 10));
	
	printf("\n");
	
	printf("Minimum of the generated float Array: %0.1f", floatMin(floatArray, 10));
	
	printf("\n");
	
	printf("Maximum of the generated float Array: %0.1f", floatMax(floatArray, 10));
	
	printf("\n");
	
	return 0;
}
