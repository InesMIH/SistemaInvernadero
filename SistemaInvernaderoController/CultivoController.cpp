#include "CultivoController.h"
#include "UsuarioController.h"
#include "AmbienteIdoneoController.h"

using namespace SistemaInvernaderoController;
using namespace System::IO;
using namespace System::Collections::Generic;

CultivoController::CultivoController() {

}

List<cultivo^>^ CultivoController::buscarCultivoxTipo(String^ tipocultivo) {
	List<cultivo^>^ listaCultivo = gcnew List<cultivo^>();
	array<String^>^ lineas = File::ReadAllLines("cultivos.txt");
	String^ separadores = ";";
	for each (String ^ lineaCultivo in lineas) {
		array<String^>^ datos = lineaCultivo->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ origen = datos[2];
		String^ tiempoCultivo = datos[3];
		String^ fecha = datos[4];
		int zona = Convert::ToInt32(datos[5]);
		String^ tipo = datos[6];
		int codigoUsuario = Convert::ToInt32(datos[7]);
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		usuario^ objUsuario = objUsuarioController->buscarUsuarioxCodigo(codigoUsuario);
		int codigoAmbienteIdoneo = Convert::ToInt32(datos[8]);
		AmbienteIdoneoController^ objAmbienteIdoneoController = gcnew AmbienteIdoneoController();
		ambienteIdoneo^ objAmbienteIdoneo = objAmbienteIdoneoController->buscarAmbienteIdoneoxCodigo(codigoAmbienteIdoneo);
		if (tipo->CompareTo(tipocultivo) == 0) {
			cultivo^ objcultivo = gcnew cultivo(codigo, nombre, origen, tiempoCultivo, fecha, zona, tipo, objUsuario, objAmbienteIdoneo);
			listaCultivo->Add(objcultivo);
		}
	}
	return listaCultivo;
}

List<cultivo^>^ CultivoController::buscarCultivoALL() {
	List<cultivo^>^ listaCultivo = gcnew List<cultivo^>();
	array<String^>^ lineas = File::ReadAllLines("cultivos.txt");
	String^ separadores = ";";
	for each (String ^ lineaCultivo in lineas) {
		array<String^>^ datos = lineaCultivo->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ origen = datos[2];
		String^ tiempoCultivo = datos[3];
		String^ fecha = datos[4];
		int zona = Convert::ToInt32(datos[5]);
		String^ tipo = datos[6];
		int codigoUsuario = Convert::ToInt32(datos[7]);
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		usuario^ objUsuario = objUsuarioController->buscarUsuarioxCodigo(codigoUsuario);
		int codigoAmbienteIdoneo = Convert::ToInt32(datos[8]);
		AmbienteIdoneoController^ objAmbienteIdoneoController = gcnew AmbienteIdoneoController();
		ambienteIdoneo^ objAmbienteIdoneo = objAmbienteIdoneoController->buscarAmbienteIdoneoxCodigo(codigoAmbienteIdoneo);
		cultivo^ objcultivo = gcnew cultivo(codigo, nombre, origen, tiempoCultivo, fecha, zona, tipo, objUsuario, objAmbienteIdoneo);
		listaCultivo->Add(objcultivo);
	}
	return listaCultivo;
}

void CultivoController::agregarNuevoCultivo(int codigo, String^ nombre, String^ origen, String^ tiempoCultivo, String^ fechaSembrado, int zonaDeSembrado, String^ tipo, usuario^ objusuario, ambienteIdoneo^ objAmbienteIdoneo) {
	List<cultivo^>^ listaCultivo = buscarCultivoALL();
	cultivo^ objCultivo = gcnew cultivo(codigo, nombre,origen, tiempoCultivo, fechaSembrado, zonaDeSembrado, tipo, objusuario, objAmbienteIdoneo);
	listaCultivo->Add(objCultivo);
	escribirArchivo(listaCultivo);
}

void CultivoController::escribirArchivo(List<cultivo^>^ listaCultivos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCultivos->Count);
	for (int i = 0; i < listaCultivos->Count;i++) {
		cultivo^ objcultivo = listaCultivos[i];
		lineasArchivo[i] = Convert::ToString(objcultivo->getcodigo()) + ";" + objcultivo->getnombre() + ";" + objcultivo->getorigen() + ";" + objcultivo->gettiempoCultivo() + ";" + objcultivo->getfechaSembrado() +
			";" + Convert::ToString(objcultivo->getzonaDeSembrado()) + ";" + objcultivo->gettipo();
	}
	File::WriteAllLines("cultivos.txt", lineasArchivo);
}

void  CultivoController::eliminarCultivo(int codigo) {
	List<cultivo^>^ listaCultivo = buscarCultivoALL();
	for (int i = 0; i < listaCultivo->Count; i++) {
		if (listaCultivo[i]->getcodigo() == codigo) {
			listaCultivo->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaCultivo);
}

cultivo^ CultivoController::buscarCultivoxCodigo(int codigoBuscado) {
	cultivo^ objcultivo;
	array<String^>^ lineas = File::ReadAllLines("cultivos.txt");
	String^ separadores = ";";
	for each (String ^ lineaCultivo in lineas) {
		array<String^>^ datos = lineaCultivo->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ origen = datos[2];
		String^ tiempoCultivo = datos[3];
		String^ fecha = datos[4];
		int zona = Convert::ToInt32(datos[5]);
		String^ tipo = datos[6];
		int codigoUsuario = Convert::ToInt32(datos[7]);
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		usuario^ objUsuario = objUsuarioController->buscarUsuarioxCodigo(codigoUsuario);
		int codigoAmbienteIdoneo = Convert::ToInt32(datos[8]);
		AmbienteIdoneoController^ objAmbienteIdoneoController = gcnew AmbienteIdoneoController();
		ambienteIdoneo^ objAmbienteIdoneo = objAmbienteIdoneoController->buscarAmbienteIdoneoxCodigo(codigoAmbienteIdoneo);
		if (codigo == codigoBuscado) {
			objcultivo = gcnew cultivo(codigo, nombre, origen, tiempoCultivo, fecha, zona, tipo, objUsuario, objAmbienteIdoneo);
			break;
		}
	}
	return objcultivo;
}