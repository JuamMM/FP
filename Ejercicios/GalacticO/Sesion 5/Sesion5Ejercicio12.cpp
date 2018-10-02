#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double v, margen_error;
	double v_imputada;
	char tipo_radar;
	
	cout << "Inserte tipo de radar.\n(F para radar FIJO, cualquier otra letra radar MOVIL): ";
	cin >> tipo_radar;
	cout << "Inserte una velocidad: ";
	cin >> v;
	
	if (tipo_radar == 'F') {
		margen_error = 5;
		cout << "Es un radar fijo\n";
	} else {
		margen_error = 7;
		cout << "Es un radar movil\n";
	}
	
	if (v <= 100) {
		v_imputada = v - margen_error;
	} else {
		v_imputada = v-(v*margen_error/100.0);
	}
	
	cout << "La velocidad imputada es " << v_imputada;
}
