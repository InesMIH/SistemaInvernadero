#include "cultivo.h"

using namespace SistemaInvernaderoModel;

cultivo::cultivo() {

}

cultivo::cultivo(int codigo, String^ nombre, String^ origen, String^ tiempoCultivo, String^ fechaSembrado, String^ tipo, usuario^ objusuario, ambienteIdoneo^ objAmbienteIdoneo) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->origen = origen;
	this->tiempoCultivo = tiempoCultivo;
	this->fechaSembrado = fechaSembrado;
	this->tipo = tipo;
	this->objusuario = objusuario;
	this->objAmbienteIdoneo = objAmbienteIdoneo;
}

int cultivo::getcodigo() {
	return this->codigo;
}
void cultivo::setcodigo(int codigo) {
	this->codigo = codigo;
}

String^ cultivo::getnombre() {
	return this->nombre;
}
void cultivo::setnombre(String^ nombre) {
	this->nombre = nombre;
}

String^ cultivo::getorigen() {
	return this->origen;
}
void cultivo::setorigen(String^ origen) {
	this->origen = origen;
}

String^ cultivo::gettiempoCultivo() {
	return this->tiempoCultivo;
}
void cultivo::settiempoCultivo(String^ tiempoCultivo) {
	this->tiempoCultivo = tiempoCultivo;
}

String^ cultivo::getfechaSembrado() {
	return this->fechaSembrado;
}
void cultivo::setfechaSembrado(String^ fechaSembrado) {
	this->fechaSembrado = fechaSembrado;
}

String^ cultivo::gettipo() {
	return this->tipo;
}
void cultivo::settipo(String^ tipo) {
	this->tipo = tipo;
}

usuario^ cultivo::getusuario() {
	return this->objusuario;
}
void cultivo::setusuario(usuario^ objusuario) {
	this->objusuario = objusuario;
}

ambienteIdoneo^ cultivo::getobjAmbienteIdoneo() {
	return this->objAmbienteIdoneo;
}
void cultivo::setobjAmbienteIdoneo(ambienteIdoneo^ objAmbienteIdoneo) {
	this->objAmbienteIdoneo = objAmbienteIdoneo;
}