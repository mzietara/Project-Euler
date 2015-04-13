/* 
Q: The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.

A: Similar algorithm to PE7. Note that to make the algorithm even more efficient,
one could use the Sieve of Eratosthenes. I did not use that here!
*/


#include <iostream>
#include <math.h>
using namespace std;

long int sumOfNPrimes(long int n);


int main() {
	cout << sumOfNPrimes(2000000);

	return 0;
}



long int sumOfNPrimes(long int n) {
	if (n < 2) {return 0;}
	long int sum = 2;
	long int currentNumber = 3;
	
	while (currentNumber < n) {
		bool isPrime=true;
		for (int i=3; i <= sqrt(currentNumber); i+= 2) {
			if (currentNumber % i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {sum += currentNumber;}
		currentNumber+= 2;
	}
	return sum;
}





