//Q:What is 10001st prime number?


#include <iostream>
#include <math.h>
using namespace std;

long int nthPrime(long int n);


int main() {
	cout <<nthPrime(10001)<<endl;
	return 0;
}

long int nthPrime(long int n) {
	if (n ==1) {return 2;}
	int count = 1; //include 2 as prime
	long int currentNumber = 3, currentPrimeNumber = 3;
	
	while (count < n) {
		bool isPrime=true;
		for (int i=3; i <= sqrt(currentNumber); i+= 2) {
			if (currentNumber % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {count++; currentPrimeNumber = currentNumber;}
		currentNumber+= 2;
	}
	return currentPrimeNumber;
}