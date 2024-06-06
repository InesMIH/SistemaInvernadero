#include "roceador.h"

using namespace SistemaInvernaderoModel;

roceador::roceador() {

}

<<<<<<< HEAD
roceador::roceador(int porcPWM, int caudal, String^ tipo, int codigo, int enOperacion, double potencia){
	this->porcPWM = porcPWM;
	this->cuadal = caudal;
=======
roceador::roceador(int porcPWM, int codigo, String^ funcionamiento, double potencia) {
	this->porcPWM = porcPWM;
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
}

int roceador::getporcPWM() {
	return this->porcPWM;
}
void roceador::setporcPWM(int porcPWM) {
	this->porcPWM = porcPWM;
<<<<<<< HEAD
}

int roceador::getCaudal() {
	return this->cuadal;
}
void roceador::setCaudal(int caudal) {
	this->cuadal = caudal;
=======
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
}