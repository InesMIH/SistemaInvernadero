#include "ambiente.h"

using namespace SistemaInvernaderoModel;

ambiente::ambiente() {

}

ambiente::ambiente(String^ humedad, String^ luminosidad, String^ temperatura) {
	this->humedad = humedad;
	this->luminosidad = luminosidad;
	this->temperatura = temperatura;
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