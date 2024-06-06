#pragma once

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