#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double fila, columna, multa;
	double valor_inicial;
	
	for (fila=1; fila<=5; fila++) {
		for (columna=1; columna<=10; columna++) {
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
			
			cout << multa << endl;
		}
	}	
}
