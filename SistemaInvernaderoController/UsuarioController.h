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
		void UsuarioController::agregarNuevoUsuario(int id, String^ Nombre, String^ Cargo, String^ Contrasena);
		usuario^ buscarUsuarioxCodigo(int codigoBuscar);
	};
}