#pragma once

namespace SistemasInvernaderoController {

	using namespace System::Collections::Generic;
	using namespace SistemaInvernaderoModel;
	using namespace System;

	public ref class ReguladorController {
		public:
			ReguladorController();
			List<reguladores^>^ buscarReguladorxTipo(String^ tipoRegulador);
			List<reguladores^>^ buscarReguladoresAll();
			void escribirArchivo(List<reguladores^>^ listaReguladores);
			void actualizarRegulador(String^ tipo, int codigo, int enOperacion, double potencia);

	};
}