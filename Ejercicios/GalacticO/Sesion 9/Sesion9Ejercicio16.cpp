#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int fila, columna, multa;
	int numero_filas = 5;
	int numero_columnas = 10;
	double valor_inicial;
	int matriz_multas[numero_filas][numero_columnas];
	
	for (fila=1; fila<=numero_filas; fila++) {
		for (columna=1; columna<=numero_columnas; columna++) {
			if (fila==1 && columna==1) valor_inicial = 31;
			else if (fila==2 && columna==1) valor_inicial = 51;
			else if (fila==3 && columna==1) valor_inicial = 61;
			else if (fila==4 && columna==1) valor_inicial = 71;
			else if (fila==5 && columna==1) valor_inicial = 81;
			
			if (columna==1) {
				multa = valor_inicial;
			} else if (columna==4 && fila==2) {
				multa = multa + 20;
			} else if (columna==4 && fila>=3) {
				multa = multa + 30;
			} else {
				multa = multa + 10;
			}
			
			matriz_multas[fila-1][columna-1] = multa;
		}
	}	
	
	for (int i = 0; i < numero_filas; i++)
    {
        for (int j = 0; j < numero_columnas; j++)
        {
            cout<< matriz_multas[i][j] << endl;
        }
    }
}
