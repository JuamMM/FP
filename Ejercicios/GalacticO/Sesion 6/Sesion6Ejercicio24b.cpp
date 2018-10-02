#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.precision(15);
	int i, tope; 
	bool cambio_num_dem = false;
	double num = 2;
	double dem= 1.0;
	double pi = (num/dem);
	
	do {
		cout << "Inserte un tope entre 1 y cien mil: ";
		cin >> tope;
	} while (tope < 1 || tope > 100000);
	
	for (i=0;i<tope;++i) {
		if (cambio_num_dem) {
			cambio_num_dem = false;
			num = dem + 1;
		} else {
			cambio_num_dem = true;
			dem = num + 1;
		}
		pi = pi * (num/dem);
	}
	
	cout << pi*2;
}
