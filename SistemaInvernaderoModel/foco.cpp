#include "foco.h"

using namespace SistemaInvernaderoModel;

foco::foco() {

}

foco::foco(int iluminacion, String^ tipo, int codigo, int enOperacion, double potencia) {
	this->iluminacion = iluminacion;
}

int foco::getIluminacion() {
	return this->iluminacion;
}

void foco::setIluminacion(int iluminacion) {
	this->iluminacion = iluminacion;
}