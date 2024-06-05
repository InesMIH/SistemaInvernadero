#include "registroReguladores.h"

using namespace SistemaInvernaderoModel;

registroReguladores::registroReguladores() {

}

registroReguladores::registroReguladores(int codigo, int horaDeUso, String^ FechaDeUso, double Potencia, reguladores^ objreguladores) {
	this->codigo = codigo;
	this->horaDeUso = horaDeUso;
	this->FechaDeUso = FechaDeUso;
	this->Potencia = Potencia;
	this->objreguladores = objreguladores;
}

int registroReguladores::getcodigo() {
	return this->codigo;
}
void registroReguladores::setcodigo(int codigo) {
	this->codigo = codigo;
}
int registroReguladores::gethoraDeUso() {
	return this->horaDeUso;
}
void registroReguladores::sethoraDeUso(int horaDeUso) {
	this->horaDeUso = horaDeUso;
}
String^ registroReguladores::getFechaDeUso() {
	return this->FechaDeUso;
}
void registroReguladores::setFechaDeUso(String^ FechaDeUso) {
	this->FechaDeUso = FechaDeUso;
}

double registroReguladores::getPotencia() {
	return this->Potencia;
}
void registroReguladores::setPotencia(double Potencia) {
	this->Potencia = Potencia;
}

reguladores^ registroReguladores::getreguladores() {
	return this->objreguladores;
}
void registroReguladores::setreguladores(reguladores^ objreguladores) {
	this->objreguladores = objreguladores;
}