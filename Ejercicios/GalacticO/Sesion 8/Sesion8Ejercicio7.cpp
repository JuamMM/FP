#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int MAXIMO_CARACTERES = 100;
	char v[MAXIMO_CARACTERES];
	char sustituye[MAXIMO_CARACTERES];
	char a_borrar;
	char v_final[MAXIMO_CARACTERES];
	char caracter;
	const char TERMINADOR = '#';
	int i, tamanio_v, tamanio_sustituidor, avance_vector_final;
	
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
	
	avance_vector_final = 0;
	for (int i = 0; i < tamanio_v; i++) {
		if (v[i] == a_borrar) {
			for (int k = 0; k < tamanio_sustituidor; k++) {
				v_final[avance_vector_final] = sustituye[k];
				avance_vector_final++;
			}
		} else {
			v_final[avance_vector_final] = v[i];
			avance_vector_final++;
		}
	}
	
	for (int i = 0; i < avance_vector_final; i++)
      cout << v_final[i];
}
