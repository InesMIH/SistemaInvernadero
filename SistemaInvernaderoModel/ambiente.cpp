#include "ambiente.h"

using namespace SistemaInvernaderoModel;

ambiente::ambiente() {

}

<<<<<<< HEAD
ambiente::ambiente(int codigo, double humedad, double luminosidad, double temperatura) {
=======
ambiente::ambiente(int codigo, String^ humedad, String^ luminosidad, String^ temperatura) {
>>>>>>> 9367295 (f)
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
<<<<<<< HEAD
double ambiente::gethumedad() {
=======
String^ ambiente::gethumedad() {
>>>>>>> 9367295 (f)
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