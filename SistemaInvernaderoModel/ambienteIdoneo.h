#pragma once
#include "ambiente.h"

using namespace System;

namespace SistemaInvernaderoModel{
	public ref class ambienteIdoneo :ambiente

	{
	private:
		String^ informacion;
	public:
		ambienteIdoneo();
		ambienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);

		String^ getinformacion();
		void setinformacion(String^ informacion);
	};
}
