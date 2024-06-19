#include "AmbienteIdoneoController.h"

<<<<<<< HEAD
<<<<<<< HEAD
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
		double humedad = Convert::ToDouble(datos[1]);
		double luminosidad = Convert::ToDouble(datos[2]);
		double temperatura = Convert::ToDouble(datos[3]);
		String^ informacion = datos[4];
		ambienteIdoneo^ objAmbienteIdoneo = gcnew ambienteIdoneo(codigo, humedad, luminosidad, temperatura, informacion);
		listaAmbienteIdoneo->Add(objAmbienteIdoneo);
	}
	return listaAmbienteIdoneo;
}

void AmbienteIdoneoController::agregarNuevoAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion) {
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
		double humedad = Convert::ToDouble(datos[1]);
		double luminosidad = Convert::ToDouble(datos[2]);
		double temperatura = Convert::ToDouble(datos[3]);
		String^ informacion = datos[4];
		if (codigo == codigoBuscado) {
			objAmbienteIdoneo = gcnew ambienteIdoneo(codigo, humedad, luminosidad, temperatura, informacion);
			break;
		}
	}
	return objAmbienteIdoneo;
}

void  AmbienteIdoneoController::actualizarAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion) {
	List<ambienteIdoneo^>^ listaAmbienteIdoneo = buscarAmbienteIdoneoALL();
	for (int i = 0; i < listaAmbienteIdoneo->Count; i++) {
		if (listaAmbienteIdoneo[i]->getcodigo() == codigo) {
			listaAmbienteIdoneo[i]->sethumedad(humedad);
			listaAmbienteIdoneo[i]->setluminosidad(luminosidad);
			listaAmbienteIdoneo[i]->settemperatura(temperatura);
			listaAmbienteIdoneo[i]->setinformacion(informacion);
			break;
		}
	}
	escribirArchivo(listaAmbienteIdoneo);
}

int AmbienteIdoneoController::codigoExisteAmbienteIdoneo(int codigobuscado) {
	int existe = 0;
	List<ambienteIdoneo^>^ listaAmbienteIdoneo = buscarAmbienteIdoneoALL();
	array<String^>^ lineas = File::ReadAllLines("AmbienteIdoneo.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaAmbienteIdoneo in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaAmbienteIdoneo->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		if (codigo == codigobuscado) {
			existe = listaAmbienteIdoneo->Count;
			break;
		}
	}
	return existe;
}

int AmbienteIdoneoController::existeAmbiente(double humedadNueva, double luminosidadNueva, double temperaturaNueva) {
	int existe = 0;
	List<ambienteIdoneo^>^ listaAmbienteIdoneo = buscarAmbienteIdoneoALL();
	array<String^>^ lineas = File::ReadAllLines("AmbienteIdoneo.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaAmbienteIdoneo in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaAmbienteIdoneo->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		double humedad = Convert::ToDouble(datos[1]);
		double luminosidad = Convert::ToDouble(datos[2]);
		double temperatura = Convert::ToDouble(datos[3]);
		if ((humedadNueva == humedad) && (luminosidadNueva == luminosidad) && (temperaturaNueva == temperatura)) {
			existe = codigo;
			break;
		}
	}
	return existe;
}
=======
namespace SistemaInvernaderoController {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace SistemaInvernaderoModel;
	ZXZXZ
	public ref class Ambiente Id {
	public:
		CultivoController();
		List<cultivo^>^ buscarCultivoxTipo(String^ tipoCultivo);
		List<cultivo^>^ buscarCultivoALL();
		cultivo^ buscarCultivoxCodigo(int codigoBuscado);
		void agregarNuevoCultivo(int codigo, String^ nombre, String^ origen, String^ tiempoCultivo, String^ fechaSembrado, int zonaDeSembrado, String^ tipo);
		void escribirArchivo(List<cultivo^>^ listaCultivos);
		void eliminarCultivo(int codigo);
	};

}gd
>>>>>>> 5ba584a (a)
=======
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
		double humedad = Convert::ToDouble(datos[1]);
		double luminosidad = Convert::ToDouble(datos[2]);
		double temperatura = Convert::ToDouble(datos[3]);
		String^ informacion = datos[4];
		ambienteIdoneo^ objAmbienteIdoneo = gcnew ambienteIdoneo(codigo, humedad, luminosidad, temperatura, informacion);
		listaAmbienteIdoneo->Add(objAmbienteIdoneo);
	}
	return listaAmbienteIdoneo;
}

void AmbienteIdoneoController::agregarNuevoAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion) {
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
		double humedad = Convert::ToDouble(datos[1]);
		double luminosidad = Convert::ToDouble(datos[2]);
		double temperatura = Convert::ToDouble(datos[3]);
		String^ informacion = datos[4];
		if (codigo == codigoBuscado) {
			objAmbienteIdoneo = gcnew ambienteIdoneo(codigo, humedad, luminosidad, temperatura, informacion);
			break;
		}
	}
	return objAmbienteIdoneo;
}
<<<<<<< HEAD
>>>>>>> 9367295 (f)
=======

void  AmbienteIdoneoController::actualizarAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion) {
	List<ambienteIdoneo^>^ listaAmbienteIdoneo = buscarAmbienteIdoneoALL();
	for (int i = 0; i < listaAmbienteIdoneo->Count; i++) {
		if (listaAmbienteIdoneo[i]->getcodigo() == codigo) {
			listaAmbienteIdoneo[i]->sethumedad(humedad);
			listaAmbienteIdoneo[i]->setluminosidad(luminosidad);
			listaAmbienteIdoneo[i]->settemperatura(temperatura);
			listaAmbienteIdoneo[i]->setinformacion(informacion);
			break;
		}
	}
	escribirArchivo(listaAmbienteIdoneo);
}

>>>>>>> e7e2505 (troste)
