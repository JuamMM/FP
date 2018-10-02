#include <iostream>
#include <cmath>
using namespace std;

int main() {
	/* DECLARACION DE VARIABLES Y ENTRADA DE DATOS */
	int longitud_v = ;
	int longitud_v_final;
	char a_borrar;
	int pos_escritura = 0;
	int pos_lectura = 0;
	bool a_borrar_encontrado;
	int v_final[longitud_v_final];
	
	
	cout << "Inserte la longitud del vector numerico: ";
	cin >> longitud_v;
	int v[longitud_v];
	
	cout << "Valores del vector: ";
	for (int i=0; i<longitud_v;i++) {
		cin >> v[i];
	}
	
	/* ORDENAR EL VECTOR "a_borrar" */
	int intercambio; 
	for (int i=0; i < longitud_a_borrar; i++) {
        for(int j=0; j < longitud_a_borrar - 1; j++) {
            if (a_borrar[j] > a_borrar[j+1]) {
                intercambio = a_borrar[j]; 
                a_borrar[j] = a_borrar[j+1]; 
                a_borrar[j+1] = intercambio;
			}  
		}
	}
	
	/* RECORRER EL VECTOR "v" CON "pos_lectura", 
	E IR PASANDOLO A "v_final" CON "pos_escritura" */
	for (pos_lectura=0; pos_lectura < longitud_v; pos_lectura++) {
		a_borrar_encontrado = false;
		
		for (int k=0; k < longitud_a_borrar; k++) {
			if (pos_lectura == a_borrar) {
				a_borrar_encontrado = true;
			}
		}
		
		if (!a_borrar_encontrado) {
			v_final[pos_escritura] = v[pos_lectura];
			pos_escritura++;	
		}
	}
	
	/* MOSTRAR EL VECTOR "v_final" EN PANTALLA */
	cout << endl << "Vector final: ";
	for(int l=0; l < longitud_v_final; l++) 
        cout<< v_final[l] << "  "; 
}
