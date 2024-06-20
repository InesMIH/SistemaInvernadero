#pragma once
using namespace System;

namespace SistemaInvernaderoModel {
	public ref class reguladores
	{
	private:



		String^ tipo;

		int codigo;
		int enOperacion;
		double potencia;
	public:
		reguladores();

		reguladores(String^ tipo, int codigo, int enOperacion, double potencia);
		
		String^ getTipo();
		void setTipo(String^ tipo);

		reguladores(int codigo, int enOperacion, double potencia);


		reguladores(String^ tipo, int codigo, int enOperacion, double potencia);

		String^ getTipo();
		void setTipo(String^ tipo);

		int getcodigo();
		void setcodigo(int codigo);
		int getenOperacion();
		void setenOperacion(int enOperacion);
		double getpotencia();
		void setpotencia(double potencia);
	};
}