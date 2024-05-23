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
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->Location = System::Drawing::Point(61, 27);
			this->lbl_encabezado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(221, 31);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"Inicio de Sesión";
			// 
			// lbl_usuario
			// 
			this->lbl_usuario->AutoSize = true;
			this->lbl_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_usuario->Location = System::Drawing::Point(127, 81);
			this->lbl_usuario->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_usuario->Name = L"lbl_usuario";
			this->lbl_usuario->Size = System::Drawing::Size(64, 20);
			this->lbl_usuario->TabIndex = 1;
			this->lbl_usuario->Text = L"Usuario";
			// 
			// lbl_contraseña
			// 
			this->lbl_contraseña->AutoSize = true;
			this->lbl_contraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_contraseña->Location = System::Drawing::Point(112, 139);
			this->lbl_contraseña->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_contraseña->Name = L"lbl_contraseña";
			this->lbl_contraseña->Size = System::Drawing::Size(92, 20);
			this->lbl_contraseña->TabIndex = 2;
			this->lbl_contraseña->Text = L"Contraseña";
			// 
			// txb_contraseña
			// 
			this->txb_contraseña->Location = System::Drawing::Point(106, 162);
			this->txb_contraseña->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txb_contraseña->Name = L"txb_contraseña";
			this->txb_contraseña->Size = System::Drawing::Size(106, 20);
			this->txb_contraseña->TabIndex = 3;
			// 
			// txb_usuario
			// 
			this->txb_usuario->Location = System::Drawing::Point(106, 104);
			this->txb_usuario->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txb_usuario->Name = L"txb_usuario";
			this->txb_usuario->Size = System::Drawing::Size(106, 20);
			this->txb_usuario->TabIndex = 4;
			// 
			// btt_enter
			// 
			this->btt_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_enter->Location = System::Drawing::Point(95, 274);
			this->btt_enter->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_enter->Name = L"btt_enter";
			this->btt_enter->Size = System::Drawing::Size(116, 24);
			this->btt_enter->TabIndex = 5;
			this->btt_enter->Text = L"Iniciar Sesión";
			this->btt_enter->UseVisualStyleBackColor = true;
			this->btt_enter->Click += gcnew System::EventHandler(this, &LoginCliente::btt_enter_Click);
			// 
			// btt_registrarse
			// 
			this->btt_registrarse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_registrarse->Location = System::Drawing::Point(215, 331);
			this->btt_registrarse->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_registrarse->Name = L"btt_registrarse";
			this->btt_registrarse->Size = System::Drawing::Size(118, 25);
			this->btt_registrarse->TabIndex = 6;
			this->btt_registrarse->Text = L"Crear Cuenta";
			this->btt_registrarse->UseVisualStyleBackColor = true;
			this->btt_registrarse->Click += gcnew System::EventHandler(this, &LoginCliente::btt_registrarse_Click);
			// 
			// LoginCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(343, 366);
			this->Controls->Add(this->btt_registrarse);
			this->Controls->Add(this->btt_enter);
			this->Controls->Add(this->txb_usuario);
			this->Controls->Add(this->txb_contraseña);
			this->Controls->Add(this->lbl_contraseña);
			this->Controls->Add(this->lbl_usuario);
			this->Controls->Add(this->lbl_encabezado);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"LoginCliente";
			this->Text = L"LoginCliente";
			this->Load += gcnew System::EventHandler(this, &LoginCliente::LoginCliente_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

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
