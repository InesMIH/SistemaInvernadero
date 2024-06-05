#include "roceador.h"

using namespace SistemaInvernaderoModel;

roceador::roceador() {

}

roceador::roceador(int porcPWM, int codigo, String^ funcionamiento, double potencia) {
	this->porcPWM = porcPWM;
}

int roceador::getporcPWM() {
	return this->porcPWM;
}
void roceador::setporcPWM(int porcPWM) {
	this->porcPWM = porcPWM;
}