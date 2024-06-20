#pragma once
#include "frmEditarRegulador.h"

namespace SistemaInvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemasInvernaderoController;
	using namespace System::Collections::Generic;
	using namespace SistemaInvernaderoModel;

	/// <summary>
	/// Resumen de frmMantReguladores
	/// </summary>
	public ref class frmMantReguladores : public System::Windows::Forms::Form
	{
	public:
		frmMantReguladores(void)
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
		~frmMantReguladores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;









	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(12, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(492, 349);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de Búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(371, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantReguladores::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ventilador", L"Focos", L"Rociador" });
			this->comboBox1->Location = System::Drawing::Point(154, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(181, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(101, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Tipo:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(208, 289);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantReguladores::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column2,
					this->Column1, this->Column4, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(29, 120);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(443, 113);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantReguladores::dataGridView1_CellContentClick);
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Tipo";
			this->Column2->Name = L"Column2";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"En Funcionamiento";
			this->Column4->Name = L"Column4";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Potencia";
			this->Column3->Name = L"Column3";
			// 
			// frmMantReuladores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 386);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantReuladores";
			this->Text = L"Estado de Reguladores";
			this->Load += gcnew System::EventHandler(this, &frmMantReguladores::frmMantReguladores_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ tipoRegulador = this->comboBox1->Text;
		ReguladorController^ objReguladorController = gcnew ReguladorController();
		List<reguladores^>^ listaReguladores = objReguladorController->buscarReguladorxTipo(tipoRegulador);
		mostrarGrilla(listaReguladores);
	}
	private: void mostrarGrilla(List<reguladores^>^ listaReguladores) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaReguladores->Count; i++) {
			reguladores^ objRegulador = listaReguladores[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = objRegulador->getTipo();
			filaGrilla[1] = Convert::ToString(objRegulador->getcodigo());
			filaGrilla[2] = Convert::ToString(objRegulador->getenOperacion());
			filaGrilla[3] = Convert::ToString(objRegulador->getpotencia());
			this->dataGridView1->Rows->Add(filaGrilla);

		}

<<<<<<< HEAD
		
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
=======

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

>>>>>>> 7c42f2d (queso)
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ tipoEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		ReguladorController^ objReguladorController = gcnew ReguladorController();
		List<reguladores^>^ objRegulador = objReguladorController->buscarReguladorxTipo(tipoEditar);
		frmEditarRegulador^ ventanaEditarRegulador = gcnew frmEditarRegulador(objRegulador[0]);
		ventanaEditarRegulador->ShowDialog();
		this->dataGridView1->Rows->Clear();
	}
<<<<<<< HEAD
private: System::Void frmMantReguladores_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
=======
	private: System::Void frmMantReguladores_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
>>>>>>> 7c42f2d (queso)
}
