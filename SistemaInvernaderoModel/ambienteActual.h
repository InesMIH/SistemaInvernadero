#pragma once
#include "ambiente.h"

using namespace System;

namespace SistemaInvernaderoModel{
	public ref class ambienteActual : ambiente

	{
	private:
		String^ hora;
		String^ fecha;
	public:
		ambienteActual();
<<<<<<< HEAD
		ambienteActual(int codigo, double humedad, double luminosidad, double temperatura, String^ hora, String^ fecha);
=======
		ambienteActual(int codigo, String^ humedad, String^ luminosidad, String^ temperatura, String^ hora, String^ fecha);
>>>>>>> 9367295 (f)

		String^ gethora();
		void sethora(String^ hora);
		String^ getfecha();
		void setfecha(String^ fecha);
	};
}