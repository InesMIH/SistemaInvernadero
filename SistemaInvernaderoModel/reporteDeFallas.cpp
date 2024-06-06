#include "reporteDeFallas.h"

using namespace SistemaInvernaderoModel;

reporteDeFallas::reporteDeFallas() {

}

reporteDeFallas::reporteDeFallas(int codigo, String^ fecha, usuario^ objusuario, List<detalleFalla^>^ listaDetalle) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->objusuario = objusuario;
	this->listaDetalle = listaDetalle;
}

int reporteDeFallas::getcodigo() {
	return this->codigo;
}
void reporteDeFallas::setcodigo(int codigo) {
	this->codigo = codigo;
}

String^ reporteDeFallas::getfecha() {
	return this->fecha;
}
void reporteDeFallas::setfecha(String^ fecha) {
	this->fecha = fecha;
}

usuario^ reporteDeFallas::getusuario() {
	return this->objusuario;
}
void reporteDeFallas::setusuario(usuario^ objusuario) {
	this->objusuario = objusuario;
}

List<detalleFalla^>^ reporteDeFallas::getlistaDetalle() {
	return this->listaDetalle;
}
void reporteDeFallas::setlistaDetalle(List<detalleFalla^>^ listaDetalle) {
	this->listaDetalle = listaDetalle;
}
