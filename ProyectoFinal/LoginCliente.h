#pragma once
#include "MySQLConnector.h"
#include "RegistroClientes.h"
#include "CompraTicket.h"
#include "CompraTicketClass.h"
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
	public:
		TickeClass^ ticketClass;
		LoginCliente(void)
		{
			InitializeComponent();
			connection = gcnew MySqlConnection(connector->connectionString);
			ticketClass = gcnew TickeClass(connector);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::Label^ lbl_contraseña;
	private: System::Windows::Forms::TextBox^ txb_contraseña;

	private: System::Windows::Forms::TextBox^ txb_usuario;

	private: System::Windows::Forms::Button^ btt_enter;
	private: System::Windows::Forms::Button^ btt_registrarse;



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
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			this->lbl_usuario = (gcnew System::Windows::Forms::Label());
			this->lbl_contraseña = (gcnew System::Windows::Forms::Label());
			this->txb_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->txb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->btt_enter = (gcnew System::Windows::Forms::Button());
			this->btt_registrarse = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->ForeColor = System::Drawing::Color::White;
			this->lbl_encabezado->Location = System::Drawing::Point(41, 17);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(270, 46);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"Inicio de Sesión";
			// 
			// lbl_usuario
			// 
			this->lbl_usuario->AutoSize = true;
			this->lbl_usuario->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_usuario->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_usuario->Location = System::Drawing::Point(45, 81);
			this->lbl_usuario->Name = L"lbl_usuario";
			this->lbl_usuario->Size = System::Drawing::Size(79, 28);
			this->lbl_usuario->TabIndex = 1;
			this->lbl_usuario->Text = L"Usuario";
			// 
			// lbl_contraseña
			// 
			this->lbl_contraseña->AutoSize = true;
			this->lbl_contraseña->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_contraseña->ForeColor = System::Drawing::Color::White;
			this->lbl_contraseña->Location = System::Drawing::Point(45, 165);
			this->lbl_contraseña->Name = L"lbl_contraseña";
			this->lbl_contraseña->Size = System::Drawing::Size(110, 28);
			this->lbl_contraseña->TabIndex = 2;
			this->lbl_contraseña->Text = L"Contraseña";
			// 
			// txb_contraseña
			// 
			this->txb_contraseña->Location = System::Drawing::Point(51, 193);
			this->txb_contraseña->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txb_contraseña->Name = L"txb_contraseña";
			this->txb_contraseña->Size = System::Drawing::Size(252, 22);
			this->txb_contraseña->TabIndex = 3;
			this->txb_contraseña->UseSystemPasswordChar = true;
			// 
			// txb_usuario
			// 
			this->txb_usuario->BackColor = System::Drawing::Color::White;
			this->txb_usuario->Location = System::Drawing::Point(51, 110);
			this->txb_usuario->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txb_usuario->Name = L"txb_usuario";
			this->txb_usuario->Size = System::Drawing::Size(252, 22);
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
			this->btt_enter->Location = System::Drawing::Point(85, 249);
			this->btt_enter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btt_enter->Name = L"btt_enter";
			this->btt_enter->Size = System::Drawing::Size(184, 42);
			this->btt_enter->TabIndex = 5;
			this->btt_enter->Text = L"Iniciar Sesión";
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
			this->btt_registrarse->Location = System::Drawing::Point(185, 305);
			this->btt_registrarse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btt_registrarse->Name = L"btt_registrarse";
			this->btt_registrarse->Size = System::Drawing::Size(113, 37);
			this->btt_registrarse->TabIndex = 6;
			this->btt_registrarse->Text = L"Crear Cuenta";
			this->btt_registrarse->UseVisualStyleBackColor = false;
			this->btt_registrarse->Click += gcnew System::EventHandler(this, &LoginCliente::btt_registrarse_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->lbl_encabezado);
			this->panel1->Controls->Add(this->btt_registrarse);
			this->panel1->Controls->Add(this->lbl_usuario);
			this->panel1->Controls->Add(this->btt_enter);
			this->panel1->Controls->Add(this->txb_usuario);
			this->panel1->Controls->Add(this->txb_contraseña);
			this->panel1->Controls->Add(this->lbl_contraseña);
			this->panel1->Location = System::Drawing::Point(116, 42);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(367, 379);
			this->panel1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(47, 316);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 19);
			this->label1->TabIndex = 7;
			this->label1->Text = L"No tienes cuenta\?";
			// 
			// LoginCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(605, 454);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LoginCliente";
			this->Text = L"LoginCliente";
			this->Load += gcnew System::EventHandler(this, &LoginCliente::LoginCliente_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btt_registrarse_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ProyectoFinal::RegistroClientes^ registroclientes = gcnew ProyectoFinal::RegistroClientes(this, connection);
		registroclientes->Show();

		
		
	}
		   System::Void RegistroClientesClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			   this->Show();
		   }
		  
private: System::Void btt_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{


		// Obtener el usuario y la contraseña ingresados por el usuario
		String^ usuario = txb_usuario->Text;
		String^ contraseña = txb_contraseña->Text;
		// Consulta SQL para verificar si el usuario y la contraseña son válidos
		String^ query = "SELECT COUNT(*) FROM clientes WHERE nombre = '" + usuario + "' AND contraseña = '" + contraseña + "'";

		// Abrir la conexión antes de ejecutar la consulta
		if (connector->OpenConnection()) {
			MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
			int count = Convert::ToInt32(command->ExecuteScalar());

			// Cerrar la conexión después de ejecutar la consulta
			connector->CloseConnection();

			// Verificar si se encontró una coincidencia en la base de datos
			if (count > 0) {
				ticketClass->nombreCliente(txb_usuario->Text);
				ProyectoFinal::CompraTicket^ compraticket = gcnew ProyectoFinal::CompraTicket(ticketClass);
				compraticket->Show(); 
				Close(); 
			}
			else {
				MessageBox::Show("Usuario o contraseña incorrectos. Por favor, inténtelo de nuevo.");
				connector->CloseConnection();
			}
		}
		else {
			MessageBox::Show("Conector no ejecutado.");
		}





	}
	catch (Exception^ ex) {
		MessageBox::Show(" error: " + ex->Message);
		connector->CloseConnection();
	}
	finally {
		if (connection->State == ConnectionState::Open) {
			connector->CloseConnection();
		}
	}


	this->txb_usuario->Text = "";
	this->txb_contraseña->Text = "";
}
private: System::Void LoginCliente_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}
