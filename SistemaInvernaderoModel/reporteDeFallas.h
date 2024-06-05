#pragma once
#include "usuario.h"
#include "detalleFalla.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaInvernaderoModel{
	public ref class reporteDeFallas

	{
	private:
		int codigo;
		String^ fecha;
		usuario^ objusuario;
		List<detalleFalla^>^ listaDetalle;
	public:
		reporteDeFallas();
		reporteDeFallas(int codigo, String^ fecha, usuario^ objusuario, List<detalleFalla^>^ listaDetalle);

		int getcodigo();
		void setcodigo(int codigo);
		String^ getfecha();
		void setfecha(String^ fecha);
		usuario^ getusuario();
		void setusuario(usuario^ objusuario);
		List<detalleFalla^>^ getlistaDetalle();
		void setlistaDetalle(List<detalleFalla^>^ listaDetalle);
	};
}
