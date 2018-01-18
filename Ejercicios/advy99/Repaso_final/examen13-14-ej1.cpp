#include <iostream>

using namespace std;

class Matriz{
private:
	
	static const int MAX_FILAS = 100;
	static const int MAX_COLUMNAS = 100;

	int matriz[MAX_FILAS][MAX_COLUMNAS];
	int util_filas;
	int util_columnas;


public:
	Matriz(int filas_utiles, int columnas_utiles){
		util_filas = filas_utiles;
		util_columnas = columnas_utiles;
		for(int i = 0; i < util_filas; i++){
			for(int j = 0; j < util_columnas; j++){
				matriz[i][j] = 0;
			}
		}
	}

	void EstablecerValor(int fila, int columna, int valor){
		matriz[fila][columna] = valor;
	}

	int FilasUtiles(){
		return util_filas;
	}

	int ColumnasUtiles(){
		return util_columnas;
	}

	int Elemento(int fila, int columna){
		return matriz[fila][columna];
	}

	Matriz CorregirMatriz(){
		int copia_i, copia_j;
		int suma = 0;
		int num_positivos = 0;
		Matriz copia_matriz(util_filas, util_columnas);

		for(int i = 0; i < util_filas; i++){
			for(int j = 0; j < util_columnas; j++){
				copia_matriz.EstablecerValor(i,j, matriz[i][j]);
			}
		}

		for(int i = 1; i < util_filas - 1;i++){
			for(int j = 1; j < util_columnas - 1; j++){
				if(Elemento(i,j) < 0){
					copia_i = i - 1;
					copia_j = j - 1;

					for(int k = copia_i; k < copia_i + 3; k++){
						for(int l = copia_j; l < copia_j + 3; l++){
							if(Elemento(k,l) > 0){
								num_positivos++;
								suma = suma + Elemento(k,l);
							}
						}
					}

					copia_matriz.EstablecerValor(i, j, suma/num_positivos);
					suma = 0;
					num_positivos = 0;

				}
			}
		}

		return copia_matriz;
	}
};

int main(){
	Matriz nueva_matriz(5,5);
	Matriz matriz_corregida(5,5);
	int valor;

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> valor;
			nueva_matriz.EstablecerValor(i,j, valor);
		}
	}

	cout << "\n\n\n";

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cout << nueva_matriz.Elemento(i,j) << "\t" ;
		}
		cout << "\n";
	}

	matriz_corregida = nueva_matriz.CorregirMatriz();
	cout << "\n\n";


	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cout << matriz_corregida.Elemento(i,j) << "\t" ;
		}
		cout << "\n";
	}
}