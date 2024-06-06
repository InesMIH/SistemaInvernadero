#include "UsuarioController.h"

using namespace SistemaInvernaderoController;
using namespace System::IO;
using namespace System::Collections::Generic;

UsuarioController::UsuarioController() {
}

List<usuario^>^ UsuarioController::buscarUsuarioAll() {
	List<usuario^>^ listaUsuario = gcnew List<usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuario.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaUsuario in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		String^ nonmbre = datos[1];
		String^ Cargo = datos[2];
		String^ Contrasena = datos[3];
		usuario^ objUsuario = gcnew usuario(id, nonmbre, Cargo, Contrasena);
		listaUsuario->Add(objUsuario);
	}
	return listaUsuario;
}

void UsuarioController::escribirArchivo(List<usuario^>^ listaUsuario) {
	/*Primero voy a escribir el archivo OrdenCompra*/
	int cantidadDetalles = 0;
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuario->Count);
	for (int i = 0; i < listaUsuario->Count; i++) {
		usuario^ objUsuario = listaUsuario[i];
		lineasArchivo[i] = Convert::ToString(objUsuario->getid()) + ";" + objUsuario->getNombre() + ";" + objUsuario->getCargo() + ";" + objUsuario->getContrasena();
	}
	File::WriteAllLines("OrdenCompra.txt", lineasArchivo);
}

void UsuarioController::agregarNuevoUsuario(int id, String^ Nombre, String^ Cargo, String^ Contrasena) {
	List<usuario^>^ listaUsuarios = this->buscarUsuarioAll();
	usuario^ objUsuarioNuevo = gcnew usuario(id, Nombre, Cargo, Contrasena);
	listaUsuarios->Add(objUsuarioNuevo);
	escribirArchivo(listaUsuarios);
}

usuario^ UsuarioController::buscarUsuarioxCodigo(int codigoBuscar) {
	usuario^ objUsuario;
	array<String^>^ lineas = File::ReadAllLines("Proveedores.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaUsuario in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		String^ nonmbre = datos[1];
		String^ Cargo = datos[2];
		String^ Contrasena = datos[3];
		if (id == codigoBuscar) {
			usuario^ objUsuario = gcnew usuario(id, nonmbre, Cargo, Contrasena);
			break;
		}
	}
	return objUsuario;
}