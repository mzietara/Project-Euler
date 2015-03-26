


#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool isSquare(int n);


int main() {
	int a=1,b=2;
	long double c, c2;
	bool foundNumbers = false;

	while (!foundNumbers && a ) {
		a = 1;
		while(a < b) {
			c2 = a*a + b*b;
			c = sqrt(c2);
			if (isSquare(c2) && a + b + c == 1000) {foundNumbers=true;break;}
			else {a++;}
		}
		if (!foundNumbers) {b++;}
	}
	cout << "a: " << a << " b: " << b << " c: " << c << endl;
	int abc = a*b*c;
	cout << "abc = " << abc << endl;
	return 0;
}


bool isSquare(int n) {
	return sqrt(n) == floor(sqrt(n));
}





