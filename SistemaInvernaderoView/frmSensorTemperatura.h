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
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
=======
	using namespace SistemaInvernaderoModel;
	using namespace SistemaInvernaderoController;
>>>>>>> 7c42f2d (queso)

	/// <summary>
	/// Resumen de frmSensorTemperatura
	/// </summary>
	public ref class frmSensorTemperatura : public System::Windows::Forms::Form
	{
	public:
		frmSensorTemperatura(void)
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
		~frmSensorTemperatura()
		{
			if (components)
			{
				delete components;
			}
		}
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 7c42f2d (queso)
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
<<<<<<< HEAD
=======
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
=======
>>>>>>> 7c42f2d (queso)

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
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 7c42f2d (queso)
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(308, 108);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Detalles de Sensor Temperatura";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Resolución C:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmSensorTemperatura::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(185, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmSensorTemperatura::button2_Click);
			// 
<<<<<<< HEAD
=======
			this->SuspendLayout();
			// 
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
=======
>>>>>>> 7c42f2d (queso)
			// frmSensorTemperatura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 7c42f2d (queso)
			this->ClientSize = System::Drawing::Size(333, 179);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
<<<<<<< HEAD
			this->Name = L"frmSensorTemperatura";
			this->Text = L"Sensor Temperatura";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
=======
			this->ClientSize = System::Drawing::Size(333, 337);
			this->Name = L"frmSensorTemperatura";
			this->Text = L"frmSensorTemperatura";
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
=======
			this->Name = L"frmSensorTemperatura";
			this->Text = L"Sensor Temperatura";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
>>>>>>> 7c42f2d (queso)
			this->ResumeLayout(false);

		}
#pragma endregion
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 7c42f2d (queso)
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double resolucionC = Convert::ToDouble(this->textBox1->Text);
		MessageBox::Show("Los detalles del sensor Temperatura han sido agregados con éxito. ");
		this->Close();
	}
<<<<<<< HEAD
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
=======
	};
>>>>>>> 5fa86e0 (Agregar archivos de proyecto.)
=======
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
>>>>>>> 7c42f2d (queso)
}
