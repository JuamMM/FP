#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int letra, num;
	char codificada;
	cout << "Inserte una letra que codificar: "; 
	letra = cin.get();
	cout << "Inserte un numero: "; 
	cin >> num;
	
	if (letra+num>=91) {
		codificada = letra + num - 26;
	}
	else {
		codificada = letra + num;
	}
	
	cout << "Tu letra codificada es " << codificada;
}
