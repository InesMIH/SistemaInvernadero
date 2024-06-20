#include "sensor.h"

using namespace SistemaInvernaderoModel;

sensor::sensor() {

}

sensor::sensor(int codigo, String^ tipo, int enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad) {
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

int sensor::getenFuncionamiento() {
	return this->enFuncionamiento;
}
void sensor::setenFuncionamiento(int enFuncionamiento) {
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