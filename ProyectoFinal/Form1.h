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
	private: System::Windows::Forms::Panel^ panel1;










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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->BackColor = System::Drawing::Color::Transparent;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->ForeColor = System::Drawing::Color::White;
			this->lbl_encabezado->Location = System::Drawing::Point(62, 37);
			this->lbl_encabezado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(255, 54);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"TRENES TPG";
			// 
			// lbl_opciones
			// 
			this->lbl_opciones->AutoSize = true;
			this->lbl_opciones->BackColor = System::Drawing::Color::Transparent;
			this->lbl_opciones->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_opciones->ForeColor = System::Drawing::Color::White;
			this->lbl_opciones->Location = System::Drawing::Point(18, 82);
			this->lbl_opciones->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_opciones->Name = L"lbl_opciones";
			this->lbl_opciones->Size = System::Drawing::Size(355, 46);
			this->lbl_opciones->TabIndex = 1;
			this->lbl_opciones->Text = L"Seleccione una opción";
			// 
			// btt_cliente
			// 
			this->btt_cliente->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_cliente->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btt_cliente->FlatAppearance->BorderSize = 0;
			this->btt_cliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_cliente->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_cliente->ForeColor = System::Drawing::Color::White;
			this->btt_cliente->Location = System::Drawing::Point(82, 137);
			this->btt_cliente->Margin = System::Windows::Forms::Padding(2);
			this->btt_cliente->Name = L"btt_cliente";
			this->btt_cliente->Size = System::Drawing::Size(152, 41);
			this->btt_cliente->TabIndex = 2;
			this->btt_cliente->Text = L"Soy cliente";
			this->btt_cliente->UseVisualStyleBackColor = false;
			this->btt_cliente->Click += gcnew System::EventHandler(this, &Form1::btt_cliente_Click);
			// 
			// btt_empleado
			// 
			this->btt_empleado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_empleado->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btt_empleado->FlatAppearance->BorderSize = 0;
			this->btt_empleado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_empleado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_empleado->ForeColor = System::Drawing::Color::White;
			this->btt_empleado->Location = System::Drawing::Point(82, 200);
			this->btt_empleado->Margin = System::Windows::Forms::Padding(2);
			this->btt_empleado->Name = L"btt_empleado";
			this->btt_empleado->Size = System::Drawing::Size(152, 41);
			this->btt_empleado->TabIndex = 3;
			this->btt_empleado->Text = L"Soy empleado";
			this->btt_empleado->UseVisualStyleBackColor = false;
			this->btt_empleado->Click += gcnew System::EventHandler(this, &Form1::btt_empleado_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->panel1->Controls->Add(this->lbl_encabezado);
			this->panel1->Controls->Add(this->btt_cliente);
			this->panel1->Controls->Add(this->btt_empleado);
			this->panel1->Controls->Add(this->lbl_opciones);
			this->panel1->Location = System::Drawing::Point(96, 37);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(315, 263);
			this->panel1->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(522, 335);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

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
