#pragma once
#include "reguladores.h"

using namespace System;
namespace SistemaInvernaderoModel {
	public ref class roceador :reguladores

	{
	private:
		int porcPWM;
<<<<<<< HEAD
		int cuadal;
	public:
		roceador();
		roceador(int porcPWM, int caudal, String^ tipo, int codigo, int enOperacion, double potencia);

		int getporcPWM();
		void setporcPWM(int porcPWM);
		int getCaudal();
		void setCaudal(int caudal);
=======
	public:
		roceador();
		roceador(int porcPWM, int codigo, String^ funcionamiento, double potencia);

		int getporcPWM();
		void setporcPWM(int porcPWM);
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
	};
}