#pragma once
#include "RegistroCompras.h"
#include "RegistroRutas.h"
namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuEmpleados
	/// </summary>
	public ref class MenuEmpleados : public System::Windows::Forms::Form
	{
	public:
		MenuEmpleados(void)
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
		~MenuEmpleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_bienvenida;
	private: System::Windows::Forms::Button^ btt_compras;
	private: System::Windows::Forms::Button^ btt_rutas;


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
			this->lbl_bienvenida = (gcnew System::Windows::Forms::Label());
			this->btt_compras = (gcnew System::Windows::Forms::Button());
			this->btt_rutas = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_bienvenida
			// 
			this->lbl_bienvenida->AutoSize = true;
			this->lbl_bienvenida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_bienvenida->Location = System::Drawing::Point(60, 9);
			this->lbl_bienvenida->Name = L"lbl_bienvenida";
			this->lbl_bienvenida->Size = System::Drawing::Size(197, 39);
			this->lbl_bienvenida->TabIndex = 0;
			this->lbl_bienvenida->Text = L"Bienvenido";
			// 
			// btt_compras
			// 
			this->btt_compras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_compras->Location = System::Drawing::Point(45, 104);
			this->btt_compras->Name = L"btt_compras";
			this->btt_compras->Size = System::Drawing::Size(229, 35);
			this->btt_compras->TabIndex = 1;
			this->btt_compras->Text = L"Registro de Compras";
			this->btt_compras->UseVisualStyleBackColor = true;
			this->btt_compras->Click += gcnew System::EventHandler(this, &MenuEmpleados::btt_compras_Click);
			// 
			// btt_rutas
			// 
			this->btt_rutas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_rutas->Location = System::Drawing::Point(67, 165);
			this->btt_rutas->Name = L"btt_rutas";
			this->btt_rutas->Size = System::Drawing::Size(156, 36);
			this->btt_rutas->TabIndex = 2;
			this->btt_rutas->Text = L"Menú Rutas";
			this->btt_rutas->UseVisualStyleBackColor = true;
			this->btt_rutas->Click += gcnew System::EventHandler(this, &MenuEmpleados::button2_Click);
			// 
			// MenuEmpleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 333);
			this->Controls->Add(this->btt_rutas);
			this->Controls->Add(this->btt_compras);
			this->Controls->Add(this->lbl_bienvenida);
			this->Name = L"MenuEmpleados";
			this->Text = L"MenuEmpleados";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ProyectoFinal::RegistroRutas^ registrorutas = gcnew ProyectoFinal::RegistroRutas(this);
		registrorutas->Show();
	}
		   System::Void RegistroRutasClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			   this->Show();
		   }
	private: System::Void btt_compras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ProyectoFinal::RegistroCompras^ registrocompras = gcnew ProyectoFinal::RegistroCompras(this);
		registrocompras->Show();
	}
		   System::Void RegistroComprasClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			   this->Show();
		   }
};
}
