#include <iostream>
#include <cmath>
using namespace std;

string EliminaUltimos(string cadena, char a_borrar, int marcador) {
	while (cadena[marcador-1] == a_borrar) {
		cadena.pop_back();
		cout << cadena << endl;
		marcador--;
	}
	return cadena;
}

int main() {
	int tamanio_maximo = 10000;
	char v[tamanio_maximo];
	string cadena = "";
	string cadenafinal;
	char a_borrar;
	const char TERMINADOR = '#';
	int tamanio_v = 0;
	int marcador_v = 0;
	
	v[marcador_v] = cin.get();
	do {	
		cadena = cadena + v[marcador_v];
		marcador_v++;
		v[marcador_v] = cin.get();
	} while (v[marcador_v] != TERMINADOR);
	tamanio_v = marcador_v;
	
	a_borrar = cin.get();
	
	cadenafinal = EliminaUltimos(cadena, a_borrar, tamanio_v);
	cout << endl << cadenafinal;
}
