#pragma once

namespace SistemaInvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaInvernaderoController;
	using namespace SistemaInvernaderoModel;
	/// <summary>
	/// Resumen de frmNuevoCultivo
	/// </summary>
	public ref class frmNuevoCultivo : public System::Windows::Forms::Form
	{
	public:
		frmNuevoCultivo(void)
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
		~frmNuevoCultivo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;

<<<<<<< HEAD

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

=======
>>>>>>> b5a1190 (b)
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
<<<<<<< HEAD
<<<<<<< HEAD
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
=======
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
>>>>>>> 9367295 (f)
=======
>>>>>>> bc4f0a0 (d)
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(67, 66);
			this->groupBox1->Name = L"groupBox1";
<<<<<<< HEAD
<<<<<<< HEAD
			this->groupBox1->Size = System::Drawing::Size(543, 601);
=======
			this->groupBox1->Size = System::Drawing::Size(638, 707);
>>>>>>> 9367295 (f)
=======
			this->groupBox1->Size = System::Drawing::Size(638, 644);
>>>>>>> bc4f0a0 (d)
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Cultivo";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmNuevoCultivo::groupBox1_Enter);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(294, 434);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(173, 31);
			this->dateTimePicker1->TabIndex = 21;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(294, 224);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(174, 31);
			this->textBox5->TabIndex = 13;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Comestible", L"No Comestible" });
			this->comboBox1->Location = System::Drawing::Point(294, 294);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(174, 33);
			this->comboBox1->TabIndex = 11;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(294, 571);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(174, 31);
			this->textBox7->TabIndex = 10;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &frmNuevoCultivo::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(294, 505);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(174, 31);
			this->textBox6->TabIndex = 10;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmNuevoCultivo::textBox6_TextChanged);
			// 
			// textBox4
			// 
<<<<<<< HEAD
			this->textBox4->Location = System::Drawing::Point(294, 363);
=======
			this->textBox4->Location = System::Drawing::Point(294, 433);
>>>>>>> bc4f0a0 (d)
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(174, 31);
			this->textBox4->TabIndex = 10;
			// 
<<<<<<< HEAD
=======
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(294, 369);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(174, 31);
			this->textBox3->TabIndex = 9;
			// 
>>>>>>> bc4f0a0 (d)
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
			this->label9->Location = System::Drawing::Point(68, 577);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(182, 25);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Codigo Ambiente:";
			this->label9->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::label8_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(294, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 31);
			this->textBox1->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(68, 511);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 25);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Usuario:";
			this->label8->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(68, 439);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"FechaSembrado:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(68, 369);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"TiempoCultivo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(68, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tipo:";
			this->label5->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::label5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(68, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Origen:";
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
			// button1
			// 
<<<<<<< HEAD
<<<<<<< HEAD
			this->button1->Location = System::Drawing::Point(453, 704);
=======
			this->button1->Location = System::Drawing::Point(176, 797);
>>>>>>> 9367295 (f)
=======
			this->button1->Location = System::Drawing::Point(176, 743);
>>>>>>> bc4f0a0 (d)
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 41);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::button1_Click);
			// 
			// button2
			// 
<<<<<<< HEAD
<<<<<<< HEAD
			this->button2->Location = System::Drawing::Point(750, 704);
=======
			this->button2->Location = System::Drawing::Point(537, 797);
>>>>>>> 9367295 (f)
=======
			this->button2->Location = System::Drawing::Point(498, 743);
>>>>>>> bc4f0a0 (d)
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 41);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::button2_Click);
			// 
<<<<<<< HEAD
<<<<<<< HEAD
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Location = System::Drawing::Point(659, 66);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(634, 601);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos del ambiente";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &frmNuevoCultivo::groupBox2_Enter);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(469, 111);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 51);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Guardar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::button3_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(469, 41);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 51);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::button3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(39, 308);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(129, 25);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Información:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(39, 248);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 25);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Temperatura:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(39, 184);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(140, 25);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Luminosidad:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Humedad:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(245, 308);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox11->Size = System::Drawing::Size(179, 240);
			this->textBox11->TabIndex = 10;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(245, 242);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(174, 31);
			this->textBox10->TabIndex = 10;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(245, 181);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(174, 31);
			this->textBox9->TabIndex = 10;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(245, 121);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(174, 31);
			this->textBox8->TabIndex = 10;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(245, 54);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(174, 31);
			this->textBox12->TabIndex = 10;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(27, 54);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(182, 25);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Codigo Ambiente:";
=======
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(68, 664);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(182, 25);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Codigo Ambiente:";
			this->label9->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::label8_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(294, 658);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(174, 31);
			this->textBox7->TabIndex = 10;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &frmNuevoCultivo::textBox7_TextChanged);
>>>>>>> 9367295 (f)
			// 
=======
>>>>>>> bc4f0a0 (d)
			// frmNuevoCultivo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1320, 784);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoCultivo";
			this->Text = L"frmNuevoCultivo";
			this->Load += gcnew System::EventHandler(this, &frmNuevoCultivo::frmNuevoCultivo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox1->Text);
		String^ nombre = this->textBox2->Text;
		String^ origen = this->textBox5->Text;
		String^ tipo = this->comboBox1->Text;
