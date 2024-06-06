#pragma once
#include "reguladores.h"

using namespace System;

namespace SistemaInvernaderoModel{
	public ref class foco :reguladores
	{
	private:
		int zona;
	public:
		foco();
		foco(int zona, int codigo, int enOperacion, double potencia);

		int getzona();
		void setzona(int zona);
	};
}