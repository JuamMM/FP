#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int numero, izq, der;
	int x = 10;
	bool desgarrable = false;
	
	cout << "Introduzca un numero: ";
	cin >> numero;
	
	izq = numero;
	der = numero;
	
	while (izq>0 && !desgarrable) {
		izq=izq/10;
		der=numero%x;
		
		if ( numero == (pow(izq+der,2)) ) {
			desgarrable=true;
			cout << "Es desgarrable.";
		}
		
		x=x*10;
	}
	
	if (!desgarrable) {
		cout << "No es desgarrable.";
	}
}
