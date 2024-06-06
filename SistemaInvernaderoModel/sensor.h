#pragma once
using namespace System;

namespace SistemaInvernaderoModel {
	public ref class sensor
	{
	private:
		int codigo;
		String^ tipo;
<<<<<<< HEAD
		int enFuncionamiento;
=======
		String^ enFuncionamiento;
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
		double intervaloDeMuestreo;
		double medicion;
		String^ unidad;
	public:
		sensor();
<<<<<<< HEAD
		sensor(int codigo, String^ tipo, int enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad);
=======
		sensor(int codigo, String^ tipo, String^ enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad);
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)

		int getcodigo();
		void setcodigo(int codigo);
		String^ gettipo();
		void settipo(String^ tipo);
<<<<<<< HEAD
		int getenFuncionamiento();
		void setenFuncionamiento(int enFuncionamiento);
=======
		String^ getenFuncionamiento();
		void setenFuncionamiento(String^ enFuncionamiento);
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
		double getintervaloDeMuestreo();
		void setintervaloDeMuestreo(double intervaloDeMuestreo);
		double getmedicion();
		void setmedicion(double medicion);
		String^ getunidad();
		void setunidad(String^ unidad);
	};
}