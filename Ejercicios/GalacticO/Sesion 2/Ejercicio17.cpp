#include <iostream>
using namespace std;

int main()
{
	int x, y, z, cambio;
	cout << "Inserte X: ";
	cin >> x;
	cout << "Inserte Y: ";
	cin >> y;
	cout << "Inserte Z: ";
	cin >> z;
	cambio = x;
	x = z;
	z = y;
	y = cambio;
	cout << "\nIntercambiamos los valores...\n\n";
	cout << "X vale " << x << "\n";
	cout << "Y vale " << y << "\n";
	cout << "Z vale " << z;
}
