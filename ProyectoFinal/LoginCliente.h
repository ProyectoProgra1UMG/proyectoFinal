#pragma once
#include "MySQLConnector.h"
#include "RegistroClientes.h"
#include "CompraTicket.h"
#include "CompraTicketClass.h"
#include "MenuEmpleados.h"
#include "loginClass.h"
namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginCliente
	/// </summary>
	public ref class LoginCliente : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector = gcnew MySQLConnector(); 
		MySqlConnection^ connection; 
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btt_ver;
	private: System::Windows::Forms::ComboBox^ cbx_Usuario;


	public:
		TickeClass^ ticketClass;
		LoginClass^ loginClass;
		LoginCliente(void)
		{
			InitializeComponent();
			connection = gcnew MySqlConnection(connector->connectionString);
			ticketClass = gcnew TickeClass(connector);
			loginClass = gcnew LoginClass(connector);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~LoginCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_encabezado;
	protected:
	private: System::Windows::Forms::Label^ lbl_usuario;
	private: System::Windows::Forms::Label^ lbl_contrase�a;
	private: System::Windows::Forms::TextBox^ txb_contrase�a;

	private: System::Windows::Forms::TextBox^ txb_usuario;

	private: System::Windows::Forms::Button^ btt_enter;
	private: System::Windows::Forms::Button^ btt_registrarse;



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
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			this->lbl_usuario = (gcnew System::Windows::Forms::Label());
			this->lbl_contrase�a = (gcnew System::Windows::Forms::Label());
			this->txb_contrase�a = (gcnew System::Windows::Forms::TextBox());
			this->txb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->btt_enter = (gcnew System::Windows::Forms::Button());
			this->btt_registrarse = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btt_ver = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cbx_Usuario = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->ForeColor = System::Drawing::Color::White;
			this->lbl_encabezado->Location = System::Drawing::Point(31, 14);
			this->lbl_encabezado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(217, 37);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"Inicio de Sesi�n";
			// 
			// lbl_usuario
			// 
			this->lbl_usuario->AutoSize = true;
			this->lbl_usuario->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lbl_usuario->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_usuario->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_usuario->Location = System::Drawing::Point(34, 66);
			this->lbl_usuario->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_usuario->Name = L"lbl_usuario";
			this->lbl_usuario->Size = System::Drawing::Size(64, 21);
			this->lbl_usuario->TabIndex = 1;
			this->lbl_usuario->Text = L"Usuario";
			// 
			// lbl_contrase�a
			// 
			this->lbl_contrase�a->AutoSize = true;
			this->lbl_contrase�a->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lbl_contrase�a->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_contrase�a->ForeColor = System::Drawing::Color::White;
			this->lbl_contrase�a->Location = System::Drawing::Point(34, 134);
			this->lbl_contrase�a->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_contrase�a->Name = L"lbl_contrase�a";
			this->lbl_contrase�a->Size = System::Drawing::Size(89, 21);
			this->lbl_contrase�a->TabIndex = 2;
			this->lbl_contrase�a->Text = L"Contrase�a";
			// 
			// txb_contrase�a
			// 
			this->txb_contrase�a->Location = System::Drawing::Point(38, 157);
			this->txb_contrase�a->Margin = System::Windows::Forms::Padding(2);
			this->txb_contrase�a->Name = L"txb_contrase�a";
			this->txb_contrase�a->Size = System::Drawing::Size(190, 20);
			this->txb_contrase�a->TabIndex = 3;
			this->txb_contrase�a->UseSystemPasswordChar = true;
			// 
			// txb_usuario
			// 
			this->txb_usuario->BackColor = System::Drawing::Color::White;
			this->txb_usuario->Location = System::Drawing::Point(38, 89);
			this->txb_usuario->Margin = System::Windows::Forms::Padding(2);
			this->txb_usuario->Name = L"txb_usuario";
			this->txb_usuario->Size = System::Drawing::Size(190, 20);
			this->txb_usuario->TabIndex = 4;
			// 
			// btt_enter
			// 
			this->btt_enter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_enter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btt_enter->FlatAppearance->BorderSize = 0;
			this->btt_enter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_enter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_enter->ForeColor = System::Drawing::Color::White;
			this->btt_enter->Location = System::Drawing::Point(64, 202);
			this->btt_enter->Margin = System::Windows::Forms::Padding(2);
			this->btt_enter->Name = L"btt_enter";
			this->btt_enter->Size = System::Drawing::Size(138, 34);
			this->btt_enter->TabIndex = 5;
			this->btt_enter->Text = L"Iniciar Sesi�n";
			this->btt_enter->UseVisualStyleBackColor = false;
			this->btt_enter->Click += gcnew System::EventHandler(this, &LoginCliente::btt_enter_Click);
			// 
			// btt_registrarse
			// 
			this->btt_registrarse->BackColor = System::Drawing::Color::Transparent;
			this->btt_registrarse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btt_registrarse->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_registrarse->FlatAppearance->BorderSize = 0;
			this->btt_registrarse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_registrarse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_registrarse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_registrarse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_registrarse->ForeColor = System::Drawing::Color::White;
			this->btt_registrarse->Location = System::Drawing::Point(139, 248);
			this->btt_registrarse->Margin = System::Windows::Forms::Padding(2);
			this->btt_registrarse->Name = L"btt_registrarse";
			this->btt_registrarse->Size = System::Drawing::Size(85, 30);
			this->btt_registrarse->TabIndex = 6;
			this->btt_registrarse->Text = L"Crear Cuenta";
			this->btt_registrarse->UseVisualStyleBackColor = false;
			this->btt_registrarse->Click += gcnew System::EventHandler(this, &LoginCliente::btt_registrarse_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->panel1->Controls->Add(this->btt_ver);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->lbl_encabezado);
			this->panel1->Controls->Add(this->btt_registrarse);
			this->panel1->Controls->Add(this->lbl_usuario);
			this->panel1->Controls->Add(this->btt_enter);
			this->panel1->Controls->Add(this->txb_usuario);
			this->panel1->Controls->Add(this->txb_contrase�a);
			this->panel1->Controls->Add(this->lbl_contrase�a);
			this->panel1->Location = System::Drawing::Point(148, 35);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(275, 308);
			this->panel1->TabIndex = 7;
			// 
			// btt_ver
			// 
			this->btt_ver->BackColor = System::Drawing::Color::White;
			this->btt_ver->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btt_ver->FlatAppearance->BorderSize = 0;
			this->btt_ver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_ver->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_ver->Location = System::Drawing::Point(233, 157);
			this->btt_ver->Name = L"btt_ver";
			this->btt_ver->Size = System::Drawing::Size(28, 20);
			this->btt_ver->TabIndex = 8;
			this->btt_ver->Text = L"ver";
			this->btt_ver->UseVisualStyleBackColor = false;
			this->btt_ver->Click += gcnew System::EventHandler(this, &LoginCliente::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(35, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"No tienes cuenta\?";
			// 
			// cbx_Usuario
			// 
			this->cbx_Usuario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->cbx_Usuario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbx_Usuario->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbx_Usuario->ForeColor = System::Drawing::Color::White;
			this->cbx_Usuario->FormattingEnabled = true;
			this->cbx_Usuario->Location = System::Drawing::Point(12, 12);
			this->cbx_Usuario->Name = L"cbx_Usuario";
			this->cbx_Usuario->Size = System::Drawing::Size(105, 25);
			this->cbx_Usuario->TabIndex = 8;
			// 
			// LoginCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(519, 369);
			this->Controls->Add(this->cbx_Usuario);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"LoginCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginCliente";
			this->Load += gcnew System::EventHandler(this, &LoginCliente::LoginCliente_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	//--------------------------DIRIGE AL FORM DE REGISTRARSE----------------------------------
	private: System::Void btt_registrarse_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ProyectoFinal::RegistroClientes^ registroclientes = gcnew ProyectoFinal::RegistroClientes(this, connection);
		registroclientes->Show();
	}

	//--------------------------DIRIGE AL FORM DE REGISTRARSE----------------------------------
	System::Void RegistroClientesClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		this->Show();
	}
		  
//----------------------------------INICIA SESION----------------------------------
private: System::Void btt_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ opcion = cbx_Usuario->Text;
	if (opcion == "Cliente") {
		loginClass->getLoginClientes(txb_usuario, txb_contrase�a, ticketClass, this);
	}
	else if (opcion == "Empleado") {
		loginClass->getLoginEmpleado(txb_usuario, txb_contrase�a, ticketClass, this);
	}
	else
	{
		MessageBox::Show("OPCION INCORRECTA!");
	}
}
	//--------------------RELLENA EL COMBOX--------------------------------
	private: System::Void LoginCliente_Load(System::Object^ sender, System::EventArgs^ e) {
		cbx_Usuario->Items->Add("Cliente");
		cbx_Usuario->Items->Add("Empleado");
		cbx_Usuario->Text = "Cliente";
	}


	//-------------------------BOTON DE VER CONTRASE�A------------------------------
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		bool viendo = txb_contrase�a->UseSystemPasswordChar;
		if (viendo)
		{
			txb_contrase�a->UseSystemPasswordChar = false;
		}
		else
		{
			txb_contrase�a->UseSystemPasswordChar = true;
		}
	}
};
}
