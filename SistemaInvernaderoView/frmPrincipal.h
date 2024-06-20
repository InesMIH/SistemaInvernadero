#pragma once
#include "frmMantCultivos.h"
#include "frmMantSensores.h"
<<<<<<< HEAD
#include "frmMantUsuarios.h"
#include "frmMantReguladores.h"
#include "frmSensorTemperatura.h"
#include "frmSensorHumedad.h"
#include "frmSensorLuminosidad.h"
#include "frmReporteDeFallas.h"
=======
>>>>>>> b5a1190 (b)

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
	private: System::Windows::Forms::ToolStripMenuItem^ men�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeSensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeCultivosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeUsuariosToolStripMenuItem;
<<<<<<< HEAD
<<<<<<< HEAD
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoDeReguladoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeFallaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraci�nDeSensorTemperaturaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraci�nDeSensorHumedadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configuraci�nDeSensorLuminosidadToolStripMenuItem;
=======
>>>>>>> b5a1190 (b)
=======
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
>>>>>>> 6cb23e4 (c)
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->men�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeSensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
<<<<<<< HEAD
			this->configuraci�nDeSensorTemperaturaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraci�nDeSensorHumedadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configuraci�nDeSensorLuminosidadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeReguladoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeCultivosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeFallaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
=======
			this->mantenimientoDeCultivosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
<<<<<<< HEAD
>>>>>>> b5a1190 (b)
=======
			// 
			// menuStrip1
			// 
>>>>>>> 6cb23e4 (c)
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->men�ToolStripMenuItem });
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
<<<<<<< HEAD
<<<<<<< HEAD
			// 
			// men�ToolStripMenuItem
			// 
			this->men�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->mantenimientoDeSensoresToolStripMenuItem,
					this->mantenimientoDeReguladoresToolStripMenuItem, this->mantenimientoDeCultivosToolStripMenuItem, this->mantenimientoDeUsuariosToolStripMenuItem,
					this->reporteDeFallaToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->men�ToolStripMenuItem->Name = L"men�ToolStripMenuItem";
			resources->ApplyResources(this->men�ToolStripMenuItem, L"men�ToolStripMenuItem");
			this->men�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::men�ToolStripMenuItem_Click);
			// 
			// mantenimientoDeSensoresToolStripMenuItem
			// 
			this->mantenimientoDeSensoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->configuraci�nDeSensorTemperaturaToolStripMenuItem,
					this->configuraci�nDeSensorHumedadToolStripMenuItem, this->configuraci�nDeSensorLuminosidadToolStripMenuItem
			});
			this->mantenimientoDeSensoresToolStripMenuItem->Name = L"mantenimientoDeSensoresToolStripMenuItem";
			resources->ApplyResources(this->mantenimientoDeSensoresToolStripMenuItem, L"mantenimientoDeSensoresToolStripMenuItem");
			this->mantenimientoDeSensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeSensoresToolStripMenuItem_Click);
			// 
			// configuraci�nDeSensorTemperaturaToolStripMenuItem
			// 
			this->configuraci�nDeSensorTemperaturaToolStripMenuItem->Name = L"configuraci�nDeSensorTemperaturaToolStripMenuItem";
			resources->ApplyResources(this->configuraci�nDeSensorTemperaturaToolStripMenuItem, L"configuraci�nDeSensorTemperaturaToolStripMenuItem");
			this->configuraci�nDeSensorTemperaturaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraci�nDeSensorTemperaturaToolStripMenuItem_Click);
			// 
			// configuraci�nDeSensorHumedadToolStripMenuItem
			// 
			this->configuraci�nDeSensorHumedadToolStripMenuItem->Name = L"configuraci�nDeSensorHumedadToolStripMenuItem";
			resources->ApplyResources(this->configuraci�nDeSensorHumedadToolStripMenuItem, L"configuraci�nDeSensorHumedadToolStripMenuItem");
			this->configuraci�nDeSensorHumedadToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraci�nDeSensorHumedadToolStripMenuItem_Click);
			// 
			// configuraci�nDeSensorLuminosidadToolStripMenuItem
			// 
			this->configuraci�nDeSensorLuminosidadToolStripMenuItem->Name = L"configuraci�nDeSensorLuminosidadToolStripMenuItem";
			resources->ApplyResources(this->configuraci�nDeSensorLuminosidadToolStripMenuItem, L"configuraci�nDeSensorLuminosidadToolStripMenuItem");
			this->configuraci�nDeSensorLuminosidadToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::configuraci�nDeSensorLuminosidadToolStripMenuItem_Click);
			// 
			// mantenimientoDeReguladoresToolStripMenuItem
			// 
			this->mantenimientoDeReguladoresToolStripMenuItem->Name = L"mantenimientoDeReguladoresToolStripMenuItem";
			resources->ApplyResources(this->mantenimientoDeReguladoresToolStripMenuItem, L"mantenimientoDeReguladoresToolStripMenuItem");
			this->mantenimientoDeReguladoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeReguladoresToolStripMenuItem_Click);
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
			this->mantenimientoDeUsuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoDeUsuariosToolStripMenuItem_Click);
			// 
			// reporteDeFallaToolStripMenuItem
			// 
			this->reporteDeFallaToolStripMenuItem->Name = L"reporteDeFallaToolStripMenuItem";
			resources->ApplyResources(this->reporteDeFallaToolStripMenuItem, L"reporteDeFallaToolStripMenuItem");
			this->reporteDeFallaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::reporteDeFallaToolStripMenuItem_Click);
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
=======
			this->menuStrip1->Size = System::Drawing::Size(932, 46);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->men�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
