#include "detalleFalla.h"

using namespace SistemaInvernaderoModel;

detalleFalla::detalleFalla() {

}

detalleFalla::detalleFalla(int codigo, String^ nombreDispositivo, String^ descripcionFalla) {
	this->codigo = codigo;
	this->nombreDispositivo = nombreDispositivo;
	this->descripcionFalla = descripcionFalla;
}

int detalleFalla::getcodigo() {
	return this->codigo;
}
void detalleFalla::setcodigo(int codigo) {
	this->codigo = codigo;
}

String^ detalleFalla::getnombreDispositivo() {
	return this->nombreDispositivo;
}
void detalleFalla::setnombreDispositivo(String^ nombreDispositivo) {
	this->nombreDispositivo = nombreDispositivo;
}

String^ detalleFalla::getdescripcionFalla() {
	return this->descripcionFalla;
}
void detalleFalla::setdescripcionFalla(String^ descripcionFalla) {
	this->descripcionFalla = descripcionFalla;
}