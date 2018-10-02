#include <iostream>
#include <cmath>
using namespace std;

int HorASec(int horas) {
	return (horas * 3600);
}

int MinASec(int horas) {
	return (horas * 60);
}

int main() 
{
	double hor1, min1, sec1, segundos_iniciales;
	double hor2, min2, sec2, segundos_finales;
	double secfinal;
	cout << "Inserte la hora inicial. HORA: "; cin >> hor1;							
	cout << "MINUTOS: "; cin >> min1;
	cout << "SEGUNDOS: "; cin >> sec1;
	cout << "Inserte la hora final. HORA: "; cin >> hor2;
	cout << "MINUTOS: "; cin >> min2; 
	cout << "SEGUNDOS: "; cin >> sec2;
	segundos_iniciales = HorASec(hor1) + MinASec(min1) + sec1;
	segundos_finales = HorASec(hor2) + MinASec(min2) + sec2;
	double secfinal = segundos_finales - segundos_iniciales;		
	
	cout << "Numero de segundos entre ambos instantes: " << secfinal;
}
