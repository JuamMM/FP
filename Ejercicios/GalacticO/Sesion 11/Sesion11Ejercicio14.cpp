#include <iostream>
#include <cmath>
using namespace std;

class CoordenadasGPS{
private:
	static const int MAX_LAT = 90;
	static const int MIN_LAT = -90;
	static const int MAX_LON = 180;
	static const int MIN_LON = -180;
	static const int MAX_ALT = 8848;
	static const int MIN_ALT = -423;
	double grados_lat1, grados_lon1, grados_alt1, grados_lat2, grados_lon2, grados_alt2;
	static const double cambio_rad = 3.14159 / 180;
	int lat1 = 0.0,
		lat2 = 0.0,
		lon1 = 0.0,
		lon2 = 0.0,
		alt1 = 0.0,
		alt2 = 0.0;
public:
	void ComprobadorDatosCorrectos() {
		while !((lat1 < MAX_LAT && lat1 > MIN_LAT) &&
			 (lat2 < MAX_LAT && lat2 > MIN_LAT) &&
			 (lon1 < MAX_LON && lon1 > MIN_LON) &&
			 (lon2 < MAX_LON && lon2 > MIN_LON) &&
			 (alt1 < MAX_ALT && alt1 > MIN_ALT) &&
			 (alt2 < MAX_ALT && alt2 > MIN_ALT)) {
			cout << "Datos incorrectos. Inserte los datos de nuevo. \n";
			cout << "Inserte las coordenadas del primer punto: \n";
			cout << "Latitud: "; cin >> grados_lat1;
			cout << "Longitud: "; cin >> grados_lon1;
			cout << "Altura: "; cin >> grados_alt1;
			cout << "Inserte las coordenadas del segundo punto: \n";
			cout << "Latitud: "; cin >> grados_lat2;
			cout << "Longitud: "; cin >> grados_lon2;
			cout << "Altura: "; cin >> grados_alt2;
		}
	}
	void CambioARadianes() {
		lat1 = grados_lat1 * cambio_rad;
		lon1 = grados_lon1 * cambio_rad;
		alt1 = grados_alt1 * cambio_rad;
		lat2 = grados_lat2 * cambio_rad;
		lon2 = grados_lon2 * cambio_rad;
		alt2 = grados_alt2 * cambio_rad;
	}
	double DistanciaSobrePlano(int lat1, 
							int lon1, 
							int lat2, 
							int lon2) {
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
		return dplano;
	}
	
	int DistanciaReal(int lat1, 
					  int lon1,
					  int alt1, 
					  int lat2, 
					  int lon2, 
					  int alt2) {
		double var_alt = alt2 - alt1;
		double distanciaplano = DistanciaSobrePlano(lat1, lon1, lat2, lon2);
		double dreal= sqrt(var_alt*var_alt + distanciaplano*distanciaplano);
		return dreal;
	}
};

int main() {
	CoordenadasGPS coord;
	cout << "Inserte las coordenadas del primer punto: \n";
	cout << "Latitud: "; cin >> grados_lat1;
	cout << "Longitud: "; cin >> grados_lon1;
	cout << "Altura: "; cin >> grados_alt1;
	cout << "Inserte las coordenadas del segundo punto: \n";
	cout << "Latitud: "; cin >> grados_lat2;
	cout << "Longitud: "; cin >> grados_lon2;
	cout << "Altura: "; cin >> grados_alt2;
	
	
}
