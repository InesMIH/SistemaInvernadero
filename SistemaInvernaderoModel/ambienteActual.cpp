#include "ambienteActual.h"

using namespace SistemaInvernaderoModel;

ambienteActual::ambienteActual() {

}

ambienteActual::ambienteActual(int codigo, double humedad, double luminosidad, double temperatura, String^ hora, String^ fecha) : ambiente(codigo, humedad, luminosidad, temperatura) {
	this->hora = hora;
	this->fecha = fecha;
}

String^ ambienteActual::gethora() {
	return this->hora;
}
void ambienteActual::sethora(String^ hora) {
	this->hora = hora;
}

String^ ambienteActual::getfecha() {
	return this->fecha;
}
void ambienteActual::setfecha(String^ fecha) {
	this->fecha = fecha;
}