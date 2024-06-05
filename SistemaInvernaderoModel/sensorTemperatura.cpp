#include "sensorTemperatura.h"

using namespace SistemaInvernaderoModel;

SensorTemperatura::SensorTemperatura() {

}

SensorTemperatura::SensorTemperatura(double resolucionC) {
	this->resolucionC = resolucionC;
}

double SensorTemperatura::getresolucionC() {
	return this->resolucionC;
}
void SensorTemperatura::setresolucionC(double resolucionC) {

	this->resolucionC = resolucionC;
}