#include "ventilador.h"


using namespace SistemaInvernaderoModel;

ventilador::ventilador() {

}
ventilador::ventilador(double porcPWM, String^ tipo, int codigo, int enOperacion, double potencia) {
	
	this->porcPWM = porcPWM;
}



double ventilador::getporcPWM() {
	return this->porcPWM;
}
void ventilador::setporcPWM(double porcPWM) {
	this->porcPWM = porcPWM;
}