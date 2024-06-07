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
<<<<<<< HEAD
		ambienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);
=======
		ambienteIdoneo(int codigo, String^ humedad, String^ luminosidad, String^ temperatura, String^ informacion);
>>>>>>> 9367295 (f)

		String^ getinformacion();
		void setinformacion(String^ informacion);
	};
}
