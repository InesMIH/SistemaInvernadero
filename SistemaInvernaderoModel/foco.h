#pragma once
#include "reguladores.h"

using namespace System;

namespace SistemaInvernaderoModel{
	public ref class foco :reguladores
	{
	private:

		int iluminacion;
	public:
		foco();
		foco(int iluminacion, String^ tipo, int codigo, int enOperacion, double potencia);

		int getIluminacion();
		void setIluminacion(int iluminacion);

		int zona;
	public:
		foco();
		foco(int zona, int codigo, int enOperacion, double potencia);

		int getzona();
		void setzona(int zona);

	};
}