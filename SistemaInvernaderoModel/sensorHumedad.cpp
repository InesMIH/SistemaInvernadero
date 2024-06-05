#include "sensorHumedad.h"

using namespace SistemaInvernaderoModel;

SensorHumedad::SensorHumedad() : sensor() {

}

SensorHumedad::SensorHumedad(double voltajeMinimo, double voltajeMaximo, double porcHumedad) {
	this->voltajeMinimo = voltajeMinimo;
	this->voltajeMaximo = voltajeMaximo;
	this->porcHumedad = porcHumedad;
}

double SensorHumedad::getvoltajeMinimo() {
	return this->voltajeMinimo;
}
void SensorHumedad::setvoltajeMinimo(double voltajeMinimo) {
	this->voltajeMinimo = voltajeMinimo;
}

double SensorHumedad::getvoltajeMaximo() {
	return this->voltajeMaximo;
}
void SensorHumedad::setvoltajeMaximo(double voltajeMaximo) {
	this->voltajeMaximo = voltajeMaximo;
}

double SensorHumedad::getporcHumedad() {
	return this->porcHumedad;
}
void SensorHumedad::setporcHumedad(double porcHumedad) {
	this->porcHumedad = porcHumedad;
}