#include <iostream>
#include <cmath>
using namespace std;

class TablaTemperaturas{
private:
	static const int NUMEROFILAS = 10;
	static const int NUMEROCOLUMNAS = 24;
	double matriz_privada[NUMEROFILAS][NUMEROCOLUMNAS];
public:
	double Valor(int ciudad, int hora){
		return matriz_privada[ciudad-1][hora-1];
	}
	void Modifica(int ciudad, int hora, double nuevo){
		if (ciudad >= 1 && ciudad <= NUMEROFILAS && hora >= 1 && hora <= NUMEROCOLUMNAS) {
			matriz_privada[ciudad-1][hora-1] = nuevo;
		}
	}
	int Minimo(int ciudad){
		int i;
		int min_temp = matriz_privada[ciudad-1][0];
		for (int i = 0; i < NUMEROCOLUMNAS; i++) {
			if (matriz_privada[ciudad-1][i] < min_temp) {
				min_temp = matriz_privada[ciudad-1][i];
			}
		}
		return min_temp;
	}
	int HoraMinimo(int ciudad){
		int i;
		int columna_min_temp = 0;
		for (int i = 0; i < NUMEROCOLUMNAS; i++) {
			if (matriz_privada[ciudad-1][i] < matriz_privada[ciudad-1][columna_min_temp]) {
				columna_min_temp = i;
			}
		}
		return columna_min_temp;
	}
	
	struct MaxMinimos(){
		double vector_minimos[NUMEROFILAS];
		double vector_hora_minimos[NUMEROFILAS];
		
		for (int i = 0; i < NUMEROFILAS; i++) {
			vector_minimos[i] = Minimo(i);
			vector_hora_minimos[i] = HoraMinimo(i);
		}
		
		double maximo_minimo = vector_minimos[0];
		int fila_maximo_minimo = 0;
		int columna_maximo_minimo = 0;
		for (int j = 0; j < NUMEROFILAS; j++) {
			if (vector_minimos[j] > maximo_minimo) {
				maximo_minimo = vector_minimos[j];
				fila_maximo_minimo = j;
				columna_maximo_minimo = vector_hora_minimos[j];
			}
		}
		
	}
};

int main(){
	
}
