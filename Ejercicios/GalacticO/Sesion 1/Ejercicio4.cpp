#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double grado1;							//Usando double se declaran las variables
	double grado2;
	double radian1;
	double radian2;
	cout << "Inserte el primer grado: ";	//Se le pide al usuario que introduzca los datos
	cin >> grado1;
	cout << "Inserte el segundo grado: ";
	cin >> grado2;
	radian1 = grado1*3.14159/180;			//Usando los datos se calculan los datos
	radian2 = grado2*3.14159/180;
	cout << "Aquí tiene sus resultados en radianes: " << endl;	//Y se muestran en pantalla
	cout << radian1 << " --- " << radian2;
}