=======
			// 
			// men�ToolStripMenuItem
			// 
			this->men�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
>>>>>>> 6cb23e4 (c)
				this->mantenimientoDeSensoresToolStripMenuItem,
					this->mantenimientoDeCultivosToolStripMenuItem, this->mantenimientoDeUsuariosToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->men�ToolStripMenuItem->Name = L"men�ToolStripMenuItem";
			resources->ApplyResources(this->men�ToolStripMenuItem, L"men�ToolStripMenuItem");
			this->men�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::men�ToolStripMenuItem_Click);
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
<<<<<<< HEAD
			this->ClientSize = System::Drawing::Size(932, 658);
>>>>>>> b5a1190 (b)
=======
			this->ControlBox = false;
>>>>>>> 6cb23e4 (c)
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
	private: System::Void men�ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mantenimientoDeSensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
<<<<<<< HEAD
		frmMantSensores^ ventanaMantSensores = gcnew frmMantSensores();
		ventanaMantSensores->MdiParent = this;
		ventanaMantSensores->Show();
=======

>>>>>>> b5a1190 (b)
	}
	private: System::Void mantenimientoDeCultivosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantCultivos^ ventanaMantCultivos = gcnew frmMantCultivos();
		ventanaMantCultivos->MdiParent = this;
		ventanaMantCultivos->Show();
	}
<<<<<<< HEAD
	private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void frmPrincipal_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void mantenimientoDeUsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantUsuarios^ ventanaMantUsuarios = gcnew frmMantUsuarios();
		ventanaMantUsuarios->MdiParent = this;
		ventanaMantUsuarios->Show();
	}
	private: System::Void configuraci�nDeSensorTemperaturaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmSensorTemperatura^ ventanaSensorTemperatura = gcnew frmSensorTemperatura();
		ventanaSensorTemperatura->Show();
	}
private: System::Void mantenimientoDeReguladoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantReguladores^ ventanaMantReguladores = gcnew frmMantReguladores();
	ventanaMantReguladores->MdiParent = this;
	ventanaMantReguladores->Show();
=======
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
>>>>>>> b5a1190 (b)
}
private: System::Void configuraci�nDeSensorHumedadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorHumedad^ ventanaSensorHumedad = gcnew frmSensorHumedad();
	ventanaSensorHumedad->Show();
}
private: System::Void configuraci�nDeSensorLuminosidadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSensorLuminosidad^ ventanaSensorLuminosidad = gcnew frmSensorLuminosidad();
	ventanaSensorLuminosidad->Show();
}
private: System::Void reporteDeFallaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteDeFallas^ ventanaReporteFallas = gcnew frmReporteDeFallas();
	ventanaReporteFallas->Show();
}
};
	}
