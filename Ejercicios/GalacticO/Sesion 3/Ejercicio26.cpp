#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int letra, edad, adivine, anio;
	bool b1, b2, b3, b4;
	letra = cin.get();
	cin >> edad >> adivine >> anio;
	
	b1 = (97 <= letra) && (letra <= 122);
	b2 = (edad < 18) || (edad > 65);
	b3 = (adivine > 1) && (adivine < 100);
	b4 = ((anio%4==0) && (anio%100!=0)) || (anio%400==0);
	cout << b1 << "\t" << b2 << "\t" << b3 << "\t" << b4;
}
