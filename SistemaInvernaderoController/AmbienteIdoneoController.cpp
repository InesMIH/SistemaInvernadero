#include "AmbienteIdoneoController.h"

using namespace SistemaInvernaderoController;
using namespace System::IO; /*Nos permite trabajar con archivos de texto*/

AmbienteIdoneoController::AmbienteIdoneoController() {

}

List<ambienteIdoneo^>^ AmbienteIdoneoController::buscarAmbienteIdoneoALL() {
	List<ambienteIdoneo^>^ listaAmbienteIdoneo = gcnew List<ambienteIdoneo^>();
	array<String^>^ lineas = File::ReadAllLines("AmbienteIdoneo.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaAmbienteIdoneo in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaAmbienteIdoneo->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ humedad = datos[1];
		String^ luminosidad = datos[2];
		String^ temperatura = datos[3];
		String^ informacion = datos[4];
		ambienteIdoneo^ objAmbienteIdoneo = gcnew ambienteIdoneo(codigo, humedad, luminosidad, temperatura, informacion);
		listaAmbienteIdoneo->Add(objAmbienteIdoneo);
	}
	return listaAmbienteIdoneo;
}

void AmbienteIdoneoController::agregarNuevoAmbienteIdoneo(int codigo, String^ humedad, String^ luminosidad, String^ temperatura, String^ informacion) {
	List<ambienteIdoneo^>^ listaAmbienteIdoneo = buscarAmbienteIdoneoALL();
	ambienteIdoneo^ objAmbienteIdoneo = gcnew ambienteIdoneo(codigo, humedad, luminosidad, temperatura, informacion);
	listaAmbienteIdoneo->Add(objAmbienteIdoneo);
	escribirArchivo(listaAmbienteIdoneo);
}

void AmbienteIdoneoController::escribirArchivo(List<ambienteIdoneo^>^ listaAmbienteIdoneo) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaAmbienteIdoneo->Count);
	for (int i = 0; i < listaAmbienteIdoneo->Count; i++) {
		ambienteIdoneo^ objAmbienteIdoneo = listaAmbienteIdoneo[i];
		lineasArchivo[i] = Convert::ToString(objAmbienteIdoneo->getcodigo()) + ";" + objAmbienteIdoneo->gethumedad() + ";" + objAmbienteIdoneo->getluminosidad() + ";" + objAmbienteIdoneo->gettemperatura() + ";" + objAmbienteIdoneo->getinformacion();
	}
	File::WriteAllLines("AmbienteIdoneo.txt", lineasArchivo);
}

void AmbienteIdoneoController::eliminarAmbienteIdoneo(int codigo) {
	List<ambienteIdoneo^>^ listaAmbienteIdoneo = buscarAmbienteIdoneoALL();
	for (int i = 0; i < listaAmbienteIdoneo->Count; i++) {
		if (listaAmbienteIdoneo[i]->getcodigo() == codigo) {
			listaAmbienteIdoneo->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaAmbienteIdoneo);
}

ambienteIdoneo^ AmbienteIdoneoController::buscarAmbienteIdoneoxCodigo(int codigoBuscado) {
	ambienteIdoneo^ objAmbienteIdoneo;
	array<String^>^ lineas = File::ReadAllLines("AmbienteIdoneo.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaAmbienteIdoneo in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaAmbienteIdoneo->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ humedad = datos[1];
		String^ luminosidad = datos[2];
		String^ temperatura = datos[3];
		String^ informacion = datos[4];
		if (codigo == codigoBuscado) {
			objAmbienteIdoneo = gcnew ambienteIdoneo(codigo, humedad, luminosidad, temperatura, informacion);
			break;
		}
	}
	return objAmbienteIdoneo;
}
