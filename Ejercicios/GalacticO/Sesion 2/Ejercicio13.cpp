//EJERCICIO 3 CON CONSTANTES
int main() 
{
	const double pi= 6*asin(0.5);		//Hacemos uso del arcoseno para obtener el valor de pi
	cout << "Pi vale " << pi;	//Se muestra el valor en pantalla
}

//EJERCICIO 4 CON CONSTANTES
int main() 
{
	double grado1;							//Usando double se declaran las variables
	double grado2;
	double radian1;
	double radian2;
	const double grad_a_rad = 3.14159/180;
	cout << "Inserte el primer grado: ";	//Se le pide al usuario que introduzca los datos
	cin >> grado1;
	cout << "Inserte el segundo grado: ";
	cin >> grado2;
	radian1 = grado1*grad_a_rad;			//Usando los datos se calculan los radianes
	radian2 = grado2*grad_a_rad;
	cout << "Aquí tiene sus resultados en radianes: " << endl;	//Y se muestran en pantalla
	cout << radian1 << " --- " << radian2;
}

//EJERCICIO 5 CON CONSTANTES
int main() 
{
	double precio;														//Usando double se declaran las variables
	double km;
	const double inicial = 150
	cout << "Indique cuantos kilometros se encuentra su destino: ";		//Se pide al usuario que introduzca los datos
	cin >> km;															
	precio = inicial+km*0.1;												//Calculamos el precio según los datos
	cout << "El precio de su billete es " << precio << ".";				//Se muestra en pantalla el resultado
}

//EJERCICIO 6 CON CONSTANTES
int main() 
{
	double precio;															//Se declaran las variables necesarias para los cálculos
	double descuento1;
	double descuento2;
	const double calculoporcentaje1 = 4/100;
	const double calculoporcentaje2 = 2/100;
	cout << "Indique el precio de su billete: ";							//Se le pide al usuario que introduzca datos
	cin >> precio;
	descuento1 = precio - (precio * calculoporcentaje1);								//Se calculan los descuentos y se le restan al precio
	descuento2 = precio - (precio * calculoporcentaje2);
	cout << "Con un descuento del 4%, vale " << descuento1 << "." << endl;	//Los resultados son mostrados en pantalla
	cout << "Con un descuento del 2%, vale " << descuento2 << ".";
}
