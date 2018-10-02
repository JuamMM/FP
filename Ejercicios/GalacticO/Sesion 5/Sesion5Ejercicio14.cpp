#include <iostream>
using namespace std;

int main(){
	int a, b;
	bool mismo_signo;
   
	cout << "Inserte dos numeros enteros.\n";
	cin >> a;
	cin >> b;
   
	mismo_signo = a * b > 0;
   
	if (mismo_signo)
	cout << "Tienen el mismo signo\n";
	else   
		cout << "No tienen el mismo signo\n";
	
	/* 14.a */
	if (a>0 && b>0) {
		cout << "Los dos numeros son positivos.";
	} else if (a<0 && b<0) {
		cout << "Los dos numeros son negativos.";
	} else if (a>0 && b<0) {
		cout << "Primer numero positivo, segundo numero negativo.";
	} else {
		cout << "Primer numero negativo, segundo numero positivo.";
	}
	
	/* 14.b */
	if (a>0) {
		if (b>0) {
			cout << "Los dos numeros son positivos.";
		}
		else {
			cout << "Primer numero positivo, segundo numero negativo.";	
		}
	}
	else {
		if (b>0) {
			cout << "Primer numero negativo, segundo numero positivo.";
		}
		else {
			cout << "Los dos numeros son negativos.";
		}
	}
	
	/* 14.c */
	bool es_positivo = (a>0 && b>0);
	bool es_negativo = (a<0 && b<0);
	bool primeropositivo_segundonegativo = (a>0 && b<0);
	bool primeronegativo_segundopositivo = (a<0 && b>0);
}

