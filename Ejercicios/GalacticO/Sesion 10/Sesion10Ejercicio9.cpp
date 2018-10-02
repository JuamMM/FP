#include <iostream>
#include <cmath>
using namespace std;

int PotenciaEntera(int base, int exponente) {
   int potencia = 1;
   
   for (int i=0; i<exponente; i++) {
		potencia = potencia * base;
   }
   
   return potencia;
}

double Redondea(double a_redondear, double decimas) {
	double redondeo;
	redondeo = a_redondear * PotenciaEntera(10, decimas);																	//El número decimal se multiplica, pasando los decimales 
	redondeo = round(redondeo);																					//a la parte entera. Se redondean los decimales restantes,
	redondeo = redondeo / PotenciaEntera(10, decimas);																			
	return redondeo;														
}

string EliminaUltimos(string cadena, char a_borrar, int marcador) {
	while (cadena[marcador] == a_borrar) {
		cadena.pop_back();
		marcador--;
	}
	return cadena;
}

int main() {
	double numero, decimas, resultado;
	string resultado_en_string = "";
	cout << "Este programa le permite redondear un numero decimal a la decima que usted elija." << endl;	
	cout << "Escriba un numero decimal: ";																	
	cin >> numero;
	cout << "Escriba a cuantas decimas desea aproximar: ";
	cin >> decimas;
	resultado = Redondea(numero, decimas);
	resultado_en_string = to_string(resultado);
	tamanio_string = resultado_en_string.length();
	stringfinal = EliminaUltimos(resultado_en_string, 0, tamanio_string);
	
	cout << endl << stringfinal;
}
