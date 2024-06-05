#include "tareaAutomatizada.h"

using namespace SistemaInvernaderoModel;

tareaAutomatizada::tareaAutomatizada() {

}

tareaAutomatizada::tareaAutomatizada(double Periodo, double Potencia, reguladores^ objreguladores) {
	this->Periodo = Periodo;
	this->Potencia = Potencia;
	this->objreguladores = objreguladores;
}

double tareaAutomatizada::getPeriodo() {
	return this->Periodo;
}
void tareaAutomatizada::setPeriodo(double Periodon) {
	this->Periodo = Periodo;
}

double tareaAutomatizada::getPotencia() {
	return this->Potencia;
}
void tareaAutomatizada::setPotencia(double Potencia) {
	this->Potencia = Potencia;
}

reguladores^ tareaAutomatizada::getobjreguladores() {
	return this->objreguladores;
}
void tareaAutomatizada::setobjreguladores(reguladores^ objreguladores) {
	this->objreguladores = objreguladores;
}