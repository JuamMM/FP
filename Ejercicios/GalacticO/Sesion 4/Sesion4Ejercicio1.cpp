#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int a, b;
	int c;
	cout << "Inserte un primer numero: ";											
	cin >> a;
	cout << "Inserte un segundo numero: ";
	cin >> b;
	c = a*b;
	
	if (c<=0) {
		cout << "No tienen el mismo signo.";
	}
	else {
		cout << "Tienen el mismo signo.";
	}
}
