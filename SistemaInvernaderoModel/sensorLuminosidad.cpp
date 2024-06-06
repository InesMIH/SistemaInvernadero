#include "sensorLuminosidad.h"

using namespace SistemaInvernaderoModel;

SensorLuminosidad::SensorLuminosidad() {

}

SensorLuminosidad::SensorLuminosidad(double maximoOscuro, double minimoIluminado) {
	this->maximoOscuro = maximoOscuro;
	this->minimoIluminado = minimoIluminado;
}

double SensorLuminosidad::getmaximoOscuro() {
	return this->maximoOscuro;
}
void SensorLuminosidad::setmaximoOscuro(double maximoOscuro) {

	this->maximoOscuro = maximoOscuro;
}

double SensorLuminosidad::getminimoIluminado() {
	return this->minimoIluminado;
}
void SensorLuminosidad::setminimoIluminado(double minimoIluminado) {
	this->minimoIluminado = minimoIluminado;
}