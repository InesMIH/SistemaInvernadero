#pragma once
#include "reguladores.h"

using namespace System;

namespace SistemaInvernaderoModel {
	public ref class ventilador :reguladores

	{
	private:

		double porcPWM;
	public:
		ventilador();
		ventilador(double porcPWM, int codigo, String^ funcionamiento, double potencia);

		double getporcPWM();
		void setporcPWM(double porcPWM);
	};
}