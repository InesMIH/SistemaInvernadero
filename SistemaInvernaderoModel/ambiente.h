#pragma once
using namespace System;

namespace SistemaInvernaderoModel{
	public ref class ambiente

	{
	private:
		int codigo;
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
	};
}
