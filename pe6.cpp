#include <iostream>
#include <math.h>
using namespace std;


int main() {
//these are just basic math formulas
			//sum squared			 //square sums
	long int sumSquared = pow(100*(100 + 1)/2, 2);
	long int squaredSum = ((2*100 + 1)*(100 + 1)*100/6);
	cout <<  sumSquared- squaredSum << endl;
	return 0;
}

