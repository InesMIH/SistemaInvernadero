#pragma once
#include "frmNuevoCultivo.h"
#include "frmEditarCultivo.h"

namespace SistemaInvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaInvernaderoController;
	using namespace System::Collections::Generic;
	using namespace SistemaInvernaderoModel;

	/// <summary>
	/// Resumen de frmMantCultivos
	/// </summary>
	public ref class frmMantCultivos : public System::Windows::Forms::Form
	{
	public:
		frmMantCultivos(void)
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
		~frmMantCultivos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usuario;







	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(81, 42);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1278, 146);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de Búsqueda";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantCultivos::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(874, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantCultivos::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Comestible", L"No Comestible" });
			this->comboBox1->Location = System::Drawing::Point(537, 78);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(223, 33);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMantCultivos::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(410, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo:";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantCultivos::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column4, this->Usuario
			});
			this->dataGridView1->Location = System::Drawing::Point(91, 237);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1268, 448);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantCultivos::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(691, 716);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantCultivos::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(934, 716);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 49);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantCultivos::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(405, 716);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 49);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Nuevo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantCultivos::button4_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"codigo";
			this->Column1->MinimumWidth = 10;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"nombre";
			this->Column2->MinimumWidth = 10;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 200;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"tiempoCultivo";
			this->Column4->MinimumWidth = 10;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 200;
			// 
			// Usuario
			// 
			this->Usuario->HeaderText = L"Usuario";
			this->Usuario->MinimumWidth = 10;
			this->Usuario->Name = L"Usuario";
			this->Usuario->Width = 200;
			// 
			// frmMantCultivos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1391, 898);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantCultivos";
			this->Text = L"Mantenimiento Cultivos";
			this->Load += gcnew System::EventHandler(this, &frmMantCultivos::frmMantCultivos_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		CultivoController^ objCultivoController = gcnew CultivoController();
		objCultivoController->eliminarCultivo(codigoEliminar);
		MessageBox::Show("El cultivo seleccionado ha sido eliminado correctamente.");
		this->dataGridView1->Rows->Clear();
	}
	private: System::Void frmMantCultivos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ TipoCultivo = this->comboBox1->Text;
		CultivoController^ objCultivoController = gcnew CultivoController();
		List<cultivo^>^ listaCultivos = objCultivoController->buscarCultivoxTipo(TipoCultivo);
		mostrarGrilla(listaCultivos);
	}
	private: void mostrarGrilla(List<cultivo^>^ listaCultivos) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaCultivos->Count; i++) {
			cultivo^ objcultivo = listaCultivos[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			filaGrilla[0] = Convert::ToString(objcultivo->getcodigo());
			filaGrilla[1] = objcultivo->getnombre();
			filaGrilla[2] = objcultivo->gettiempoCultivo();
			filaGrilla[3] = objcultivo->getusuario()->getNombre();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevoCultivo^ ventanaNuevocultivo = gcnew frmNuevoCultivo();
		ventanaNuevocultivo->ShowDialog(); /*Ventana modal*/

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
		int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		CultivoController^ objCultivoController = gcnew CultivoController();
		cultivo^ objCultivo = objCultivoController->buscarCultivoxCodigo(codigoEditar);
		frmEditarCultivo^ ventanaEditarCultivo = gcnew frmEditarCultivo();
		ventanaEditarCultivo->ShowDialog();
		this->dataGridView1->Rows->Clear();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
