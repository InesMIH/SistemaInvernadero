#pragma once
#include "frmPrincipal.h"

namespace SistemaInvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaInvernaderoModel;
	using namespace SistemaInvernaderoController;
	/// <summary>
	/// Resumen de login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 203);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			this->label1->Click += gcnew System::EventHandler(this, &login::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 293);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Contraseña:";
			this->label2->Click += gcnew System::EventHandler(this, &login::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(228, 203);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &login::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(240, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Iniciar Sesión";
			this->label3->Click += gcnew System::EventHandler(this, &login::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(228, 391);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 46);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(228, 293);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(192, 31);
			this->textBox2->TabIndex = 3;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 529);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Nombre = this->textBox1->Text;
	String^ Contrasena = this->textBox2->Text;
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	int ContrasenaIncorrecta = 1;
	if (objUsuarioController->BuscarExistenciaDeUsuarioxNombreYContrasena(Nombre, Contrasena))
	{
		
			ContrasenaIncorrecta = 0;
			frmPrincipal^ ventanaMenu = gcnew frmPrincipal();
			ventanaMenu->Show();
			this->Hide();
	}

	if (ContrasenaIncorrecta) {
			MessageBox::Show("Usuario y/o contraseña incorrecto(s).");

	}
	

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void login_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
