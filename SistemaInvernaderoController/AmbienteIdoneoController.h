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
<<<<<<< HEAD
		void agregarNuevoAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);
		void escribirArchivo(List<ambienteIdoneo^>^ listaAmbienteIdoneo);
		void eliminarAmbienteIdoneo(int codigo);
		ambienteIdoneo^ buscarAmbienteIdoneoxCodigo(int codigoBuscado);
<<<<<<< HEAD
		void actualizarAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);
		int codigoExisteAmbienteIdoneo(int codigobuscado);
		int existeAmbiente(double humedad, double luminosidad, double temperatura);
	};
=======
		void agregarNuevoAmbienteIdoneo(int codigo, String^ humedad, String^ luminosidad, String^ temperatura, String^ informacion);
=======
		void agregarNuevoAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);
>>>>>>> e7e2505 (troste)
		void escribirArchivo(List<ambienteIdoneo^>^ listaAmbienteIdoneo);
		void eliminarAmbienteIdoneo(int codigo);
		ambienteIdoneo^ AmbienteIdoneoController::buscarAmbienteIdoneoxCodigo(int codigoBuscado);
=======
>>>>>>> b5d3b4b (termo)
		void actualizarAmbienteIdoneo(int codigo, double humedad, double luminosidad, double temperatura, String^ informacion);
		int codigoExisteAmbienteIdoneo(int codigobuscado);
		int existeAmbiente(double humedad, double luminosidad, double temperatura);
	};
<<<<<<< HEAD

>>>>>>> 9367295 (f)
=======
>>>>>>> b5d3b4b (termo)
}