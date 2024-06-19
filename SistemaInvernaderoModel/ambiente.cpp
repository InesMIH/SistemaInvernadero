#include "ambiente.h"

using namespace SistemaInvernaderoModel;

ambiente::ambiente() {

}

ambiente::ambiente(int codigo, double humedad, double luminosidad, double temperatura) {
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
double ambiente::gethumedad() {
	return this->humedad;
}
void ambiente::sethumedad(double humedad) {
	this->humedad = humedad;
}
double ambiente::getluminosidad() {
	return this->luminosidad;
}
void ambiente::setluminosidad(double luminosidad) {
	this->luminosidad = luminosidad;
}
double ambiente::gettemperatura() {
	return this->temperatura;
}
void ambiente::settemperatura(double temperatura) {
	this->temperatura = temperatura;
}