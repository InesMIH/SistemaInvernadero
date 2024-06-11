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
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menúToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeSensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeCultivosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menúToolStripMenuItem });
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// menúToolStripMenuItem
			// 
			this->menúToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->mantenimientoDeSensoresToolStripMenuItem,
					this->mantenimientoDeCultivosToolStripMenuItem, this->mantenimientoDeUsuariosToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			resources->ApplyResources(this->menúToolStripMenuItem, L"menúToolStripMenuItem");
			this->menúToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::menúToolStripMenuItem_Click);
			// 
			// mantenimientoDeSensoresToolStripMenuItem
			// 
			this->mantenimientoDeSensoresToolStripMenuItem->Name = L"mantenimientoDeSensoresToolStripMenuItem";
			resources->ApplyResources(this->mantenimientoDeSensoresToolStripMenuItem, L"mantenimientoDeSensoresToolStripMenuItem");
			this->mantenimientoDeSensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeSensoresToolStripMenuItem_Click);
			// 
			// mantenimientoDeCultivosToolStripMenuItem
			// 
			this->mantenimientoDeCultivosToolStripMenuItem->Name = L"mantenimientoDeCultivosToolStripMenuItem";
			resources->ApplyResources(this->mantenimientoDeCultivosToolStripMenuItem, L"mantenimientoDeCultivosToolStripMenuItem");
			this->mantenimientoDeCultivosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeCultivosToolStripMenuItem_Click);
			// 
			// mantenimientoDeUsuariosToolStripMenuItem
			// 
			this->mantenimientoDeUsuariosToolStripMenuItem->Name = L"mantenimientoDeUsuariosToolStripMenuItem";
			resources->ApplyResources(this->mantenimientoDeUsuariosToolStripMenuItem, L"mantenimientoDeUsuariosToolStripMenuItem");
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			resources->ApplyResources(this->salirToolStripMenuItem, L"salirToolStripMenuItem");
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::salirToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ControlBox = false;
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load_1);
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
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void frmPrincipal_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
