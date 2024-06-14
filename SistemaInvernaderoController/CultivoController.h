#pragma once

namespace SistemaInvernaderoController {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace SistemaInvernaderoModel;

	public ref class CultivoController {
		public:
			CultivoController();
			List<cultivo^>^ buscarCultivoxTipo(String^ tipoCultivo);
			List<cultivo^>^ buscarCultivoALL();
			cultivo^ buscarCultivoxCodigo(int codigoBuscado);
			void agregarNuevoCultivo(int codigo, String^ nombre, String^ origen, String^ tiempoCultivo, String^ fechaSembrado, String^ tipo, usuario^ objusuario, ambienteIdoneo^ objAmbienteIdoneo);
			void escribirArchivo(List<cultivo^>^ listaCultivos);
			void eliminarCultivo(int codigo);
			void actualizarCultivo(int codigo, String^ nombre, String^ origen, String^ tipo, String^ tiempocultivo, String^ fechasembrado, String^ nombreUsuario, int codigoAbienteIdoneo);
	};

}