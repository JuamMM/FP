#include <iostream>  
using namespace std; 

int PotenciaEntera(int base, int exponente) {
   int resultado = 1;
   
   for (int i=0; i<exponente; i++) {
		resultado = resultado * base;
   }
   
   return resultado;
}

int main() {
	int base, exponente, potencia;
	
	cout << "Introduzca la base: "; cin >> base;
	cout << "Introduzca el exponente: "; cin >> exponente;
	
	potencia = PotenciaEntera(base, exponente);
	cout << "\nResultado: " << potencia;
}
