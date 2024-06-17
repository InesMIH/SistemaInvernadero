#include "roceador.h"

using namespace SistemaInvernaderoModel;

roceador::roceador() {

}

roceador::roceador(int porcPWM, int caudal, String^ tipo, int codigo, int enOperacion, double potencia){
	this->porcPWM = porcPWM;
	this->cuadal = caudal;
}

int roceador::getporcPWM() {
	return this->porcPWM;
}
void roceador::setporcPWM(int porcPWM) {
	this->porcPWM = porcPWM;
}

int roceador::getCaudal() {
	return this->cuadal;
}
void roceador::setCaudal(int caudal) {
	this->cuadal = caudal;
}