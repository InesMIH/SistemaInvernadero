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
	using namespace SistemaInvernaderoModel;
	using namespace SistemaInvernaderoController;
=======

>>>>>>> bc4f0a0 (d)
=======
	using namespace SistemaInvernaderoModel;
	using namespace SistemaInvernaderoController;
>>>>>>> 5f43a7f (listo (?))
	/// <summary>
	/// Resumen de frmNuevoUsuario
	/// </summary>
	public ref class frmNuevoUsuario : public System::Windows::Forms::Form
	{
	public:
		frmNuevoUsuario(void)
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
		~frmNuevoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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

>>>>>>> 5f43a7f (listo (?))



	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
<<<<<<< HEAD
<<<<<<< HEAD
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
=======
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
>>>>>>> bc4f0a0 (d)
=======
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
>>>>>>> 5f43a7f (listo (?))
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
<<<<<<< HEAD
<<<<<<< HEAD
			this->button1->Location = System::Drawing::Point(140, 470);
=======
			this->button1->Location = System::Drawing::Point(77, 489);
>>>>>>> bc4f0a0 (d)
=======
			this->button1->Location = System::Drawing::Point(140, 470);
>>>>>>> 5f43a7f (listo (?))
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 59);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
<<<<<<< HEAD
<<<<<<< HEAD
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(371, 470);
=======
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(415, 489);
>>>>>>> bc4f0a0 (d)
=======
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(371, 470);
>>>>>>> 5f43a7f (listo (?))
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 59);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
<<<<<<< HEAD
<<<<<<< HEAD
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button2_Click);
=======
>>>>>>> bc4f0a0 (d)
=======
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::button2_Click);
>>>>>>> 5f43a7f (listo (?))
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
>>>>>>> 5f43a7f (listo (?))
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(32, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(592, 404);
			this->groupBox1->TabIndex = 16;
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
>>>>>>> 5f43a7f (listo (?))
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
			this->label9->Click += gcnew System::EventHandler(this, &frmNuevoUsuario::label9_Click);
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
			// frmNuevoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 577);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoUsuario";
			this->Text = L"Agregar Usuario";
			this->Load += gcnew System::EventHandler(this, &frmNuevoUsuario::frmNuevoUsuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmNuevoUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 5f43a7f (listo (?))
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(this->textBox1->Text);
	String^ Nombre = this->textBox2->Text;
	String^ Cargo = this->comboBox1->Text;
	String^ contrasena = this->textBox3->Text;
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	objUsuarioController->agregarNuevoUsuario(id, Nombre, Cargo, contrasena);
	MessageBox::Show("El Usuario ha sido creado con éxito");
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
<<<<<<< HEAD
=======
>>>>>>> bc4f0a0 (d)
=======
>>>>>>> 5f43a7f (listo (?))
};
}
