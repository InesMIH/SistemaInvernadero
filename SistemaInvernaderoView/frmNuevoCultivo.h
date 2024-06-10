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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;

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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(67, 66);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(638, 707);
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
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->comboBox2->Location = System::Drawing::Point(294, 297);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(174, 33);
			this->comboBox2->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Comestible", L"No Comestible" });
			this->comboBox1->Location = System::Drawing::Point(294, 381);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(174, 33);
			this->comboBox1->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(294, 592);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(174, 31);
			this->textBox6->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(294, 520);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(174, 31);
			this->textBox4->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(294, 456);
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
			this->label8->Location = System::Drawing::Point(68, 598);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(166, 25);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Codigo Usuario:";
			this->label8->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(68, 526);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"FechaSembrado:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(68, 456);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"TiempoCultivo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(68, 381);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Tipo:";
			this->label5->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(68, 305);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ZonaDeSembrado:";
			this->label4->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::label4_Click);
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
			this->button1->Location = System::Drawing::Point(176, 797);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 41);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(537, 797);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 41);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoCultivo::button2_Click);
			// 
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
			// 
			// frmNuevoCultivo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 887);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoCultivo";
			this->Text = L"frmNuevoCultivo";
			this->Load += gcnew System::EventHandler(this, &frmNuevoCultivo::frmNuevoCultivo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox1->Text);
		String^ nombre = this->textBox2->Text;
		String^ origen = this->textBox5->Text;
		int	zona = Convert::ToInt32(this->comboBox2->Text);
		String^ tipo = this->comboBox1->Text;
		String^ tiempo = this->textBox3->Text;
		String^ fecha = this->textBox4->Text;
		int codigoUsuario = Convert::ToInt32(this->textBox6->Text);
		int codigoAmbienteIdoneo = Convert::ToInt32(this->textBox7->Text);
		AmbienteIdoneoController^ objAmbienteIdoneoController = gcnew AmbienteIdoneoController();
		ambienteIdoneo^ objAmbienteIdoneo = objAmbienteIdoneoController->buscarAmbienteIdoneoxCodigo(codigoAmbienteIdoneo);
		UsuarioController^ objusuarioController = gcnew UsuarioController();
		usuario^ objUsuario = objusuarioController->buscarUsuarioxCodigo(codigoUsuario);
		CultivoController^ objcultivoController = gcnew CultivoController();
		objcultivoController->agregarNuevoCultivo(codigo, nombre, origen, tiempo, fecha, zona, tipo, objUsuario, objAmbienteIdoneo);

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
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
