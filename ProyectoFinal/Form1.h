#pragma once
#include "LoginCliente.h"
#include "LoginEmpleados.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_encabezado;
	protected:
	private: System::Windows::Forms::Label^ lbl_opciones;
	private: System::Windows::Forms::Button^ btt_cliente;
	private: System::Windows::Forms::Button^ btt_empleado;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			this->lbl_opciones = (gcnew System::Windows::Forms::Label());
			this->btt_cliente = (gcnew System::Windows::Forms::Button());
			this->btt_empleado = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->Location = System::Drawing::Point(96, 24);
			this->lbl_encabezado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(198, 31);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"TRENES TPG";
			// 
			// lbl_opciones
			// 
			this->lbl_opciones->AutoSize = true;
			this->lbl_opciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_opciones->Location = System::Drawing::Point(69, 115);
			this->lbl_opciones->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_opciones->Name = L"lbl_opciones";
			this->lbl_opciones->Size = System::Drawing::Size(231, 26);
			this->lbl_opciones->TabIndex = 1;
			this->lbl_opciones->Text = L"Seleccione una opción";
			// 
			// btt_cliente
			// 
			this->btt_cliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_cliente->Location = System::Drawing::Point(110, 155);
			this->btt_cliente->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_cliente->Name = L"btt_cliente";
			this->btt_cliente->Size = System::Drawing::Size(135, 26);
			this->btt_cliente->TabIndex = 2;
			this->btt_cliente->Text = L"Soy cliente";
			this->btt_cliente->UseVisualStyleBackColor = true;
			this->btt_cliente->Click += gcnew System::EventHandler(this, &Form1::btt_cliente_Click);
			// 
			// btt_empleado
			// 
			this->btt_empleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_empleado->Location = System::Drawing::Point(110, 186);
			this->btt_empleado->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_empleado->Name = L"btt_empleado";
			this->btt_empleado->Size = System::Drawing::Size(135, 30);
			this->btt_empleado->TabIndex = 3;
			this->btt_empleado->Text = L"Soy empleado";
			this->btt_empleado->UseVisualStyleBackColor = true;
			this->btt_empleado->Click += gcnew System::EventHandler(this, &Form1::btt_empleado_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 308);
			this->Controls->Add(this->btt_empleado);
			this->Controls->Add(this->btt_cliente);
			this->Controls->Add(this->lbl_opciones);
			this->Controls->Add(this->lbl_encabezado);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btt_cliente_Click(System::Object^ sender, System::EventArgs^ e) {
		ProyectoFinal::LoginCliente^ logincliente = gcnew ProyectoFinal::LoginCliente();
		logincliente->Show();
		Hide();

	}
		   
private: System::Void btt_empleado_Click(System::Object^ sender, System::EventArgs^ e) {
	ProyectoFinal::LoginEmpleados^ loginempleados = gcnew ProyectoFinal::LoginEmpleados();
	loginempleados->Show();
	Hide();
}
};
}
