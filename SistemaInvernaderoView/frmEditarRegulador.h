#pragma once

namespace SistemaInvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaInvernaderoModel;
	using namespace SistemasInvernaderoController;

	/// <summary>
	/// Resumen de frmEditarRegulador
	/// </summary>
	public ref class frmEditarRegulador : public System::Windows::Forms::Form
	{
	public:
		frmEditarRegulador(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

<<<<<<< HEAD
		frmEditarRegulador(reguladores ^ objRegulador) {
=======
		frmEditarRegulador(reguladores^ objRegulador) {
>>>>>>> 7c42f2d (queso)
			InitializeComponent();
			this->objRegulador = objRegulador;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarRegulador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: reguladores^ objRegulador;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
<<<<<<< HEAD
		System::ComponentModel::Container ^components;
=======
		System::ComponentModel::Container^ components;
>>>>>>> 7c42f2d (queso)

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(22, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(308, 256);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Regulador";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(163, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 22);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Cerrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarRegulador::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ventilador", L"Focos", L"Rociador" });
			this->comboBox2->Location = System::Drawing::Point(145, 49);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(93, 21);
			this->comboBox2->TabIndex = 14;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &frmEditarRegulador::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Tipo:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 22);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarRegulador::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(145, 161);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(145, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 20);
			this->textBox1->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox1->Location = System::Drawing::Point(145, 122);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(93, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Potencia:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"En Funcionamiento:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Codigo:";
			// 
			// frmEditarRegulador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 303);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarRegulador";
			this->Text = L"Editar Regulador";
			this->Load += gcnew System::EventHandler(this, &frmEditarRegulador::frmEditarRegulador_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
<<<<<<< HEAD
private: System::Void frmEditarRegulador_Load(System::Object^ sender, System::EventArgs^ e) {
	this->comboBox2->Text = this->objRegulador->getTipo();
	this->textBox1->Text = Convert::ToString(this->objRegulador->getcodigo());
	this->comboBox1->Text = Convert::ToString(this->objRegulador->getenOperacion());
	this->textBox2->Text = Convert::ToString(this->objRegulador->getpotencia());
=======
	private: System::Void frmEditarRegulador_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBox2->Text = this->objRegulador->getTipo();
		this->textBox1->Text = Convert::ToString(this->objRegulador->getcodigo());
		this->comboBox1->Text = Convert::ToString(this->objRegulador->getenOperacion());
		this->textBox2->Text = Convert::ToString(this->objRegulador->getpotencia());
>>>>>>> 7c42f2d (queso)




<<<<<<< HEAD
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tipo = this->comboBox2->Text;
	int codigo = Convert::ToInt32(this->textBox1->Text);
	int enOperacion = Convert::ToInt32(this->comboBox1->Text);
	double potencia = Convert::ToDouble(this->textBox2->Text);
	ReguladorController^ objReguladorController = gcnew ReguladorController();
	objReguladorController->actualizarRegulador(tipo,codigo,enOperacion,potencia); 
	MessageBox::Show("El regulador ha sido actualizado con éxito");
	this->Close();
}
};
=======
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tipo = this->comboBox2->Text;
		int codigo = Convert::ToInt32(this->textBox1->Text);
		int enOperacion = Convert::ToInt32(this->comboBox1->Text);
		double potencia = Convert::ToDouble(this->textBox2->Text);
		ReguladorController^ objReguladorController = gcnew ReguladorController();
		objReguladorController->actualizarRegulador(tipo, codigo, enOperacion, potencia);
		MessageBox::Show("El regulador ha sido actualizado con éxito");
		this->Close();
	}
	};
>>>>>>> 7c42f2d (queso)
}
