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
			sensor^ buscarSensorxCodigo(int codigo);
			void agregarNuevoSensor(int codigo, String^ tipo, int enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad);
			void escribirArchivo(List<sensor^>^ listaSensor);
			void eliminarSensor(int codigo);
			void actualizarSensor(int codigo, String^ tipo, int enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad);
	};
}