<<<<<<< HEAD
		String^ tiempo = this->textBox4->Text;
		String^ fecha = this->dateTimePicker1->Text;
		String^ NombreUsuario = this->textBox6->Text;
		int codigoAmbienteIdoneo = Convert::ToInt32(this->textBox12->Text);
		AmbienteIdoneoController^ objAmbienteIdoneoController = gcnew AmbienteIdoneoController();
		ambienteIdoneo^ objAmbienteIdoneo = objAmbienteIdoneoController->buscarAmbienteIdoneoxCodigo(codigoAmbienteIdoneo);
		UsuarioController^ objusuarioController = gcnew UsuarioController();
		usuario^ objUsuario = objusuarioController->buscarUsuarioxNombre(NombreUsuario);
		CultivoController^ objcultivoController = gcnew CultivoController();
		objcultivoController->agregarNuevoCultivo(codigo, nombre, origen, tiempo, fecha, tipo, objUsuario, objAmbienteIdoneo);
		this->Close();
=======
		String^ tiempo = this->textBox3->Text;
		String^ fecha = this->textBox4->Text;
		String^ NombreUsuario = this->textBox6->Text;
		int codigoAmbienteIdoneo = Convert::ToInt32(this->textBox7->Text);
		AmbienteIdoneoController^ objAmbienteIdoneoController = gcnew AmbienteIdoneoController();
		ambienteIdoneo^ objAmbienteIdoneo = objAmbienteIdoneoController->buscarAmbienteIdoneoxCodigo(codigoAmbienteIdoneo);
		UsuarioController^ objusuarioController = gcnew UsuarioController();
		usuario^ objUsuario = objusuarioController->buscarUsuarioxNombre(NombreUsuario);
		CultivoController^ objcultivoController = gcnew CultivoController();
<<<<<<< HEAD
<<<<<<< HEAD
		objcultivoController->agregarNuevoCultivo(codigo, nombre, origen, tiempo, fecha, zona, tipo, objusuario, objAmbienteIdoneo);
>>>>>>> 9367295 (f)
=======
		objcultivoController->agregarNuevoCultivo(codigo, nombre, origen, tiempo, fecha, zona, tipo, objUsuario, objAmbienteIdoneo);
>>>>>>> b5a1190 (b)
=======
		objcultivoController->agregarNuevoCultivo(codigo, nombre, origen, tiempo, fecha, tipo, objUsuario, objAmbienteIdoneo);
		this->Close();
>>>>>>> bc4f0a0 (d)

	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmNuevoCultivo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
<<<<<<< HEAD
<<<<<<< HEAD
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigoAmbienteIdoneo = Convert::ToInt32(this->textBox12->Text);
	AmbienteIdoneoController^ objAmbienteIdoneoController = gcnew AmbienteIdoneoController();
	ambienteIdoneo^ objAmbienteIdoneo = objAmbienteIdoneoController->buscarAmbienteIdoneoxCodigo(codigoAmbienteIdoneo);
	this->textBox8->Text = Convert::ToString(objAmbienteIdoneo->gethumedad());
	this->textBox9->Text = Convert::ToString(objAmbienteIdoneo->getluminosidad());
	this->textBox10->Text = Convert::ToString(objAmbienteIdoneo->gettemperatura());
	this->textBox11->Text = objAmbienteIdoneo->getinformacion();
}
	   private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		   int codigoAmbienteIdoneo = Convert::ToInt32(this->textBox12->Text);
		   AmbienteIdoneoController^ objAmbienteIdoneoController = gcnew AmbienteIdoneoController();
		   int codigoEnUso = objAmbienteIdoneoController->codigoExisteAmbienteIdoneo(codigoAmbienteIdoneo);
		   if (codigoEnUso) {
			   MessageBox::Show("El codigo ya está en uso" + "Codigo Recomendado: " + Convert::ToString(codigoEnUso + 1));
		   }
		   else {
			   double humedad = Convert::ToDouble(this->textBox8->Text);
			   double luminosidad = Convert::ToDouble(this->textBox9->Text);
			   double temperatura = Convert::ToDouble(this->textBox10->Text);
			   String^ informacion = this->textBox11->Text;
			   int existeAmbiente = objAmbienteIdoneoController->existeAmbiente(humedad, luminosidad, temperatura);
			   if (existeAmbiente) {
				   MessageBox::Show("Ya existe un ambiente con esos parametros" + "Codigo: " + Convert::ToString(existeAmbiente));
			   }
			   else
			   {
				   objAmbienteIdoneoController->agregarNuevoAmbienteIdoneo(codigoAmbienteIdoneo, humedad, luminosidad, temperatura, informacion);
				   MessageBox::Show("Se guardó correctamente.");
			   }
		   }
		   
	   }
=======
>>>>>>> 9367295 (f)
=======
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
>>>>>>> bc4f0a0 (d)
};
}
