#include "ambiente.h"

using namespace SistemaInvernaderoModel;

ambiente::ambiente() {

}

ambiente::ambiente(int codigo, String^ humedad, String^ luminosidad, String^ temperatura) {
	this->codigo = codigo;
	this->humedad = humedad;
	this->luminosidad = luminosidad;
	this->temperatura = temperatura;
}

int ambiente::getcodigo() {
	return this->codigo;
}
void ambiente::setcodigo(int codigo) {
	this->codigo = codigo;
}
String^ ambiente::gethumedad() {
	return this->humedad;
}
void ambiente::sethumedad(String^ humedad) {
	this->humedad = humedad;
}
String^ ambiente::getluminosidad() {
	return this->luminosidad;
}
void ambiente::setluminosidad(String^ luminosidad) {
	this->luminosidad = luminosidad;
}
String^ ambiente::gettemperatura() {
	return this->temperatura;
}
void ambiente::settemperatura(String^ temperatura) {
	this->temperatura = temperatura;
}