#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double v, margen_error;
	double v_imputada;
	string matricula;
	char tipo_radar;
	string final = "#";
	
	double v_imputada_max = 0;
	string matricula_max;
	
	cout << "Inserte la matricula del vehiculo: ";
	cin >> matricula;
		
	while (matricula != final) {
		cout << "Inserte tipo de radar.\n(F para radar FIJO, cualquier otra letra radar MOVIL): ";
		cin >> tipo_radar;
		cout << "Inserte una velocidad: ";
		cin >> v;
	
		if (tipo_radar == 'F') {
			margen_error = 5;
		} else {
			margen_error = 7;
		}
	
		if (v <= 100) {
			v_imputada = v - margen_error;
		} else {
			v_imputada = v-(v*margen_error/100.0);
		}
		
		if (v_imputada > v_imputada_max) {
			matricula_max = matricula;
			v_imputada_max = v_imputada;
		}
		
		cout << "Inserte la matricula del vehiculo: ";
		cin >> matricula;
	}
	
	cout << endl;
	cout << matricula_max << "	" << v_imputada_max;
}
