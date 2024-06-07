#pragma once

namespace SistemaInvernaderoController {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace SistemaInvernaderoModel;
	public ref class AmbienteIdoneoController {
	public:
		AmbienteIdoneoController();
		List<ambienteIdoneo^>^ buscarAmbienteIdoneoALL();
<<<<<<< HEAD
		void agregarNuevoAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);
		void escribirArchivo(List<ambienteIdoneo^>^ listaAmbienteIdoneo);
		void eliminarAmbienteIdoneo(int codigo);
		ambienteIdoneo^ buscarAmbienteIdoneoxCodigo(int codigoBuscado);
		void actualizarAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);
		int codigoExisteAmbienteIdoneo(int codigobuscado);
		int existeAmbiente(double humedad, double luminosidad, double temperatura);
	};
=======
		void agregarNuevoAmbienteIdoneo(int codigo, String^ humedad, String^ luminosidad, String^ temperatura, String^ informacion);
		void escribirArchivo(List<ambienteIdoneo^>^ listaAmbienteIdoneo);
		void eliminarAmbienteIdoneo(int codigo);
		ambienteIdoneo^ AmbienteIdoneoController::buscarAmbienteIdoneoxCodigo(int codigoBuscado);
	};

>>>>>>> 9367295 (f)
}