#include "reguladores.h"

using namespace SistemaInvernaderoModel;

reguladores::reguladores() {

}

reguladores::reguladores(int codigo, int enOperacion, double potencia) {
	this->codigo = codigo;
	this->enOperacion = enOperacion;
	this->potencia = potencia;
}

int reguladores::getcodigo() {
	return this->codigo;
}
void reguladores::setcodigo(int codigo) {
	this->codigo = codigo;
}

int reguladores::getenOperacion() {
	return this->enOperacion;
}
void reguladores::setenOperacion(int enOperacion) {
	this->enOperacion = enOperacion;
}

double reguladores::getpotencia() {
	return this->potencia;
}
void reguladores::setpotencia(double potencia) {
	this->potencia = potencia;
}