#include "SensorController.h"


using namespace SistemaInvernaderoController;
using namespace System::IO;

SensorController::SensorController() {

}
List<sensor^>^ SensorController::buscarSensorxTipo(String^ tipoSensor) {
	List<sensor^>^ listaSensor = gcnew List<sensor^>();
	array<String^>^ lineas = File::ReadAllLines("Sensor.txt");
	String^ separadores = ";";
	for each (String ^ lineaSensor in lineas) {
		array<String^>^ datos = lineaSensor->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ tipo = datos[1];
		String^ enFuncionamiento = datos[2];
		double intervaloDeMuestreo = Convert::ToDouble(datos[3]);
		double medicion = Convert::ToDouble(datos[4]);
		String^ unidad = datos[5];
		if (tipo->CompareTo(tipoSensor) == 0) {
			sensor^ objSensor = gcnew sensor(codigo, tipo, enFuncionamiento, intervaloDeMuestreo, medicion, unidad);
			listaSensor->Add(objSensor);
		}
	}
	return listaSensor;
}
List < sensor^>^ SensorController::buscarSensorAll() {
	List<sensor^>^ listaSensor = gcnew List<sensor^>();
	array<String^>^ lineas = File::ReadAllLines("Sensor.txt");
	String^ separadores = ";";
	for each (String ^ lineaSensor in lineas) {
		array<String^>^ datos = lineaSensor->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ tipo = datos[1];
		String^ enFuncionamiento = datos[2];
		double intervaloDeMuestreo = Convert::ToDouble(datos[3]);
		double medicion = Convert::ToDouble(datos[4]);
		String^ unidad = datos[5];
		sensor^ objSensor = gcnew sensor(codigo, tipo, enFuncionamiento, intervaloDeMuestreo, medicion, unidad);
		listaSensor->Add(objSensor);
		
	}
	return listaSensor;
}
void SensorController::agregarNuevoSensor(int codigo, String^ tipo, String^ enFuncionamiento, double intervaloDeMuestreo, double medicion, String^ unidad) {
	List < sensor^>^ listaSensor = buscarSensorAll();
	sensor^ objSensorNuevo = gcnew sensor(codigo, tipo, enFuncionamiento, intervaloDeMuestreo, medicion, unidad);
	listaSensor->Add(objSensorNuevo);
	escribirArchivo(listaSensor);
}
void SensorController::escribirArchivo(List<sensor^>^ listaSensor) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaSensor->Count);
	for (int i = 0; i < listaSensor->Count; i++) {
		sensor^ objSensor = listaSensor[i];
		lineasArchivo[i] = Convert::ToString(objSensor->getcodigo()) + ";" + objSensor->gettipo() + ";" + objSensor->getenFuncionamiento() + ";" + Convert::ToString(objSensor->getintervaloDeMuestreo()) + ";" + Convert::ToString(objSensor->getmedicion()) + ";" + objSensor->getunidad();
	}
	File::WriteAllLines("Sensor.txt", lineasArchivo);


}