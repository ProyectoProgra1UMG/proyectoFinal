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
	private: Form^ login;
	public:
		MenuEmpleados(Form^ _login)
		{
			InitializeComponent();
			login = _login;
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btt_volver;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuEmpleados::typeid));
			this->lbl_bienvenida = (gcnew System::Windows::Forms::Label());
			this->btt_compras = (gcnew System::Windows::Forms::Button());
			this->btt_rutas = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btt_volver = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_bienvenida
			// 
			this->lbl_bienvenida->AutoSize = true;
			this->lbl_bienvenida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->lbl_bienvenida->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_bienvenida->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_bienvenida->Location = System::Drawing::Point(124, 9);
			this->lbl_bienvenida->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_bienvenida->Name = L"lbl_bienvenida";
			this->lbl_bienvenida->Size = System::Drawing::Size(161, 37);
			this->lbl_bienvenida->TabIndex = 0;
			this->lbl_bienvenida->Text = L"Bienvenido";
			// 
			// btt_compras
			// 
			this->btt_compras->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_compras->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btt_compras->FlatAppearance->BorderSize = 0;
			this->btt_compras->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_compras->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_compras->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btt_compras->Location = System::Drawing::Point(118, 118);
			this->btt_compras->Margin = System::Windows::Forms::Padding(2);
			this->btt_compras->Name = L"btt_compras";
			this->btt_compras->Size = System::Drawing::Size(178, 28);
			this->btt_compras->TabIndex = 1;
			this->btt_compras->Text = L"Registro de Compras";
			this->btt_compras->UseVisualStyleBackColor = false;
			this->btt_compras->Click += gcnew System::EventHandler(this, &MenuEmpleados::btt_compras_Click);
			// 
			// btt_rutas
			// 
			this->btt_rutas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_rutas->FlatAppearance->BorderSize = 0;
			this->btt_rutas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_rutas->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_rutas->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btt_rutas->Location = System::Drawing::Point(118, 170);
			this->btt_rutas->Margin = System::Windows::Forms::Padding(2);
			this->btt_rutas->Name = L"btt_rutas";
			this->btt_rutas->Size = System::Drawing::Size(178, 29);
			this->btt_rutas->TabIndex = 2;
			this->btt_rutas->Text = L"Menú Rutas";
			this->btt_rutas->UseVisualStyleBackColor = false;
			this->btt_rutas->Click += gcnew System::EventHandler(this, &MenuEmpleados::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->panel1->Controls->Add(this->btt_volver);
			this->panel1->Controls->Add(this->lbl_bienvenida);
			this->panel1->Location = System::Drawing::Point(-2, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(407, 69);
			this->panel1->TabIndex = 3;
			// 
			// btt_volver
			// 
			this->btt_volver->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_volver->FlatAppearance->BorderSize = 0;
			this->btt_volver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_volver->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_volver->ForeColor = System::Drawing::Color::White;
			this->btt_volver->Location = System::Drawing::Point(317, 12);
			this->btt_volver->Name = L"btt_volver";
			this->btt_volver->Size = System::Drawing::Size(75, 25);
			this->btt_volver->TabIndex = 1;
			this->btt_volver->Text = L"Regresar";
			this->btt_volver->UseVisualStyleBackColor = false;
			this->btt_volver->Click += gcnew System::EventHandler(this, &MenuEmpleados::btt_volver_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(156, 233);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Empleado del Mes";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(118, 248);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(178, 143);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MenuEmpleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(402, 402);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btt_rutas);
			this->Controls->Add(this->btt_compras);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuEmpleados";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuEmpleados";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//----------------------DIRIGE AL REGISTRO DE RUTAS PARA INSERTAR, ELIMINAR Y MOSTRAR---------------------------
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ProyectoFinal::RegistroRutas^ registrorutas = gcnew ProyectoFinal::RegistroRutas(this);
		registrorutas->Show();
	}

	System::Void RegistroRutasClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->Show();
	}

	//----------------------DIRIGE AL REGISTRO DE COMPRAS---------------------------
	private: System::Void btt_compras_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ProyectoFinal::RegistroCompras^ registrocompras = gcnew ProyectoFinal::RegistroCompras(this);
		registrocompras->Show();
	}

	System::Void RegistroComprasClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->Show();
	}
	//-------------------REGRESAR----------------
	private: System::Void btt_volver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		login->Show();
	}
};
}
