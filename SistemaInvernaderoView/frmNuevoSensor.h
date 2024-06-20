#pragma once

namespace SistemaInvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace SistemaInvernaderoController;

	/// <summary>
	/// Resumen de frmNuevoSensor
	/// </summary>
	public ref class frmNuevoSensor : public System::Windows::Forms::Form
	{
	public:
		frmNuevoSensor(void)
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
		~frmNuevoSensor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox5;


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());

			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());

			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());

			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());

			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());

			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());

			this->textBox5 = (gcnew System::Windows::Forms::TextBox());

			this->textBox5 = (gcnew System::Windows::Forms::TextBox());

			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 

			this->button2->Location = System::Drawing::Point(219, 318);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoSensor::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label6);

			this->button2->Location = System::Drawing::Point(438, 612);
			this->button2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);

			this->button2->Location = System::Drawing::Point(219, 318);

			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoSensor::button1_Click);
			// 
			// groupBox1
			// 

			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label6);

			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);

			this->groupBox1->Controls->Add(this->comboBox2);

			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);

			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(358, 282);

			this->groupBox1->Location = System::Drawing::Point(24, 23);
			this->groupBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->groupBox1->Size = System::Drawing::Size(716, 533);

			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(358, 282);

			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Sensor";
			// 


			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Sensor Humedad", L"Sensor Luminosidad", L"Sensor Temperatura" });
			this->comboBox1->Location = System::Drawing::Point(207, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Tipo:";
			// 

			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(207, 30);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);

			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(207, 30);
			this->textBox4->Name = L"textBox4";

			this->textBox4->Size = System::Drawing::Size(196, 31);

			this->textBox4->Size = System::Drawing::Size(121, 20);

			this->textBox4->TabIndex = 10;
			// 
			// textBox3
			// 

			this->textBox3->Location = System::Drawing::Point(207, 246);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);

			this->textBox3->Location = System::Drawing::Point(414, 442);
			this->textBox3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 31);

			this->textBox3->Location = System::Drawing::Point(207, 246);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);

			this->textBox3->TabIndex = 9;
			// 
			// textBox2
			// 

			this->textBox2->Location = System::Drawing::Point(207, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);

			this->textBox2->Location = System::Drawing::Point(414, 342);
			this->textBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 31);

			this->textBox2->Location = System::Drawing::Point(207, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);

			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 

			this->textBox1->Location = System::Drawing::Point(207, 153);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);

			this->textBox1->Location = System::Drawing::Point(414, 246);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);

			this->textBox1->Location = System::Drawing::Point(207, 153);

			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 253);
			this->label5->Name = L"label5";

			this->label5->Size = System::Drawing::Size(86, 25);

			this->label5->Size = System::Drawing::Size(44, 13);

			this->label5->TabIndex = 4;
			this->label5->Text = L"Unidad:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;

			this->label4->Location = System::Drawing::Point(49, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);

			this->label4->Location = System::Drawing::Point(98, 356);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 25);

			this->label4->Location = System::Drawing::Point(49, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);

			this->label4->TabIndex = 3;
			this->label4->Text = L"Medición:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;

			this->label3->Location = System::Drawing::Point(49, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);

			this->label3->Location = System::Drawing::Point(98, 262);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(226, 25);

			this->label3->Location = System::Drawing::Point(49, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);

			this->label3->TabIndex = 2;
			this->label3->Text = L"Intervalo de Muestreo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;

			this->label2->Location = System::Drawing::Point(49, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);

			this->label2->Location = System::Drawing::Point(98, 156);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(203, 25);

			this->label2->Location = System::Drawing::Point(49, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);

			this->label2->TabIndex = 1;
			this->label2->Text = L"En Funcionamiento:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;

			this->label1->Location = System::Drawing::Point(49, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(207, 109);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 20);
			this->textBox5->TabIndex = 13;
			// 
			// frmNuevoSensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 362);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);

			this->label1->Location = System::Drawing::Point(98, 69);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);

			this->label1->Location = System::Drawing::Point(49, 33);

			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(207, 109);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 20);
			this->textBox5->TabIndex = 13;
			// 
			// frmNuevoSensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 362);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);

			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);

			this->Name = L"frmNuevoSensor";
			this->Text = L"Nuevo Sensor";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigo = Convert::ToInt32(this->textBox4->Text);
		String^ tipo = this->comboBox1->Text;
		int enFuncionamiento = Convert::ToInt32(this->textBox5->Text);
		double intervaloDeMuestreo = Convert::ToDouble(this->textBox1->Text);
		double medicion = Convert::ToDouble(this->textBox2->Text);
		String^ unidad = this->textBox3->Text;
		SensorController^ objSensorController = gcnew SensorController();
		MessageBox::Show("El sensor ha sido agregado ");
		this->Close();

}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
