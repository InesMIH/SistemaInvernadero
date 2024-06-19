#pragma once

namespace SistemaInvernaderoController {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace SistemaInvernaderoModel;
	public ref class AmbienteIdoneoController {
	public:
		AmbienteIdoneoController();
		List<ambienteIdoneo^>^ buscarAmbienteIdoneoALL();
		void agregarNuevoAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);
		void escribirArchivo(List<ambienteIdoneo^>^ listaAmbienteIdoneo);
		void eliminarAmbienteIdoneo(int codigo);
		ambienteIdoneo^ AmbienteIdoneoController::buscarAmbienteIdoneoxCodigo(int codigoBuscado);
		void actualizarAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);
	};

}