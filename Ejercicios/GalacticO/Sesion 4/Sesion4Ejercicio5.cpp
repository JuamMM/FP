#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	cout.precision(10);
	double grados_lat1, grados_lon1, grados_alt1, grados_lat2, grados_lon2, grados_alt2;
	double lat1, lon1, alt1, lat2, lon2, alt2;
	double dplano, dreal;
	const double cambio_rad = 3.14159 / 180;
	cout << "Inserte las coordenadas del primer punto: \n";
	cout << "Latitud: "; cin >> grados_lat1;
	cout << "Longitud: "; cin >> grados_lon1;
	cout << "Altura: "; cin >> grados_alt1;
	cout << "Inserte las coordenadas del segundo punto: \n";
	cout << "Latitud: "; cin >> grados_lat2;
	cout << "Longitud: "; cin >> grados_lon2;
	cout << "Altura: "; cin >> grados_alt2;
	
	lat1 = grados_lat1 * cambio_rad;
	lon1 = grados_lon1 * cambio_rad;
	alt1 = grados_alt1 * cambio_rad;
	lat2 = grados_lat2 * cambio_rad;
	lon2 = grados_lon2 * cambio_rad;
	alt2 = grados_alt2 * cambio_rad;
	
	/* Distancia en el plano */
	double a, c, min;
	const double R = 6372797.560856;
	double var_lat = lat2-lat1;
	double var_lon = lon2-lon1;
	a = pow (sin(0.5*(var_lat)), 2) + cos(lat1) * cos(lat2) * pow (sin(0.5*(var_lon)), 2); 
	if (1 < sqrt(a)) {
		min = 1;
	}
	else {
		min = sqrt(a);
	}
	c = 2*asin(min);
	dplano= R * c;
	cout << dplano << endl;
	
	/* Distancia real */
	double var_alt = alt2 - alt1;
	dreal= sqrt(var_alt*var_alt + dplano*dplano);
	cout << dreal;
}
