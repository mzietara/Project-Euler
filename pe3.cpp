#include <iostream>
#include <math.h>

using namespace std;
long largestPrimeFactor(long n);
//600851475143
//the number is not even, so skip the even numbers
int main() {
	long i = 600851475143;
		cout << i<< "::" << largestPrimeFactor(i) << endl;

	
	
	return 0;
}

long largestPrimeFactor(long n) {
	long b = 3;
	long largestPrime = n;

	//take out all even numbers
	while (largestPrime % 2 == 0 && largestPrime != 2) {
		largestPrime = largestPrime/2;
	}

	//now we deal with only odds (to optomize)
	for (b; b < largestPrime; b+= 2) {
		while (largestPrime % b == 0 && largestPrime != b) {
			largestPrime = largestPrime/b;
		}
	}
	return largestPrime;
}
