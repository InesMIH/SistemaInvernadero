#include "ambienteIdoneo.h"

using namespace SistemaInvernaderoModel;

ambienteIdoneo::ambienteIdoneo() {

}

<<<<<<< HEAD
<<<<<<< HEAD
ambienteIdoneo::ambienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion) : ambiente(codigo, humedad, luminosidad, temperatura) {
=======
ambienteIdoneo::ambienteIdoneo(int codigo, String^ humedad, String^ luminosidad, String^ temperatura, String^ informacion) : ambiente(codigo, humedad, luminosidad, temperatura) {
>>>>>>> 9367295 (f)
=======
ambienteIdoneo::ambienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion) : ambiente(codigo, humedad, luminosidad, temperatura) {
>>>>>>> e7e2505 (troste)
	this->informacion = informacion;
}

String^ ambienteIdoneo::getinformacion() {
	return this->informacion;
}
void ambienteIdoneo::setinformacion(String^ informacion) {
	this->informacion = informacion;
}