#pragma once
#include "reguladores.h"

using namespace System;
namespace SistemaInvernaderoModel {
	public ref class roceador :reguladores

	{
	private:
		int porcPWM;
	public:
		roceador();
		roceador(int porcPWM, int codigo, String^ funcionamiento, double potencia);

		int getporcPWM();
		void setporcPWM(int porcPWM);
	};
}