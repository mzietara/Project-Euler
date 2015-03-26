/* 
Q: The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.

A: Similar algorithm to PE7. Note that to make the algorithm even more efficient,
one could use the Sieve of Eratosthenes. I did not use that here!
*/


#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int numFactors(long long int n);

int main() {
	long long int n=1;
	long long int toAdd=2;

	while (numFactors(n) <= 500) {n+= toAdd; toAdd++;}
	cout << n << endl;

	return 0;
}

int numFactors(long long int n) {
	int count = 2; //include 1 and n
	for (int i=2; i<n; i++) {
		if (n%i == 0) {count++;} 
	}
	return count;

}





