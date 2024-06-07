#pragma once
using namespace System;

namespace SistemaInvernaderoModel{
	public ref class ambiente

	{
	private:
		int codigo;
<<<<<<< HEAD
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
=======
		String^ humedad;
		String^ luminosidad;
		String^ temperatura;
	public:
		ambiente();
		ambiente(int codigo, String^ humedad, String^ luminosidad, String^ temperatura);

		int getcodigo();
		void setcodigo(int codigo);
		String^ gethumedad();
		void sethumedad(String^ humedad);
		String^ getluminosidad();
		void setluminosidad(String^ luminosidad);
		String^ gettemperatura();
		void settemperatura(String^ temperatura);
>>>>>>> 9367295 (f)
	};
}
