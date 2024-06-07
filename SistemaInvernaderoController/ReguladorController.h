#pragma once

namespace SistemasInvernaderoController {

	using namespace System::Collections::Generic;
	using namespace SistemaInvernaderoModel;
	using namespace System;

	public ref class ReguladorController {
		public:
			ReguladorController();
			List<reguladores^>^ buscarReguladorxTipo(String^ tipoRegulador);


	};
}