#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include "arrayfunctions.h"
#define FLT_MAX 3.402823466e+38F /* max value */
#define FLT_MIN 1.175494351e-38F /* min positive value */

void fillInteger( int a[], int length, int min, int max ) {
	printf("Generating and printing %d random integers in range %d to %d\n", length, min, max);
	for(int i=0; i<length; i++) {
		int random = (rand() % (max - min + 1)) + min;
		a[i] = random;
	}
}

void fillCharacter( char c[], int length, char start, char end ){
	printf("Generating and printing %d random characters in range %c to %c\n", length, start, end);
	for(int i=0; i<length; i++) {
		int random = (rand() % (end - start + 1)) + start;
		c[i] = random;
	}
}

void findConsecutive( int array[], int length ){
	for(int i=0; i<length; i++) {
		if(i < length-1 && (array[i] == array[i+1] - 1)){
			printf("Elements [%d] and [%d]are consecutive.\n", i, i+1);
		}
	}
}

void findTriples( char c[], int length ){
	for(int i=0; i<length; i++) {
		if(i < length-2 && (c[i] == c[i+1] - 1) && (c[i+1] == c[i+2] - 1)){
			printf("%c%c%c\n", c[i], c[i+1], c[i+2]);
		}
	}
}

int countCharacter( char c[], int length, char searchChar ){
	int count = 0;
	for(int i=0; i<length; i++) {
		if (c[i] == searchChar){
			count+=1;
		}
	}
	return count;
}

void fillFloat( float a[], int length, float min, float max){
	printf("Generating and printing %d random floats in range %0.1f to %0.1f\n", length, min, max);
	for(int i=0; i<length; i++) {
		float random = rand() / (float) RAND_MAX;
		a[i] = min + random * (max - min + 1.0);
	}
}

float floatMean( float array[], int length ){
	float sum = 0;
	for(int i=0; i<length; i++) {
		sum += array[i];
	}
	return sum/(float) length;
}

float floatMin( float array[], int length ){
	float min = FLT_MAX;
	for(int i=0; i<length; i++) {
		if (array[i] < min) min = array[i];
	}
	return min;
}

float floatMax( float array[], int length ){
	float max = FLT_MIN;
	for(int i=0; i<length; i++) {
		if (array[i] > max) max = array[i];
	}
	return max;
}

