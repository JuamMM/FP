#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.precision(15);
	int i, tope; 
	double pi = 0;
	
	do {
		cout << "Inserte un tope entre 1 y cien mil: ";
		cin >> tope;
	} while (tope < 1 || tope > 100000);
	
	for (i=0;i<tope;i++) {
		if (i%2 == 0) {
			pi = pi + 4*( 1 / (2*i + 1.0) );
		} else {
			pi = pi + 4*( -1 / (2*i + 1.0) );
		}
	}
	
	cout << pi;
}
