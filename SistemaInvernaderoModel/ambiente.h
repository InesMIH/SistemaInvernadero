#pragma once
using namespace System;

namespace SistemaInvernaderoModel{
	public ref class ambiente

	{
	private:
		int codigo;
		double humedad;
		double luminosidad;
		double temperatura;
	public:
		ambiente();
		ambiente(int codigo, double humedad, double luminosidad, double temperatura);

		int getcodigo();
		void setcodigo(int codigo);
		double gethumedad();
		void sethumedad(double humedad);
		double getluminosidad();
		void setluminosidad(double luminosidad);
		double gettemperatura();
		void settemperatura(double temperatura);
	};
}
