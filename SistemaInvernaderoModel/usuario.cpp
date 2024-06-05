#include "usuario.h"

using namespace SistemaInvernaderoModel;

usuario::usuario() {

}

usuario::usuario(int id, String^ Nombre, String^ Cargo, String^ Contrasena) {
	this->id = id;
	this->Nombre = Nombre;
	this->Cargo = Cargo;
	this->Contrasena = Contrasena;
}

int usuario::getid() {
	return this->id;
}
void usuario::setid(int id) {
	this->id = id;
}

String^ usuario::getNombre() {
	return this->Nombre;
}
void usuario::setNombre(String^ Nombre) {
	this->Nombre = Nombre;
}

String^ usuario::getCargo() {
	return this->Cargo;
}
void usuario::setCargo(String^ Cargo) {
	this->Cargo = Cargo;
}

String^ usuario::getContrasena() {
	return this->Contrasena;
}
void usuario::setContrasena(String^ Contrasena) {
	this->Contrasena = Contrasena;
}