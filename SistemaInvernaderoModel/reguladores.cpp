#include "reguladores.h"

using namespace SistemaInvernaderoModel;

reguladores::reguladores() {

}

<<<<<<< HEAD
<<<<<<< HEAD
reguladores::reguladores(String^ tipo,int codigo, int enOperacion, double potencia) {
	this->tipo = tipo;
=======
reguladores::reguladores(int codigo, int enOperacion, double potencia) {
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
=======
reguladores::reguladores(String^ tipo, int codigo, int enOperacion, double potencia) {
	this->tipo = tipo;
>>>>>>> 7c42f2d (queso)
	this->codigo = codigo;
	this->enOperacion = enOperacion;
	this->potencia = potencia;
}

<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 7c42f2d (queso)
String^ reguladores::getTipo() {
	return this->tipo;
}
void reguladores::setTipo(String^ tipo) {
	this->tipo = tipo;
}
<<<<<<< HEAD
=======
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
=======
>>>>>>> 7c42f2d (queso)
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