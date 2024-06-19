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
			//TODO: agregar c�digo de constructor aqu�
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;


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

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
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
			this->groupBox1->Size = System::Drawing::Size(543, 601);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Cultivo";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmNuevoCultivo::groupBox1_Enter);
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
			this->textBox4->Location = System::Drawing::Point(294, 433);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(174, 31);
			this->textBox4->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(294, 369);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(174, 31);
			this->textBox3->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(294, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 31);
			this->textBox2->TabIndex = 8;
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
			this->button1->Location = System::Drawing::Point(453, 704);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 41);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(750, 704);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 41);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::button2_Click);
			// 
			// groupBox2
			// 
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
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(39, 308);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(129, 25);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Informaci�n:";
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
		String^ tiempo = this->textBox3->Text;
		String^ fecha = this->textBox4->Text;
		String^ NombreUsuario = this->textBox6->Text;
		int codigoAmbienteIdoneo = Convert::ToInt32(this->textBox12->Text);
		AmbienteIdoneoController^ objAmbienteIdoneoController = gcnew AmbienteIdoneoController();
		ambienteIdoneo^ objAmbienteIdoneo = objAmbienteIdoneoController->buscarAmbienteIdoneoxCodigo(codigoAmbienteIdoneo);
		UsuarioController^ objusuarioController = gcnew UsuarioController();
		usuario^ objUsuario = objusuarioController->buscarUsuarioxNombre(NombreUsuario);
		CultivoController^ objcultivoController = gcnew CultivoController();
		objcultivoController->agregarNuevoCultivo(codigo, nombre, origen, tiempo, fecha, tipo, objUsuario, objAmbienteIdoneo);
		this->Close();

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
};
}
