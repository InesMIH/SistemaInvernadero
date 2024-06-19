#include "ambienteActual.h"

using namespace SistemaInvernaderoModel;

ambienteActual::ambienteActual() {

}

<<<<<<< HEAD
<<<<<<< HEAD
ambienteActual::ambienteActual(int codigo, double humedad, double luminosidad, double temperatura, String^ hora, String^ fecha) : ambiente(codigo, humedad, luminosidad, temperatura) {
=======
ambienteActual::ambienteActual(int codigo, String^ humedad, String^ luminosidad, String^ temperatura, String^ hora, String^ fecha) : ambiente(codigo, humedad, luminosidad, temperatura) {
>>>>>>> 9367295 (f)
=======
ambienteActual::ambienteActual(int codigo, double humedad, double luminosidad, double temperatura, String^ hora, String^ fecha) : ambiente(codigo, humedad, luminosidad, temperatura) {
>>>>>>> e7e2505 (troste)
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