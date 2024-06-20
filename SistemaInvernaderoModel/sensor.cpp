#include "sensor.h"

using namespace SistemaInvernaderoModel;

sensor::sensor() {

}

<<<<<<< HEAD
<<<<<<< HEAD
sensor::sensor(int codigo, String^ tipo, int enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad) {
=======
sensor::sensor(int codigo, String^ tipo, String^ enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad) {
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
=======
sensor::sensor(int codigo, String^ tipo, int enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad) {
>>>>>>> 7c42f2d (queso)
	this->codigo = codigo;
	this->tipo = tipo;
	this->enFuncionamiento = enFuncionamiento;
	this->intervaloDeMuestreo = intervaloDeMuestreo;
	this->medicion = medicion;
	this->unidad = unidad;
}

int sensor::getcodigo() {
	return this->codigo;
}
void sensor::setcodigo(int codigo) {
	this->codigo = codigo;
}
String^ sensor::gettipo() {
	return this->tipo;
}
void sensor::settipo(String^ tipo) {
	this->tipo = tipo;
}

<<<<<<< HEAD
<<<<<<< HEAD
int sensor::getenFuncionamiento() {
	return this->enFuncionamiento;
}
void sensor::setenFuncionamiento(int enFuncionamiento) {
=======
String^ sensor::getenFuncionamiento() {
	return this->enFuncionamiento;
}
void sensor::setenFuncionamiento(String^ enFuncionamiento) {
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
=======
int sensor::getenFuncionamiento() {
	return this->enFuncionamiento;
}
void sensor::setenFuncionamiento(int enFuncionamiento) {
>>>>>>> 7c42f2d (queso)
	this->enFuncionamiento = enFuncionamiento;
}

double sensor::getintervaloDeMuestreo() {
	return this->intervaloDeMuestreo;
}
void sensor::setintervaloDeMuestreo(double intervaloDeMuestreo) {
	this->intervaloDeMuestreo = intervaloDeMuestreo;
}

double sensor::getmedicion() {
	return this->medicion;
}
void sensor::setmedicion(double medicion) {
	this->medicion = medicion;
}

String^ sensor::getunidad() {
	return this->unidad;
}
void sensor::setunidad(String^ unidad) {
	this->unidad = unidad;
}