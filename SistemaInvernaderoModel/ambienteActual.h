#pragma once
#include "ambiente.h"

using namespace System;

namespace SistemaInvernaderoModel {
	public ref class ambienteActual : ambiente

	{
	private:
		String^ hora;
		String^ fecha;
	public:
		ambienteActual();
		ambienteActual(String^ humedad, String^ luminosidad, String^ temperatura, String^ hora, String^ fecha);

		String^ gethora();
		void sethora(String^ hora);
		String^ getfecha();
		void setfecha(String^ fecha);
	};
}