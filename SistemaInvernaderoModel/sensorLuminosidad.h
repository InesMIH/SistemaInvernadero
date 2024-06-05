#pragma once
#include "sensor.h"

using namespace System;

namespace SistemaInvernaderoModel {
	public ref class SensorLuminosidad :sensor

	{
	private:
		double maximoOscuro;
		double minimoIluminado;
	public:
		SensorLuminosidad();
		SensorLuminosidad(double maximoOscuro, double minimoIluminado);

		double getmaximoOscuro();
		void setmaximoOscuro(double maximoOscuro);
		double getminimoIluminado();
		void setminimoIluminado(double minimoIluminado);
	};
}