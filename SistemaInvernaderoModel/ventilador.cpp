#include "ventilador.h"

using namespace SistemaInvernaderoModel;

ventilador::ventilador() {

}

ventilador::ventilador(int zona, double porcPWM, int codigo, String^ funcionamiento, double potencia) {
	this->zona = zona;
	this->porcPWM = porcPWM;
}

int ventilador::getzona() {
	return this->zona;
}
void ventilador::setzona(int zona) {
	this->zona = zona;
}

double ventilador::getporcPWM() {
	return this->porcPWM;
}
void ventilador::setporcPWM(double porcPWM) {
	this->porcPWM = porcPWM;
}