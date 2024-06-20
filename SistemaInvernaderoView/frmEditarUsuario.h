#pragma once

namespace SistemaInvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
<<<<<<< HEAD
<<<<<<< HEAD
	using namespace SistemaInvernaderoController;
	using namespace SistemaInvernaderoModel;
=======
>>>>>>> bc4f0a0 (d)
=======
	using namespace SistemaInvernaderoController;
	using namespace SistemaInvernaderoModel;
>>>>>>> e7e2505 (troste)

	/// <summary>
	/// Resumen de frmEditarUsuario
	/// </summary>
	public ref class frmEditarUsuario : public System::Windows::Forms::Form
	{
	public:
		frmEditarUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> e7e2505 (troste)
		frmEditarUsuario(usuario^ objUsuario)
		{
			InitializeComponent();
			this->objUsuario = objUsuario;
			//
			//TODO: agregar código de constructor aquí
			//
		}

<<<<<<< HEAD
=======
>>>>>>> bc4f0a0 (d)
=======
>>>>>>> e7e2505 (troste)
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
<<<<<<< HEAD
<<<<<<< HEAD

=======
	private: System::Windows::Forms::Button^ button1;
>>>>>>> bc4f0a0 (d)
=======

>>>>>>> 5f43a7f (listo (?))
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
<<<<<<< HEAD
<<<<<<< HEAD
	private: System::Windows::Forms::TextBox^ textBox3;

=======
	private: System::Windows::Forms::TextBox^ textBox7;
>>>>>>> bc4f0a0 (d)
=======
	private: System::Windows::Forms::TextBox^ textBox3;

>>>>>>> e7e2505 (troste)
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
<<<<<<< HEAD
<<<<<<< HEAD
	private: usuario^ objUsuario;
	private: System::Windows::Forms::Button^ button1;
<<<<<<< HEAD
=======
>>>>>>> bc4f0a0 (d)
=======
	private: usuario^ objUsuario;
>>>>>>> e7e2505 (troste)
=======
>>>>>>> 5f43a7f (listo (?))

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
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 5f43a7f (listo (?))
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
=======
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
<<<<<<< HEAD
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
>>>>>>> bc4f0a0 (d)
=======
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
>>>>>>> e7e2505 (troste)
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
<<<<<<< HEAD
<<<<<<< HEAD
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(380, 472);
=======
=======
			this->button1 = (gcnew System::Windows::Forms::Button());
>>>>>>> 5f43a7f (listo (?))
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
<<<<<<< HEAD
			this->button2->Location = System::Drawing::Point(407, 472);
>>>>>>> bc4f0a0 (d)
=======
			this->button2->Location = System::Drawing::Point(380, 472);
>>>>>>> e7e2505 (troste)
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 59);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
<<<<<<< HEAD
<<<<<<< HEAD
			this->groupBox1->Controls->Add(this->textBox3);
=======
			this->groupBox1->Controls->Add(this->textBox7);
>>>>>>> bc4f0a0 (d)
=======
			this->groupBox1->Controls->Add(this->textBox3);
>>>>>>> e7e2505 (troste)
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(24, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(592, 404);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
<<<<<<< HEAD
<<<<<<< HEAD
			this->groupBox1->Text = L"Datos del Usuario";
=======
			this->groupBox1->Text = L"Datos del Cultivo";
>>>>>>> bc4f0a0 (d)
=======
			this->groupBox1->Text = L"Datos del Usuario";
>>>>>>> 5f43a7f (listo (?))
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmEditarUsuario::groupBox1_Enter);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"cultivador", L"mantenimiento" });
			this->comboBox1->Location = System::Drawing::Point(294, 235);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(174, 33);
			this->comboBox1->TabIndex = 11;
			// 
<<<<<<< HEAD
<<<<<<< HEAD
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(294, 309);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(174, 31);
			this->textBox3->TabIndex = 10;
=======
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(294, 309);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(174, 31);
			this->textBox7->TabIndex = 10;
>>>>>>> bc4f0a0 (d)
=======
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(294, 309);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(174, 31);
			this->textBox3->TabIndex = 10;
>>>>>>> e7e2505 (troste)
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(294, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 31);
			this->textBox2->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(68, 315);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 25);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Contraseña";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(294, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 31);
			this->textBox1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(68, 235);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Cargo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo:";
			// 
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 5f43a7f (listo (?))
			// button1
			// 
			this->button1->Location = System::Drawing::Point(141, 472);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 59);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarUsuario::button1_Click);
			// 
<<<<<<< HEAD
=======
>>>>>>> bc4f0a0 (d)
=======
>>>>>>> 5f43a7f (listo (?))
			// frmEditarUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 565);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarUsuario";
			this->Text = L"frmEditarUsuario";
			this->Load += gcnew System::EventHandler(this, &frmEditarUsuario::frmEditarUsuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
<<<<<<< HEAD
<<<<<<< HEAD
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->textBox1->Text);
	String^ Nombre = this->textBox2->Text;
	String^ Cargo = this->comboBox1->Text;
	String^ contrasena = this->textBox3->Text;
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	objUsuarioController->actualizarUsuario(id, Nombre, Cargo, contrasena);
	MessageBox::Show("El Usuario ha sido actualizado con éxito");
	this->Close();
}
private: System::Void frmEditarUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Text = Convert::ToString(this->objUsuario->getid());
	this->textBox2->Text = this->objUsuario->getNombre();
	this->comboBox1->Text = this->objUsuario->getCargo();
	this->textBox3->Text = this->objUsuario->getContrasena();
	
=======
	}
=======
	this->Close();
}
>>>>>>> e7e2505 (troste)
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->textBox1->Text);
	String^ Nombre = this->textBox2->Text;
	String^ Cargo = this->comboBox1->Text;
	String^ contrasena = this->textBox3->Text;
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	objUsuarioController->actualizarUsuario(id, Nombre, Cargo, contrasena);
	MessageBox::Show("El Usuario ha sido actualizado con éxito");
	this->Close();
}
private: System::Void frmEditarUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
<<<<<<< HEAD
>>>>>>> bc4f0a0 (d)
=======
	this->textBox1->Text = Convert::ToString(this->objUsuario->getid());
	this->textBox2->Text = this->objUsuario->getNombre();
	this->comboBox1->Text = this->objUsuario->getCargo();
	this->textBox3->Text = this->objUsuario->getContrasena();
	
>>>>>>> e7e2505 (troste)
}
};
}
