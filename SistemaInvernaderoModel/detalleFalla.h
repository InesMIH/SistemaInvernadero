#pragma once
#include "reguladores.h"
#include "sensor.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class detalleFalla

{
private:
	int codigo;
	String^ nombreDispositivo;
	String^ descripcionFalla;

public:
	detalleFalla();
	detalleFalla(int codigo, String^ nombreDispositivo, String^ descripcionFalla);

	int getcodigo();
	void setcodigo(int codigo);
	String^ getnombreDispositivo();
	void setnombreDispositivo(String^ nombreDispositivo);
	String^ getdescripcionFalla();
	void setdescripcionFalla(String^ descripcionFalla);
};