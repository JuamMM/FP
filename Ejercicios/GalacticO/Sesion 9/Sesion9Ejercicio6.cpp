#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const char TERMINADOR = '#';
	const int MAX_NUM_CARACTERES = 2100000;
	char v[MAX_NUM_CARACTERES];
	char v_final[MAX_NUM_CARACTERES];
	char a_borrar;
	bool a_borrar_encontrado;
	char caracter;
	int i, utilizados;
	int pos_escritura = 0;
	int pos_lectura = 0;
 
	// Lectura
   
	caracter = cin.get();
	i = 0;
   
	while (caracter != TERMINADOR){
      v[i] = caracter;
      caracter = cin.get();
      i++;
   }
   
   utilizados = i;
   
   a_borrar = cin.get();
   
   
   // Eliminacion
   
   for (pos_lectura=0; pos_lectura < utilizados; pos_lectura++) {
		a_borrar_encontrado = false;
		
		if (pos_lectura == a_borrar) {
			a_borrar_encontrado = true;
		}
		
		if (!a_borrar_encontrado) {
			v_final[pos_escritura] = v[pos_lectura];
			pos_escritura++;	
		}
	}
}
