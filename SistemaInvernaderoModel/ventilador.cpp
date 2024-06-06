#include "ventilador.h"

<<<<<<< HEAD

=======
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
using namespace SistemaInvernaderoModel;

ventilador::ventilador() {

}
<<<<<<< HEAD
ventilador::ventilador(double porcPWM, String^ tipo, int codigo, int enOperacion, double potencia) {
	
	this->porcPWM = porcPWM;
}


=======

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
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)

double ventilador::getporcPWM() {
	return this->porcPWM;
}
void ventilador::setporcPWM(double porcPWM) {
	this->porcPWM = porcPWM;
}