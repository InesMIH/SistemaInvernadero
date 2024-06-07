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
<<<<<<< HEAD
			void agregarNuevoCultivo(int codigo, String^ nombre, String^ origen, String^ tiempoCultivo, String^ fechaSembrado, String^ tipo, usuario^ objusuario, ambienteIdoneo^ objAmbienteIdoneo);
=======
			void agregarNuevoCultivo(int codigo, String^ nombre, String^ origen, String^ tiempoCultivo, String^ fechaSembrado, int zonaDeSembrado, String^ tipo, usuario^ objusuario, ambienteIdoneo^ objAmbienteIdoneo);
>>>>>>> 9367295 (f)
			void escribirArchivo(List<cultivo^>^ listaCultivos);
			void eliminarCultivo(int codigo);
			void actualizarCultivo(int codigo, String^ nombre, String^ origen, String^ tipo, String^ tiempocultivo, String^ fechasembrado, String^ nombreUsuario, int codigoAbienteIdoneo);
	};

}