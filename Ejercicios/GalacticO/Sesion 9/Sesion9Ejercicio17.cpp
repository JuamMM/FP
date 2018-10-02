#include <iostream>
#include <cmath>
using namespace std;

int main(){
   const int MAX_FIL = 10, MAX_COL = 10;
   double matriz[MAX_FIL][MAX_COL];
   double minimo_segun_filas[MAX_FIL][3];
   int maximo_de_los_minimos[3];
   int util_filas, util_columnas;
   int i = 0;
   int j = 0;

   cout << "Numero de filas: " ; cin >> util_filas;
   cout << "Numero de columnas: " ; cin >> util_columnas;

	for (i=0; i<util_filas; i++)
    	for (j=0; j<util_columnas; j++)
        	cin >> matriz[i][j];
        	
        	
    for (i=0; i<util_filas; i++) {
    	minimo_segun_filas[i][0] = matriz[i][0];
    	minimo_segun_filas[i][1] = i;
    	minimo_segun_filas[i][2] = j;
		for (j=0; j<util_columnas; j++) {
    		if (minimo_segun_filas[i][0] > matriz[i][j]) {
    			minimo_segun_filas[i][0] = matriz[i][j];
    			minimo_segun_filas[i][1] = i;
    			minimo_segun_filas[i][2] = j;
			}
    	}
	}
	
	maximo_de_los_minimos[0] = minimo_segun_filas[0][0];
	for (int k=0; k<util_filas; k++) {
		if (minimo_segun_filas[k][0] > maximo_de_los_minimos[0]) {
    		maximo_de_los_minimos[0] = minimo_segun_filas[k][0];
    		maximo_de_los_minimos[1] = minimo_segun_filas[k][1];
    		maximo_de_los_minimos[2] = minimo_segun_filas[k][2];
		}
	}
	
	cout << "El maximo de los minimos encontrados en cada fila es " << maximo_de_los_minimos[0] << endl;
	cout << "Se encuentra en la posicion " << maximo_de_los_minimos[1] << ", " << maximo_de_los_minimos[2];
}
