#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double esperanza, desviacion, valor_x;
	double gauss;
	cout << "Insertela esperanza o media: ";
	cin >> esperanza;
	cout << "Inserte la desviacion tipica: ";
	cin >> desviacion;
	cout << "Inserte una X: ";
	cin >> valor_x;
	gauss = 1.0/(desviacion*sqrt(2*3.1415)) * exp( -0.5 * pow( (valor_x-esperanza)/desviacion , 2) );
	cout << gauss;
}
