#pragma once
#include "reguladores.h"

using namespace System;

namespace SistemaInvernaderoModel {
	public ref class tareaAutomatizada
	{
	private:
		double Periodo;
		double Potencia;
		reguladores^ objreguladores;
	public:
		tareaAutomatizada();
		tareaAutomatizada(double Periodo, double Potencia, reguladores^ objreguladores);

		double getPeriodo();
		void setPeriodo(double Periodo);
		double getPotencia();
		void setPotencia(double Potencia);
		reguladores^ getobjreguladores();
		void setobjreguladores(reguladores^ objreguladores);
	};
}