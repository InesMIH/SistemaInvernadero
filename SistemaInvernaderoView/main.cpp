#include "login.h" 

using namespace System;
using namespace System::Windows::Forms;
using namespace SistemaInvernaderoView;

void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	login ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmPrincipal*/
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}