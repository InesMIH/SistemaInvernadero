#pragma once
using namespace System;

namespace SistemaInvernaderoModel {
	public ref class reguladores
	{
	private:
		int codigo;
		int enOperacion;
		double potencia;
	public:
		reguladores();
		reguladores(int codigo, int enOperacion, double potencia);

		int getcodigo();
		void setcodigo(int codigo);
		int getenOperacion();
		void setenOperacion(int enOperacion);
		double getpotencia();
		void setpotencia(double potencia);
	};
}