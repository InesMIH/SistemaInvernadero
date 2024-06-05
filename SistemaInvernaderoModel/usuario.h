#pragma once
using namespace System;

namespace SistemaInvernaderoModel {
	public ref class usuario
	{
	private:
		int id;
		String^ Nombre;
		String^ Cargo;
		String^ Contrasena;
	public:
		usuario();
		usuario(int id, String^ Nombre, String^ Cargo, String^ Contrasena);

		int getid();
		void setid(int id);
		String^ getNombre();
		void setNombre(String^ Nombre);
		String^ getCargo();
		void setCargo(String^ Cargo);
		String^ getContrasena();
		void setContrasena(String^ Contrasena);
	};
}