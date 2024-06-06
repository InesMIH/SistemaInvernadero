#pragma once
using namespace System;

namespace SistemaInvernaderoModel {
	public ref class reguladores
	{
	private:
<<<<<<< HEAD
		String^ tipo;
=======
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
		int codigo;
		int enOperacion;
		double potencia;
	public:
		reguladores();
<<<<<<< HEAD
		reguladores(String^ tipo, int codigo, int enOperacion, double potencia);
		
		String^ getTipo();
		void setTipo(String^ tipo);
=======
		reguladores(int codigo, int enOperacion, double potencia);

>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
		int getcodigo();
		void setcodigo(int codigo);
		int getenOperacion();
		void setenOperacion(int enOperacion);
		double getpotencia();
		void setpotencia(double potencia);
	};
}