#include <iostream>
using namespace std;

int main() {
	int total = 0;
	for (int i=0; i < 1000; i++) {
		if (!( i % 3)||!(i %5)) {
			total+= i;
		}
	}
	cout << total << endl;

	return 0;
}