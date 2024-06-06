#pragma once
#include "sensor.h"

using namespace System;

namespace SistemaInvernaderoModel {
	public ref class SensorHumedad :sensor

	{
	private:
		double voltajeMinimo;
		double voltajeMaximo;
		double porcHumedad;
	public:
		SensorHumedad();
		SensorHumedad(double voltajeMinimo, double voltajeMaximo, double porcHumedad);

		double getvoltajeMinimo();
		void setvoltajeMinimo(double voltajeMinimo);
		double getvoltajeMaximo();
		void setvoltajeMaximo(double voltajeMaximo);
		double getporcHumedad();
		void setporcHumedad(double porcHumedad);
	};
}