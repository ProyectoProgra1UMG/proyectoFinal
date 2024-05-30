#pragma once
#include "InsertarRutas.h"
#include "EliminarRutas.h"
#include "MostrarRutas.h"

namespace ProyectoFinal {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistroRutas
	/// </summary>
	public ref class RegistroRutas : public System::Windows::Forms::Form
	{
	private: Form^ menuempleados;
	public:
		RegistroRutas(Form^ _menuempleados)
		{
			InitializeComponent();
			menuempleados = _menuempleados;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegistroRutas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btt_regresar;
	private: System::Windows::Forms::Panel^ pnl_menu;
	private: System::Windows::Forms::Panel^ pnl_contenedor;
	private: System::Windows::Forms::Button^ btt_mostrar;


	private: System::Windows::Forms::Button^ btt_eliminar;


	private: System::Windows::Forms::Button^ btt_insertar;
	protected:

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
			this->btt_regresar = (gcnew System::Windows::Forms::Button());
			this->pnl_menu = (gcnew System::Windows::Forms::Panel());
			this->btt_mostrar = (gcnew System::Windows::Forms::Button());
			this->btt_eliminar = (gcnew System::Windows::Forms::Button());
			this->btt_insertar = (gcnew System::Windows::Forms::Button());
			this->pnl_contenedor = (gcnew System::Windows::Forms::Panel());
			this->pnl_menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// btt_regresar
			// 
			this->btt_regresar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_regresar->FlatAppearance->BorderSize = 0;
			this->btt_regresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_regresar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_regresar->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btt_regresar->Location = System::Drawing::Point(592, 10);
			this->btt_regresar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_regresar->Name = L"btt_regresar";
			this->btt_regresar->Size = System::Drawing::Size(80, 29);
			this->btt_regresar->TabIndex = 0;
			this->btt_regresar->Text = L"Regresar";
			this->btt_regresar->UseVisualStyleBackColor = false;
			this->btt_regresar->Click += gcnew System::EventHandler(this, &RegistroRutas::btt_regresar_Click);
			// 
			// pnl_menu
			// 
			this->pnl_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->pnl_menu->Controls->Add(this->btt_mostrar);
			this->pnl_menu->Controls->Add(this->btt_regresar);
			this->pnl_menu->Controls->Add(this->btt_eliminar);
			this->pnl_menu->Controls->Add(this->btt_insertar);
			this->pnl_menu->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_menu->Location = System::Drawing::Point(0, 0);
			this->pnl_menu->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnl_menu->Name = L"pnl_menu";
			this->pnl_menu->Size = System::Drawing::Size(681, 81);
			this->pnl_menu->TabIndex = 1;
			// 
			// btt_mostrar
			// 
			this->btt_mostrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_mostrar->FlatAppearance->BorderSize = 0;
			this->btt_mostrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_mostrar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_mostrar->ForeColor = System::Drawing::Color::White;
			this->btt_mostrar->Location = System::Drawing::Point(134, 24);
			this->btt_mostrar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_mostrar->Name = L"btt_mostrar";
			this->btt_mostrar->Size = System::Drawing::Size(118, 38);
			this->btt_mostrar->TabIndex = 2;
			this->btt_mostrar->Text = L"Mostrar Rutas";
			this->btt_mostrar->UseVisualStyleBackColor = false;
			this->btt_mostrar->Click += gcnew System::EventHandler(this, &RegistroRutas::btt_mostrar_Click);
			// 
			// btt_eliminar
			// 
			this->btt_eliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_eliminar->FlatAppearance->BorderSize = 0;
			this->btt_eliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_eliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_eliminar->ForeColor = System::Drawing::Color::White;
			this->btt_eliminar->Location = System::Drawing::Point(262, 24);
			this->btt_eliminar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_eliminar->Name = L"btt_eliminar";
			this->btt_eliminar->Size = System::Drawing::Size(116, 38);
			this->btt_eliminar->TabIndex = 1;
			this->btt_eliminar->Text = L"Eliminar Rutas";
			this->btt_eliminar->UseVisualStyleBackColor = false;
			this->btt_eliminar->Click += gcnew System::EventHandler(this, &RegistroRutas::btt_eliminar_Click);
			// 
			// btt_insertar
			// 
			this->btt_insertar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_insertar->FlatAppearance->BorderSize = 0;
			this->btt_insertar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_insertar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_insertar->ForeColor = System::Drawing::Color::White;
			this->btt_insertar->Location = System::Drawing::Point(21, 24);
			this->btt_insertar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_insertar->Name = L"btt_insertar";
			this->btt_insertar->Size = System::Drawing::Size(101, 38);
			this->btt_insertar->TabIndex = 0;
			this->btt_insertar->Text = L"Insertar Rutas";
			this->btt_insertar->UseVisualStyleBackColor = false;
			this->btt_insertar->Click += gcnew System::EventHandler(this, &RegistroRutas::btt_insertar_Click);
			// 
			// pnl_contenedor
			// 
			this->pnl_contenedor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->pnl_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_contenedor->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnl_contenedor->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->pnl_contenedor->Location = System::Drawing::Point(0, 81);
			this->pnl_contenedor->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnl_contenedor->Name = L"pnl_contenedor";
			this->pnl_contenedor->Size = System::Drawing::Size(681, 471);
			this->pnl_contenedor->TabIndex = 2;
			// 
			// RegistroRutas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 552);
			this->Controls->Add(this->pnl_contenedor);
			this->Controls->Add(this->pnl_menu);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"RegistroRutas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegistroRutas";
			this->Load += gcnew System::EventHandler(this, &RegistroRutas::RegistroRutas_Load);
			this->pnl_menu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btt_regresar_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		menuempleados->Show();
	}
	private: System::Void RegistroRutas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   template<class T>
		   void AbrirPanel(T FormHijo)
		   {
			   if (this->pnl_contenedor->Controls->Count > 0)
				   this->pnl_contenedor->Controls->RemoveAt(0);
			   FormHijo->TopLevel = false;
			   FormHijo->Dock = DockStyle::Fill;
			   this->pnl_contenedor->Controls->Add(FormHijo);
			   this->pnl_contenedor->Tag = FormHijo;
			   FormHijo->Show();
		   }
private: System::Void btt_insertar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew ProyectoFinal::InsertarRutas);
}
private: System::Void btt_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew ProyectoFinal::EliminarRutas);
}
private: System::Void btt_mostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew ProyectoFinal::MostrarRutas);
}
};
}
