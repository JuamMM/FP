/*soluciones ejercicios sesion 11*/

//inicializamos por defecto los euros y centimos a 0

class Dinero{
private
	int euros = 0;
	int centimos = 0;
public:
	void SetEuros_Y_Centimos(int e, int c) {
		if (e>0 && c>0)
			//Convertirlos y asignarlos a eur y cent
	}
	//Métodos Get
};



// COORDENADAS GEOGRAFICAS //

class PosicionGPS{
private:
	double lat = NAN, lon = NAN, alt = NAN;
	bool EsCorrectaPosicionGrados(double gr_lat, double gr_lon, double m_alt) {
		//Se comprueba si estan en los rangos correctos
	}
	double RadianesAGrados(){
		return 3.1415 / 180.0;
	}
	double ToRad(double grad)
		return grad * RadianesAGrados();
	double ToGrad(double rad)
		return rad / RadianesAGrados();
public:
	PosicionGPS (double grados_latitud,
				 double grados_longitud,
				 double metros_altura) {
		SetCoordenadas (grados_latitud, grados_longitud, metros_altura);	
	}
	void SetCoord (double gr_lat, double gr_lon, double m_alt) {
		if (EsCorrectaPosicionGrados(gr_lat, gr_lon, m_alt)) {
			latitud = ToRadianes(gr_lat);
			longitud = ToRadianes(gr_lon);
			altura = m_alt;
		}
	}
	//1 metodo para la altura
	//4 metodos - 
	

}
