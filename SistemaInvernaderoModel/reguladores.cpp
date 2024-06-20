#include "reguladores.h"

using namespace SistemaInvernaderoModel;

reguladores::reguladores() {

}

reguladores::reguladores(String^ tipo, int codigo, int enOperacion, double potencia) {
	this->tipo = tipo;
	this->codigo = codigo;
	this->enOperacion = enOperacion;
	this->potencia = potencia;
}

String^ reguladores::getTipo() {
	return this->tipo;
}
void reguladores::setTipo(String^ tipo) {
	this->tipo = tipo;
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