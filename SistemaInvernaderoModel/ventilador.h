#pragma once
#include "reguladores.h"

using namespace System;

namespace SistemaInvernaderoModel {
	public ref class ventilador :reguladores

	{
	private:
<<<<<<< HEAD
		double porcPWM;
	public:
		ventilador();
		ventilador(double porcPWM, String^ tipo, int codigo, int enOperacion, double potencia);

	
=======
		int zona;
		double porcPWM;
	public:
		ventilador();
		ventilador(int zona, double porcPWM, int codigo, String^ funcionamiento, double potencia);

		int getzona();
		void setzona(int zona);
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
		double getporcPWM();
		void setporcPWM(double porcPWM);
	};
}