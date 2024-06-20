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
<<<<<<< HEAD
<<<<<<< HEAD
		List<usuario^>^ buscarUsuarioxCargo(String^ cargo);
		void eliminarUsuario(int idEliminar);
		void actualizarUsuario(int id, String^ Nombre, String^ Cargo, String^ contrasena);
<<<<<<< HEAD
=======
=======
		List<usuario^>^ buscarUsuarioxCargo(String^ cargo);
		void eliminarUsuario(int idEliminar);
>>>>>>> bc4f0a0 (d)

>>>>>>> b5a1190 (b)
=======
>>>>>>> e7e2505 (troste)
	};
}