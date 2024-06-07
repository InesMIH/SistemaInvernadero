#include "ambienteIdoneo.h"

using namespace SistemaInvernaderoModel;

ambienteIdoneo::ambienteIdoneo() {

}

ambienteIdoneo::ambienteIdoneo(int codigo, String^ humedad, String^ luminosidad, String^ temperatura, String^ informacion) : ambiente(codigo, humedad, luminosidad, temperatura) {
	this->informacion = informacion;
}

String^ ambienteIdoneo::getinformacion() {
	return this->informacion;
}
void ambienteIdoneo::setinformacion(String^ informacion) {
	this->informacion = informacion;
}