#pragma once
#include "frmEditarUsuario.h"
#include "frmNuevoUsuario.h"

namespace SistemaInvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaInvernaderoModel;
	using namespace SistemaInvernaderoController;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Resumen de frmMantUsuarios
	/// </summary>
	public ref class frmMantUsuarios : public System::Windows::Forms::Form
	{
	public:
		frmMantUsuarios(void)
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
		~frmMantUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(89, 754);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 49);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Nuevo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantUsuarios::button4_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(592, 754);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 49);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(345, 754);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 49);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantUsuarios::button2_Click_1);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(39, 277);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(725, 448);
			this->dataGridView1->TabIndex = 6;
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(29, 82);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(745, 146);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de Búsqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(530, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantUsuarios::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Comestible", L"No Comestible" });
			this->comboBox1->Location = System::Drawing::Point(193, 67);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(223, 33);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(66, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cargo:";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantUsuarios::label1_Click);
			// 
			// frmMantUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 887);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantUsuarios";
			this->Text = L"Mantenimiento Usuarios";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cargo = this->comboBox1->Text;
		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		List<usuario^>^ listaUsuarios = objUsuarioController->buscarUsuarioxCargo(cargo);
		mostrarGrilla(listaUsuarios);
	}
	private: void mostrarGrilla(List<usuario^>^ listaUsuarios) {
	   this->dataGridView1->Rows->Clear();
	   for (int i = 0; i < listaUsuarios->Count; i++) {
		   usuario^ objusuario = listaUsuarios[i];
		   array<String^>^ filaGrilla = gcnew array<String^>(5);
		   filaGrilla[0] = Convert::ToString(objusuario->getid());
		   filaGrilla[1] = objusuario->getNombre();
		   this->dataGridView1->Rows->Add(filaGrilla);
	   }
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int idEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	objUsuarioController->eliminarUsuario(idEliminar);
	MessageBox::Show("El usuario seleccionado ha sido eliminado correctamente.");
	this->dataGridView1->Rows->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
   private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
   }
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoUsuario^ ventanaNuevoUsuario = gcnew frmNuevoUsuario();
	ventanaNuevoUsuario->ShowDialog();
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	usuario^ objUsuario = objUsuarioController->buscarUsuarioxCodigo(codigoEditar);
	frmEditarUsuario^ ventanaEditarUsuario = gcnew frmEditarUsuario(objUsuario);
	ventanaEditarUsuario->ShowDialog();
	this->dataGridView1->Rows->Clear();
}
};
}
