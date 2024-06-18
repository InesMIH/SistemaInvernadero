#include "ReguladorController.h"

using namespace SistemasInvernaderoController;
using namespace System::IO;

ReguladorController::ReguladorController() {

}

List<reguladores^>^ ReguladorController::buscarReguladorxTipo(String^ tipoRegulador) {
	List<reguladores^>^ listaReguladores = gcnew List<reguladores^>();
	array<String^>^ lineas = File::ReadAllLines("Reguladores.txt");
	String^ separadores = ";";
	for each (String ^ lineaRegulador in lineas) {
		array<String^>^ datos = lineaRegulador->Split(separadores->ToCharArray());
		String^ tipo = datos[0];
		int codigo = Convert::ToInt32(datos[1]);
		int enOperacion = Convert::ToInt32(datos[2]);
		double potencia = Convert::ToDouble(datos[3]);
		if (tipo->CompareTo(tipoRegulador) == 0) {
			reguladores^ objRegulador = gcnew reguladores(tipo, codigo, enOperacion, potencia);
			listaReguladores->Add(objRegulador);
		}
	}
	return listaReguladores;

}
List<reguladores^>^ ReguladorController::buscarReguladoresAll() {
	List<reguladores^>^ listaReguladores = gcnew List<reguladores^>();
	array<String^>^ lineas = File::ReadAllLines("Reguladores.txt");
	String^ separadores = ";";
	for each (String ^ lineaRegulador in lineas) {
		array<String^>^ datos = lineaRegulador->Split(separadores->ToCharArray());
		String^ tipo = datos[0];
		int codigo = Convert::ToInt32(datos[1]);
		int enOperacion = Convert::ToInt32(datos[2]);
		double potencia = Convert::ToDouble(datos[3]);
		reguladores^ objRegulador = gcnew reguladores(tipo, codigo, enOperacion, potencia);
		listaReguladores->Add(objRegulador); 
	}
	return listaReguladores;
}

void ReguladorController::escribirArchivo(List<reguladores^>^ listaReguladores) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaReguladores->Count);
	for (int i = 0; i < listaReguladores->Count; i++) {
		reguladores^ objRegulador = listaReguladores[i];
		lineasArchivo[i] = objRegulador->getTipo() + ";" + Convert::ToString(objRegulador->getcodigo()) + ";" + Convert::ToString(objRegulador->getenOperacion()) + ";" + Convert::ToString(objRegulador->getpotencia());
	}
	File::WriteAllLines("Reguladores.txt", lineasArchivo);
}
void ReguladorController::actualizarRegulador(String^ tipo, int codigo, int enOperacion, double potencia) {
	List<reguladores^>^ listaReguladores = buscarReguladoresAll();
	for (int i = 0; i < listaReguladores->Count; i++) {
		if (listaReguladores[i]->getTipo() == tipo) {
			listaReguladores[i]->setcodigo(codigo);
			listaReguladores[i]->setenOperacion(enOperacion);
			listaReguladores[i]->setpotencia(potencia);
			break;
		}
	}
	escribirArchivo(listaReguladores); 

}

