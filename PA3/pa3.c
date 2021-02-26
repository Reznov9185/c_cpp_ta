#include <stdio.h>
#include <stdlib.h>
#include "pa3functions.h"

int main() {
  int isPerfect, isPrime, primeCount = 0;
  
  for(int i=0; i<1000; i++) {
	  isPerfect = perfect(i);
	  if (isPerfect==1)
		  printf("%d is perfect number!\n", i);
  }
  
  for(int i=2;; i++) {
	  isPrime = prime(i);
	  if (isPrime==1){
		  primeCount += 1;
		  printf("%d is a prime!\n", i);
	  }
	  if(primeCount == 20) {
		  break;
	  }
  }
  
  for(int i=0; i<5; i++){
	  printf("Rand methods %d\n", rand());
	  int random = rand()%10000;
	  int revRandom = revDigits(random);
	  printf("random no. %d and rev no. %d\n", random, revRandom);
  }
  
  return 0;
}
