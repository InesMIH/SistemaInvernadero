#pragma once
using namespace System;

namespace SistemaInvernaderoModel {
	public ref class sensor
	{
	private:
		int codigo;
		String^ tipo;

		int enFuncionamiento;
		double intervaloDeMuestreo;
		double medicion;
		String^ unidad;
	public:
		sensor();

		sensor(int codigo, String^ tipo, int enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad);


		int getcodigo();
		void setcodigo(int codigo);
		String^ gettipo();
		void settipo(String^ tipo);

		int getenFuncionamiento();
		void setenFuncionamiento(int enFuncionamiento);
		double getintervaloDeMuestreo();
		void setintervaloDeMuestreo(double intervaloDeMuestreo);
		double getmedicion();
		void setmedicion(double medicion);
		String^ getunidad();
		void setunidad(String^ unidad);
	};
}