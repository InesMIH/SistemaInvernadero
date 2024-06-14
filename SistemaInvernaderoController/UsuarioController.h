#pragma once

namespace SistemaInvernaderoController {
	using namespace System::Collections::Generic;
	using namespace SistemaInvernaderoModel;
	using namespace System;

	public ref class UsuarioController {
	public:
		UsuarioController();
		List<usuario^>^ buscarUsuarioAll();
		void escribirArchivo(List<usuario^>^ listaUsuario);
		void agregarNuevoUsuario(int id, String^ Nombre, String^ Cargo, String^ Contrasena);
		usuario^ buscarUsuarioxCodigo(int codigoBuscar);
		usuario^ buscarUsuarioxNombre(String^ NombreBuscar);
		int BuscarExistenciaDeUsuarioxNombreYContrasena(String^ NombreBuscar, String^ ContrasenaBuscar);
		List<usuario^>^ buscarUsuarioxCargo(String^ cargo);
		void eliminarUsuario(int idEliminar);

	};
}