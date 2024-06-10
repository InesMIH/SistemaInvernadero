#pragma once
#include "frmMantCultivos.h"
#include "frmMantSensores.h"

namespace SistemaInvernaderoView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeSensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeCultivosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeUsuariosToolStripMenuItem;
	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeSensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeCultivosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menúToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(932, 46);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menúToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mantenimientoDeSensoresToolStripMenuItem,
					this->mantenimientoDeCultivosToolStripMenuItem, this->mantenimientoDeUsuariosToolStripMenuItem
			});
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			this->menúToolStripMenuItem->Size = System::Drawing::Size(97, 38);
			this->menúToolStripMenuItem->Text = L"Menú";
			this->menúToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::menúToolStripMenuItem_Click);
			this->mantenimientoDeSensoresToolStripMenuItem->Name = L"mantenimientoDeSensoresToolStripMenuItem";
			this->mantenimientoDeSensoresToolStripMenuItem->Size = System::Drawing::Size(448, 44);
			this->mantenimientoDeSensoresToolStripMenuItem->Text = L"Mantenimiento de Sensores";
			this->mantenimientoDeSensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeSensoresToolStripMenuItem_Click);
			this->mantenimientoDeCultivosToolStripMenuItem->Name = L"mantenimientoDeCultivosToolStripMenuItem";
			this->mantenimientoDeCultivosToolStripMenuItem->Size = System::Drawing::Size(448, 44);
			this->mantenimientoDeCultivosToolStripMenuItem->Text = L"Mantenimiento de Cultivos";
			this->mantenimientoDeCultivosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeCultivosToolStripMenuItem_Click);
			this->mantenimientoDeUsuariosToolStripMenuItem->Name = L"mantenimientoDeUsuariosToolStripMenuItem";
			this->mantenimientoDeUsuariosToolStripMenuItem->Size = System::Drawing::Size(448, 44);
			this->mantenimientoDeUsuariosToolStripMenuItem->Text = L"Mantenimiento de Usuarios";
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 658);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"frmPrincipal";
			this->Text = L"Sistema Invernadero";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menúToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mantenimientoDeSensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void mantenimientoDeCultivosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantCultivos^ ventanaMantCultivos = gcnew frmMantCultivos();
		ventanaMantCultivos->MdiParent = this;
		ventanaMantCultivos->Show();
	}
private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
