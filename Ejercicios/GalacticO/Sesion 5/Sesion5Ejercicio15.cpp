#include <iostream>
using namespace std;

enum TipoCaracter {mayuscula, minuscula, otro};

int main(){
	char convertida, letra;
	const int DISTANCIA_MAY_MIN = 'a'-'A';
	int mayus_a_minus, minus_a_mayus;             
	TipoCaracter tipo_caracter;
	
	cout << "Introduzca una letra  --> ";
	cin >> letra;
	
	if ((letra >= 'A') && (letra <= 'Z'))
		tipo_caracter = TipoCaracter::mayuscula;
	else if ((letra >= 'a') && (letra <= 'z'))
		tipo_caracter = TipoCaracter::minuscula;
	else
		tipo_caracter = TipoCaracter::otro;
	
	if (tipo_caracter == TipoCaracter::mayuscula)
		convertida = letra + DISTANCIA_MAY_MIN;
	else if (tipo_caracter = TipoCaracter::minuscula)
		convertida = letra - DISTANCIA_MAY_MIN;
	else if (tipo_caracter = TipoCaracter::otro)
		convertida = letra;
	
	cout << "\nEl caracter " << letra  
		 << " una vez convertido es: " << convertida;
}
