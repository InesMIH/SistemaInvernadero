#include "ambienteIdoneo.h"

using namespace SistemaInvernaderoModel;

ambienteIdoneo::ambienteIdoneo() {

}

ambienteIdoneo::ambienteIdoneo(String^ humedad, String^ luminosidad, String^ temperatura, String^ informacion) : ambiente(humedad, luminosidad, temperatura) {
	this->informacion = informacion;
}

String^ ambienteIdoneo::getinformacion() {
	return this->informacion;
}
void ambienteIdoneo::setinformacion(String^ informacion) {
	this->informacion = informacion;
}