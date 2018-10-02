#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1, x2, y1, y2, distancia;
	cout << "Inserte las cordenadas del primer punto: ";
	cin >> x1 >> y1;
	cout << "Inserte las cordenadas del segundo punto: ";
	cin >> x2 >> y2;
	distancia = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
	cout << "La distancia euclidea entre los dos puntos es de " << distancia;
}
