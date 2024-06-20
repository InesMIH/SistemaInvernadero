#pragma once
#include "frmMantReguladores.h"
#include "frmMantSensores.h"
#include "frmSensorTemperatura.h"
#include "frmSensorHumedad.h"
#include "frmSensorLuminosidad.h"
#include "frmRociador.h"
#include "frmFoco.h"
#include "frmVentilador.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ men�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeSensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraci�nDeSensorTemperaturaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraci�nDeSensorHumedadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraci�nDeSensorLuminosidadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeReguladoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeFallasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rociadorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ focoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventiladorToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->men�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeSensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraci�nDeSensorTemperaturaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraci�nDeSensorHumedadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraci�nDeSensorLuminosidadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeReguladoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rociadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->focoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventiladorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeFallasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->men�ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(532, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// men�ToolStripMenuItem
			// 
			this->men�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mantenimientoDeSensoresToolStripMenuItem,
					this->mantenimientoDeReguladoresToolStripMenuItem, this->reporteDeFallasToolStripMenuItem
			});
			this->men�ToolStripMenuItem->Name = L"men�ToolStripMenuItem";
			this->men�ToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->men�ToolStripMenuItem->Text = L"Men�";
			// 
			// mantenimientoDeSensoresToolStripMenuItem
			// 
			this->mantenimientoDeSensoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->configuraci�nDeSensorTemperaturaToolStripMenuItem,
					this->configuraci�nDeSensorHumedadToolStripMenuItem, this->configuraci�nDeSensorLuminosidadToolStripMenuItem
			});
			this->mantenimientoDeSensoresToolStripMenuItem->Name = L"mantenimientoDeSensoresToolStripMenuItem";
			this->mantenimientoDeSensoresToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->mantenimientoDeSensoresToolStripMenuItem->Text = L"Mantenimiento de Sensores";
			this->mantenimientoDeSensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeSensoresToolStripMenuItem_Click);
			// 
			// configuraci�nDeSensorTemperaturaToolStripMenuItem
			// 
			this->configuraci�nDeSensorTemperaturaToolStripMenuItem->Name = L"configuraci�nDeSensorTemperaturaToolStripMenuItem";
			this->configuraci�nDeSensorTemperaturaToolStripMenuItem->Size = System::Drawing::Size(276, 22);
			this->configuraci�nDeSensorTemperaturaToolStripMenuItem->Text = L"Configuraci�n de Sensor Temperatura";
			this->configuraci�nDeSensorTemperaturaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraci�nDeSensorTemperaturaToolStripMenuItem_Click);
			// 
			// configuraci�nDeSensorHumedadToolStripMenuItem
			// 
			this->configuraci�nDeSensorHumedadToolStripMenuItem->Name = L"configuraci�nDeSensorHumedadToolStripMenuItem";
			this->configuraci�nDeSensorHumedadToolStripMenuItem->Size = System::Drawing::Size(276, 22);
			this->configuraci�nDeSensorHumedadToolStripMenuItem->Text = L"Configuraci�n de Sensor Humedad";
			this->configuraci�nDeSensorHumedadToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraci�nDeSensorHumedadToolStripMenuItem_Click);
			// 
			// configuraci�nDeSensorLuminosidadToolStripMenuItem
			// 
			this->configuraci�nDeSensorLuminosidadToolStripMenuItem->Name = L"configuraci�nDeSensorLuminosidadToolStripMenuItem";
			this->configuraci�nDeSensorLuminosidadToolStripMenuItem->Size = System::Drawing::Size(276, 22);
			this->configuraci�nDeSensorLuminosidadToolStripMenuItem->Text = L"Configuraci�n de Sensor Luminosidad";
			this->configuraci�nDeSensorLuminosidadToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraci�nDeSensorLuminosidadToolStripMenuItem_Click);
			// 
			// mantenimientoDeReguladoresToolStripMenuItem
			// 
			this->mantenimientoDeReguladoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->rociadorToolStripMenuItem,
					this->focoToolStripMenuItem, this->ventiladorToolStripMenuItem
			});
			this->mantenimientoDeReguladoresToolStripMenuItem->Name = L"mantenimientoDeReguladoresToolStripMenuItem";
			this->mantenimientoDeReguladoresToolStripMenuItem->Size = System::Drawing::Size(240, 22);
			this->mantenimientoDeReguladoresToolStripMenuItem->Text = L"Mantenimiento de Reguladores";
			this->mantenimientoDeReguladoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeReguladoresToolStripMenuItem_Click);
			// 
			// rociadorToolStripMenuItem
			// 
			this->rociadorToolStripMenuItem->Name = L"rociadorToolStripMenuItem";
			this->rociadorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->rociadorToolStripMenuItem->Text = L"Roceador";
			this->rociadorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::rociadorToolStripMenuItem_Click);
			// 
			// focoToolStripMenuItem
			// 
			this->focoToolStripMenuItem->Name = L"focoToolStripMenuItem";
			this->focoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->focoToolStripMenuItem->Text = L"Foco";
			this->focoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::focoToolStripMenuItem_Click);
			// 
			// ventiladorToolStripMenuItem
			// 
			this->ventiladorToolStripMenuItem->Name = L"ventiladorToolStripMenuItem";
			this->ventiladorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ventiladorToolStripMenuItem->Text = L"Ventilador";
			this->ventiladorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::ventiladorToolStripMenuItem_Click);
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
private: System::Void configuraci�nDeSensorTemperaturaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorTemperatura^ ventanaSensorTemperatura = gcnew frmSensorTemperatura();
	ventanaSensorTemperatura->Show();

}
private: System::Void configuraci�nDeSensorHumedadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorHumedad^ ventanaSensorHumedad = gcnew frmSensorHumedad();
	ventanaSensorHumedad->Show();

}
private: System::Void configuraci�nDeSensorLuminosidadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorLuminosidad^ ventanaSensorLuminosidad = gcnew frmSensorLuminosidad();
	ventanaSensorLuminosidad->Show();
}
private: System::Void rociadorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmRociador^ ventanaRoceador = gcnew frmRociador();
	ventanaRoceador->Show(); 
}
private: System::Void focoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmFoco^ ventanaFoco = gcnew frmFoco();
	ventanaFoco->Show(); 
}
private: System::Void ventiladorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmVentilador^ ventanaVentilador = gcnew frmVentilador();
	ventanaVentilador->Show(); 
}
};
}
