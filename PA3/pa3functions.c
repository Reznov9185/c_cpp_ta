#include <stdio.h>
#include <math.h>
#include "pa3functions.h"

int perfect(int n) {
	int sum = 1;
	for(int i=2; i<n; i++) {
		if(n%i==0) {
			sum += i;
		}
	}
	if(sum == n){
		return 1;
	}
	else {
		return 0;
	}
}

int prime(int n) {
	int squareRoot = sqrt(n);
	for(int i=2; i<squareRoot; i++) {
		if(n%i==0)
			return 0;
	}
	return 1;
}

int revDigits(int n){
	long int temp=0;
	while(n!=0){
        temp = temp*10 + n%10;
        n/=10;
	}
	return temp;
}
