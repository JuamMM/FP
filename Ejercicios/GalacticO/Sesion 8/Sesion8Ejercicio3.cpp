#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int tamanio_vector;
	int desnivel;
	int desnivel_max = 0;
	int desnivel_acumulado = 0;
	
	cout << "Indique la cantidad de alturas que planea insertar: ";
	cin >> tamanio_vector;
	
	int vector_alturas[tamanio_vector];
	
	for (int i=0; i<tamanio_vector; i++) {
		cin >> vector_alturas[i];
	}
	
	if (tamanio_vector >= 2) {
		
		for (int j=0; j<tamanio_vector-1; j++) {
			desnivel = vector_alturas[j+1] - vector_alturas[j];
			if ( abs(desnivel) > desnivel_max) {
				desnivel_max = abs(desnivel);
			}
			if (desnivel > 0) {
				desnivel_acumulado = desnivel_acumulado + desnivel;
			}
		}
		
		cout << "El maximo desnivel entre dos alturas consecutivas es " << desnivel_max << endl;
		cout << "El desnivel acumulado positivo es " << desnivel_acumulado << endl;
		
	} else {
		cout << "No hay datos suficientes.";
	}
	
}
