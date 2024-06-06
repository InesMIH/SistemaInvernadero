#pragma once
#include "reguladores.h"

using namespace System;

namespace SistemaInvernaderoModel{
	public ref class registroReguladores
	{
	private:
		int codigo;
		int horaDeUso;
		String^ FechaDeUso;
		double Potencia;
		reguladores^ objreguladores;

	public:
		registroReguladores();
		registroReguladores(int codigo, int horaDeUso, String^ FechaDeUso, double Potencia, reguladores^ objreguladores);

		int getcodigo();
		void setcodigo(int codigo);
		int gethoraDeUso();
		void sethoraDeUso(int codigo);
		String^ getFechaDeUso();
		void setFechaDeUso(String^ FechaDeUso);
		double getPotencia();
		void setPotencia(double codigo);
		reguladores^ getreguladores();
		void setreguladores(reguladores^ objreguladores);
	};
}

