#pragma once
#include "ambiente.h"

using namespace System;

<<<<<<< HEAD
namespace SistemaInvernaderoModel {
=======
namespace SistemaInvernaderoModel{
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
	public ref class ambienteActual : ambiente

	{
	private:
		String^ hora;
		String^ fecha;
	public:
		ambienteActual();
		ambienteActual(int codigo, double humedad, double luminosidad, double temperatura, String^ hora, String^ fecha);

		String^ gethora();
		void sethora(String^ hora);
		String^ getfecha();
		void setfecha(String^ fecha);
	};
}