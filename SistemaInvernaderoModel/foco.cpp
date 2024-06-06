#include "foco.h"

using namespace SistemaInvernaderoModel;

foco::foco() {

}

<<<<<<< HEAD
foco::foco(int iluminacion, String^ tipo, int codigo, int enOperacion, double potencia) {
	this->iluminacion = iluminacion;
}

int foco::getIluminacion() {
	return this->iluminacion;
}

void foco::setIluminacion(int iluminacion) {
	this->iluminacion = iluminacion;
=======
foco::foco(int zona, int codigo, int enOperacion, double potencia) {
	this->zona = zona;
}

int foco::getzona() {
	return this->zona;
}

void foco::setzona(int zona) {
	this->zona = zona;
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
}