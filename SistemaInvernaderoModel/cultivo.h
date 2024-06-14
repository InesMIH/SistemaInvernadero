#pragma once
#include "usuario.h"
#include "ambienteIdoneo.h"

using namespace System;

namespace SistemaInvernaderoModel{
	public ref class cultivo
	{
	private:
		int codigo;
		String^ nombre;
		String^ origen;
		String^ tiempoCultivo;
		String^ fechaSembrado;
		String^ tipo;
		usuario^ objusuario;
		ambienteIdoneo^ objAmbienteIdoneo;
	public:
		cultivo();
		cultivo(int codigo, String^ nombre, String^ origen, String^ tiempoCultivo, String^ fechaSembrado, String^ tipo, usuario^ objusuario, ambienteIdoneo^ objAmbienteIdoneo);

		int getcodigo();
		void setcodigo(int codigo);

		String^ getnombre();
		void setnombre(String^ nombre);

		String^ getorigen();
		void setorigen(String^ origen);

		String^ gettiempoCultivo();
		void settiempoCultivo(String^ tiempoCultivo);

		String^ getfechaSembrado();
		void setfechaSembrado(String^ fechaSembrado);

		String^ gettipo();
		void settipo(String^ tipo);

		usuario^ getusuario();
		void setusuario(usuario^ Objusuario);

		ambienteIdoneo^ getobjAmbienteIdoneo();
		void setobjAmbienteIdoneo(ambienteIdoneo^ objAmbienteIdoneo);
	};
}
