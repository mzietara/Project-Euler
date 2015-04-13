#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool isPalindrome(int n);

int main() {
	int largest = 0;
	bool check;
	for (int i = 100; i < 1000; ++i) {
		for (int j = 0; j < 1000; ++j) {
			if (i*j > largest && isPalindrome(i * j)) {largest = i*j;}
		}
	}
	cout << largest << endl; 
	return 0;
}


bool isPalindrome(int n) { //check if a number is a palindrome
	string nStr = to_string(n);
	for (int i=0; i <= nStr.length()/2; i++) {
		if (nStr.at(i) != nStr.at(nStr.length() - i - 1) ) {return false;}
	}
	return true;
}