#include "foco.h"

using namespace SistemaInvernaderoModel;

foco::foco() {

}

foco::foco(int zona, int codigo, int enOperacion, double potencia) {
	this->zona = zona;
}

int foco::getzona() {
	return this->zona;
}

void foco::setzona(int zona) {
	this->zona = zona;
}