#pragma once
#include "sensor.h"

using namespace System;

namespace SistemaInvernaderoModel {
	public ref class SensorTemperatura : sensor

	{
	private:
		double resolucionC;
	public:
		SensorTemperatura();
		SensorTemperatura(double resolucionC);

		double getresolucionC();
		void setresolucionC(double resolucionC);
	};
}