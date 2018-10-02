#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double v, multapuntos, multaeuros;
	cout << "Inserte la velocidad del vehiculo: "; cin >> v;
	
	if (v>121) {
		if (v>151) {
			if (v>171) {
				if (v>181) {
					if (v>191) {
						multapuntos = 6;
						multaeuros = 600;
					}
					else {
						multapuntos = 6;
						multaeuros = 500;
					}
				}
				else {
					multapuntos = 4;
					multaeuros = 400;
				}	
			}
			else {
				multapuntos = 2;
				multaeuros = 300;
			}
		}
		else {
			multapuntos = 0;
			multaeuros = 100;
		}
	}
	
	cout << multapuntos << ", " << multaeuros;
}
