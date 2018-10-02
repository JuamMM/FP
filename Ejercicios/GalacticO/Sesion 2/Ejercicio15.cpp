#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double grados_lat1, grados_lon1, grados_lat2, grados_lon2;
	double lat1, lon1, lat2, lon2;
	double a, pene;
	const double cambio_rad = 3.14159 / 180;
	cout << "Inserte las coordenadas del primer punto: \n";
	cout << "Latitud: "; cin >> grados_lat1;
	cout << "Longitud: "; cin >> grados_lon1;
	cout << "Inserte las coordenadas del segundo punto: \n";
	cout << "Latitud: "; cin >> grados_lat2;
	cout << "Longitud: "; cin >> grados_lon2;
	lat1 = grados_lat1 * cambio_rad;
	lon1 = grados_lon1 * cambio_rad;
	lat2 = grados_lat2 * cambio_rad;
	lon2 = grados_lon2 * cambio_rad;
	a = pow (sin(0.5*(lat2-lat1)), 2) + cos(lat1) * cos(lat2) * pow (sin(0.5*(lon2-lon1)), 2); 
	cout << "El valor de A es " << a;
}
