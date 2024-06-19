#pragma once
#include "frmMantReguladores.h"
#include "frmMantSensores.h"
#include "frmSensorTemperatura.h"
#include "frmSensorHumedad.h"
#include "frmSensorLuminosidad.h"

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
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menúToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeSensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciónDeSensorTemperaturaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciónDeSensorHumedadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciónDeSensorLuminosidadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeReguladoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeFallasToolStripMenuItem;

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
			this->configuraciónDeSensorTemperaturaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraciónDeSensorHumedadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraciónDeSensorLuminosidadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeReguladoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeFallasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menúToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(532, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menúToolStripMenuItem
			// 
			this->menúToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mantenimientoDeSensoresToolStripMenuItem,
					this->mantenimientoDeReguladoresToolStripMenuItem, this->reporteDeFallasToolStripMenuItem
			});
			this->menúToolStripMenuItem->Name = L"menúToolStripMenuItem";
			this->menúToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menúToolStripMenuItem->Text = L"Menú";
			// 
			// mantenimientoDeSensoresToolStripMenuItem
			// 
			this->mantenimientoDeSensoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->configuraciónDeSensorTemperaturaToolStripMenuItem,
					this->configuraciónDeSensorHumedadToolStripMenuItem, this->configuraciónDeSensorLuminosidadToolStripMenuItem
			});
			this->mantenimientoDeSensoresToolStripMenuItem->Name = L"mantenimientoDeSensoresToolStripMenuItem";
			this->mantenimientoDeSensoresToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->mantenimientoDeSensoresToolStripMenuItem->Text = L"Mantenimiento de Sensores";
			this->mantenimientoDeSensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeSensoresToolStripMenuItem_Click);
			// 
			// configuraciónDeSensorTemperaturaToolStripMenuItem
			// 
			this->configuraciónDeSensorTemperaturaToolStripMenuItem->Name = L"configuraciónDeSensorTemperaturaToolStripMenuItem";
			this->configuraciónDeSensorTemperaturaToolStripMenuItem->Size = System::Drawing::Size(276, 22);
			this->configuraciónDeSensorTemperaturaToolStripMenuItem->Text = L"Configuración de Sensor Temperatura";
			this->configuraciónDeSensorTemperaturaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraciónDeSensorTemperaturaToolStripMenuItem_Click);
			// 
			// configuraciónDeSensorHumedadToolStripMenuItem
			// 
			this->configuraciónDeSensorHumedadToolStripMenuItem->Name = L"configuraciónDeSensorHumedadToolStripMenuItem";
			this->configuraciónDeSensorHumedadToolStripMenuItem->Size = System::Drawing::Size(276, 22);
			this->configuraciónDeSensorHumedadToolStripMenuItem->Text = L"Configuración de Sensor Humedad";
			this->configuraciónDeSensorHumedadToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraciónDeSensorHumedadToolStripMenuItem_Click);
			// 
			// configuraciónDeSensorLuminosidadToolStripMenuItem
			// 
			this->configuraciónDeSensorLuminosidadToolStripMenuItem->Name = L"configuraciónDeSensorLuminosidadToolStripMenuItem";
			this->configuraciónDeSensorLuminosidadToolStripMenuItem->Size = System::Drawing::Size(276, 22);
			this->configuraciónDeSensorLuminosidadToolStripMenuItem->Text = L"Configuración de Sensor Luminosidad";
			this->configuraciónDeSensorLuminosidadToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraciónDeSensorLuminosidadToolStripMenuItem_Click);
			// 
			// mantenimientoDeReguladoresToolStripMenuItem
			// 
			this->mantenimientoDeReguladoresToolStripMenuItem->Name = L"mantenimientoDeReguladoresToolStripMenuItem";
			this->mantenimientoDeReguladoresToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->mantenimientoDeReguladoresToolStripMenuItem->Text = L"Mantenimiento de Reguladores";
			this->mantenimientoDeReguladoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeReguladoresToolStripMenuItem_Click);
			// 
			// reporteDeFallasToolStripMenuItem
			// 
			this->reporteDeFallasToolStripMenuItem->Name = L"reporteDeFallasToolStripMenuItem";
			this->reporteDeFallasToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->reporteDeFallasToolStripMenuItem->Text = L"Reporte de Fallas";
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 416);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->Text = L"Sistema Invernadero";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mantenimientoDeSensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantSensores^ ventanaMantSensores = gcnew frmMantSensores();
		ventanaMantSensores->MdiParent = this;
		ventanaMantSensores->Show();

	}
private: System::Void mantenimientoDeReguladoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantReguladores^ ventanaMantReguladores = gcnew frmMantReguladores();
	ventanaMantReguladores->MdiParent = this;
	ventanaMantReguladores->Show();
}
private: System::Void configuraciónDeSensorTemperaturaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorTemperatura^ ventanaSensorTemperatura = gcnew frmSensorTemperatura();
	ventanaSensorTemperatura->Show();

}
private: System::Void configuraciónDeSensorHumedadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorHumedad^ ventanaSensorHumedad = gcnew frmSensorHumedad();
	ventanaSensorHumedad->Show();

}
private: System::Void configuraciónDeSensorLuminosidadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorLuminosidad^ ventanaSensorLuminosidad = gcnew frmSensorLuminosidad();
	ventanaSensorLuminosidad->Show();
}
};
}
