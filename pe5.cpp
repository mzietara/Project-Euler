#include <iostream>
#include <math.h>
using namespace std;


int main() {
	long int smallest = 2;
	long int adder=2;
	bool flag;

	for (int i = 3; i <=20; ++i)
	{
		while (smallest %i != 0) {
			smallest += adder;
			cout << smallest << endl;
		}
		adder = smallest;
	}





	cout << smallest << endl; 
	return 0;
}
