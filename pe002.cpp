#include <iostream>
using namespace std;


int main() {
	int count=2, lastFibNumber=2, fibNumber=3, tempNumber=0;
	while (fibNumber < 4000000) {
		tempNumber = fibNumber; //keep fibNumber saved
		fibNumber = fibNumber + lastFibNumber; // next fib number
		lastFibNumber = tempNumber; //last fibnumber increments to next fib number

		if (fibNumber % 2 == 0) {
			count += fibNumber;
		}
	}
	cout << count << endl;
}