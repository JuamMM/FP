#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int MAXIMO_CARACTERES = 100;
	char v[MAXIMO_CARACTERES];
	char sustituye[MAXIMO_CARACTERES];
	char a_borrar;
	char caracter;
	const char TERMINADOR = '#';
	int i, tamanio_v, tamanio_sustituidor;
	
	cin >> caracter;
	tamanio_v = 0;
	while (caracter != TERMINADOR) {	
		v[tamanio_v] = caracter;
		cin >> caracter;
		tamanio_v++;
	}
	
	cin >> caracter;
	tamanio_sustituidor = 0;
	while (caracter != TERMINADOR) {
		sustituye[tamanio_sustituidor] = caracter;
		cin >> caracter;
		tamanio_sustituidor++;
	}
	
	cin >> caracter;
	a_borrar = caracter;
	
	for (int posicion_actual = 0; posicion_actual <= tamanio_v; posicion_actual++) {
		if (v[posicion_actual] == a_borrar) {
			for (int j = tamanio_v + tamanio_sustituidor; j > posicion_actual + tamanio_sustituidor; j--) {
				v[j] = v[j-tamanio_sustituidor];
			}
			int recorre = 0;
			for (int k = posicion_actual; k <= posicion_actual + tamanio_sustituidor; k++) {
				v[k] = sustituye[recorre];
				recorre++;
			}
			tamanio_v = tamanio_v + tamanio_sustituidor;
		}
	}
	
	for (int i = 0; i < tamanio_v; i++)
      cout << v[i] ;
}
