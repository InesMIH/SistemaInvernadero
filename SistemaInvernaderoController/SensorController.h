#pragma once

namespace SistemaInvernaderoController {

	using namespace System::Collections::Generic;
	using namespace SistemaInvernaderoModel;
	using namespace System;

	public ref class SensorController {
	public:
		SensorController();
		List < sensor^>^ buscarSensorxTipo(String^ tipoSensor);
		List < sensor^>^ buscarSensorAll();
		void agregarNuevoSensor(int codigo, String^ tipo, String^ enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad);
		void escribirArchivo(List<sensor^>^ listaSensor);

	};
}