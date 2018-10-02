#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int numero_partidos;
	int numero_escanios;
	int escanio_actual;
	int mayor_dhondt;
	int posicion_mayor;
	
	cout << "Inserte el numero de escanios a distribuir: ";
	cin >> numero_escanios;	
	cout << "Inserte el numero de partidos que participaran: ";
	cin >> numero_partidos;
	
	int votos[numero_partidos];
	for (int i=0; i<numero_partidos;i++) {
		cout << "Inserte cuantos votos tiene el partido " << i+1 << ": ";
		cin >> votos[i];
	}
	
	int escanios[numero_partidos];
	for (int i=0; i<numero_partidos;i++) {
		escanios[i] = 0;
	}
	
	int dhondt[numero_partidos];
	
	
	for (escanio_actual = 1; escanio_actual <= numero_escanios; escanio_actual++) {
		mayor_dhondt = 0;
		
		for (int partido_actual = 0; partido_actual < numero_partidos; partido_actual++) {
			
			dhondt[partido_actual] = votos[partido_actual] / (escanios[partido_actual] + 1);
			
			if (dhondt[partido_actual] > mayor_dhondt) {
				mayor_dhondt = dhondt[partido_actual];
				posicion_mayor = partido_actual;
			}
		}
		escanios[posicion_mayor] = escanios[posicion_mayor] + 1;
	}
	
	for (int j=0; j<numero_partidos;j++) {
		cout << escanios[j] << "   ";
	}
}
