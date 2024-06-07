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

