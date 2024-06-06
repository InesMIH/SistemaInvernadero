#pragma once
using namespace System;

namespace SistemaInvernaderoModel{
	public ref class ambiente

	{
	private:
		String^ humedad;
		String^ luminosidad;
		String^ temperatura;
	public:
		ambiente();
		ambiente(String^ humedad, String^ luminosidad, String^ temperatura);

		String^ gethumedad();
		void sethumedad(String^ humedad);
		String^ getluminosidad();
		void setluminosidad(String^ luminosidad);
		String^ gettemperatura();
		void settemperatura(String^ temperatura);
	};
}
