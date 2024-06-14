#pragma once
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
			//TODO: agregar cˇdigo de constructor aquÝ
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estÚn usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ men˙ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeSensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciˇnDeSensorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciˇnDeSensorHumedadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraciˇnDeSensorLuminosidadToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Variable del dise˝ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// MÚtodo necesario para admitir el Dise˝ador. No se puede modificar
		/// el contenido de este mÚtodo con el editor de cˇdigo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->men˙ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeSensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraciˇnDeSensorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraciˇnDeSensorHumedadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraciˇnDeSensorLuminosidadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->men˙ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(466, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// men˙ToolStripMenuItem
			// 
			this->men˙ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientoDeSensoresToolStripMenuItem });
			this->men˙ToolStripMenuItem->Name = L"men˙ToolStripMenuItem";
			this->men˙ToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->men˙ToolStripMenuItem->Text = L"Men˙";
			// 
			// mantenimientoDeSensoresToolStripMenuItem
			// 
			this->mantenimientoDeSensoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->configuraciˇnDeSensorToolStripMenuItem,
					this->configuraciˇnDeSensorHumedadToolStripMenuItem, this->configuraciˇnDeSensorLuminosidadToolStripMenuItem
			});
			this->mantenimientoDeSensoresToolStripMenuItem->Name = L"mantenimientoDeSensoresToolStripMenuItem";
			this->mantenimientoDeSensoresToolStripMenuItem->Size = System::Drawing::Size(221, 22);
			this->mantenimientoDeSensoresToolStripMenuItem->Text = L"Mantenimiento de Sensores";
			this->mantenimientoDeSensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeSensoresToolStripMenuItem_Click);
			// 
			// configuraciˇnDeSensorToolStripMenuItem
			// 
			this->configuraciˇnDeSensorToolStripMenuItem->Name = L"configuraciˇnDeSensorToolStripMenuItem";
			this->configuraciˇnDeSensorToolStripMenuItem->Size = System::Drawing::Size(276, 22);
			this->configuraciˇnDeSensorToolStripMenuItem->Text = L"Configuraciˇn de Sensor Temperatura ";
			this->configuraciˇnDeSensorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraciˇnDeSensorToolStripMenuItem_Click);
			// 
			// configuraciˇnDeSensorHumedadToolStripMenuItem
			// 
			this->configuraciˇnDeSensorHumedadToolStripMenuItem->Name = L"configuraciˇnDeSensorHumedadToolStripMenuItem";
			this->configuraciˇnDeSensorHumedadToolStripMenuItem->Size = System::Drawing::Size(276, 22);
			this->configuraciˇnDeSensorHumedadToolStripMenuItem->Text = L"Configuraciˇn de Sensor Humedad";
			this->configuraciˇnDeSensorHumedadToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraciˇnDeSensorHumedadToolStripMenuItem_Click);
			// 
			// configuraciˇnDeSensorLuminosidadToolStripMenuItem
			// 
			this->configuraciˇnDeSensorLuminosidadToolStripMenuItem->Name = L"configuraciˇnDeSensorLuminosidadToolStripMenuItem";
			this->configuraciˇnDeSensorLuminosidadToolStripMenuItem->Size = System::Drawing::Size(276, 22);
			this->configuraciˇnDeSensorLuminosidadToolStripMenuItem->Text = L"Configuraciˇn de Sensor Luminosidad";
			this->configuraciˇnDeSensorLuminosidadToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraciˇnDeSensorLuminosidadToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 342);
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
	private: System::Void configuraciˇnDeSensorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmSensorTemperatura^ ventanaSensorTemperatura = gcnew frmSensorTemperatura();
		ventanaSensorTemperatura->Show();
	}
private: System::Void configuraciˇnDeSensorHumedadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorHumedad^ ventanaSensorHumedad = gcnew frmSensorHumedad();
	ventanaSensorHumedad->Show();
}
private: System::Void configuraciˇnDeSensorLuminosidadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorLuminosidad^ ventanaSensorLuminosidad = gcnew frmSensorLuminosidad();
	ventanaSensorLuminosidad->Show();
}
};
}
