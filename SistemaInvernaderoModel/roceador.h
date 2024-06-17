#pragma once
#include "reguladores.h"

using namespace System;
namespace SistemaInvernaderoModel {
	public ref class roceador :reguladores

	{
	private:
		int porcPWM;
		int cuadal;
	public:
		roceador();
		roceador(int porcPWM, int caudal, String^ tipo, int codigo, int enOperacion, double potencia);

		int getporcPWM();
		void setporcPWM(int porcPWM);
		int getCaudal();
		void setCaudal(int caudal);
	};
}