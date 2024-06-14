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
		String^ nombre = datos[1];
		String^ Cargo = datos[2];
		String^ Contrasena = datos[3];
		usuario^ objUsuario = gcnew usuario(id, nombre, Cargo, Contrasena);
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
	File::WriteAllLines("Usuario.txt", lineasArchivo);
}

void UsuarioController::agregarNuevoUsuario(int id, String^ Nombre, String^ Cargo, String^ Contrasena) {
	List<usuario^>^ listaUsuarios = this->buscarUsuarioAll();
	usuario^ objUsuarioNuevo = gcnew usuario(id, Nombre, Cargo, Contrasena);
	listaUsuarios->Add(objUsuarioNuevo);
	escribirArchivo(listaUsuarios);
}

usuario^ UsuarioController::buscarUsuarioxCodigo(int codigoBuscar) {
	usuario^ objUsuario;
	array<String^>^ lineas = File::ReadAllLines("Usuario.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaUsuario in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ Cargo = datos[2];
		String^ Contrasena = datos[3];
		if (id == codigoBuscar) {
<<<<<<< HEAD
<<<<<<< HEAD
			objUsuario = gcnew usuario(id, nombre, Cargo, Contrasena);
=======
			usuario^ objUsuario = gcnew usuario(id, nombre, Cargo, Contrasena);
>>>>>>> b5a1190 (b)
=======
			objUsuario = gcnew usuario(id, nombre, Cargo, Contrasena);
>>>>>>> 6cb23e4 (c)
			break;
		}
	}
	return objUsuario;
}

usuario^ UsuarioController::buscarUsuarioxNombre(String^ NombreBuscar) {
	usuario^ objUsuario;
	array<String^>^ lineas = File::ReadAllLines("Usuario.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaUsuario in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ Cargo = datos[2];
		String^ Contrasena = datos[3];
		if (nombre->CompareTo(NombreBuscar)==0) {
<<<<<<< HEAD
<<<<<<< HEAD
			objUsuario = gcnew usuario(id, nombre, Cargo, Contrasena);
=======
			usuario^ objUsuario = gcnew usuario(id, nombre, Cargo, Contrasena);
>>>>>>> b5a1190 (b)
=======
			objUsuario = gcnew usuario(id, nombre, Cargo, Contrasena);
>>>>>>> 6cb23e4 (c)
			break;
		}
	}
	return objUsuario;
}

int UsuarioController::BuscarExistenciaDeUsuarioxNombreYContrasena(String^ NombreBuscar, String^ ContrasenaBuscar) {
	int confirmado = 0;
<<<<<<< HEAD
<<<<<<< HEAD
=======
	usuario^ objUsuario;
>>>>>>> b5a1190 (b)
=======
>>>>>>> 6cb23e4 (c)
	array<String^>^ lineas = File::ReadAllLines("Usuario.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaUsuario in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ Cargo = datos[2];
		String^ Contrasena = datos[3];
		if (nombre->CompareTo(NombreBuscar) == 0) {
			if (Contrasena->CompareTo(ContrasenaBuscar) == 0) {
				confirmado = 1;
				break;
			}
		}
	}
	return confirmado;
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> bc4f0a0 (d)
}

List<usuario^>^ UsuarioController::buscarUsuarioxCargo(String^ cargobuscar) {
	List<usuario^>^ listaUsuario = gcnew List<usuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuario.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaUsuario in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ Cargo = datos[2];
		String^ Contrasena = datos[3];
		usuario^ objUsuario = gcnew usuario(id, nombre, Cargo, Contrasena);
<<<<<<< HEAD
=======
		listaUsuario->Add(objUsuario);
>>>>>>> bc4f0a0 (d)
		if (Cargo->CompareTo(cargobuscar) == 0) {
			usuario^ objUsuario = gcnew usuario(id, nombre, Cargo, Contrasena);
			listaUsuario->Add(objUsuario);
		}
	}
	return listaUsuario;
}

void UsuarioController::eliminarUsuario(int idEliminar) {
	List<usuario^>^ listaUsuario = buscarUsuarioAll();
	for (int i = 0; i < listaUsuario->Count; i++) {
		if (listaUsuario[i]->getid() == idEliminar) {
			listaUsuario->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaUsuario);
}
<<<<<<< HEAD

void UsuarioController::actualizarUsuario(int id, String^ Nombre, String^ Cargo, String^ contrasena) {
	List<usuario^>^ listaUsuario = buscarUsuarioAll();
	UsuarioController^ objusuariocontroller = gcnew UsuarioController();
	usuario^ objusuario = objusuariocontroller->buscarUsuarioxCodigo(id);
	for (int i = 0; i < listaUsuario->Count; i++) {
		if (listaUsuario[i]->getid() == id) {
			listaUsuario[i]->setNombre(Nombre);
			listaUsuario[i]->setCargo(Cargo);
			listaUsuario[i]->setContrasena(contrasena);
			break;
		}
	}
	escribirArchivo(listaUsuario);

}
=======
}
>>>>>>> b5a1190 (b)
=======
>>>>>>> bc4f0a0 (d)
