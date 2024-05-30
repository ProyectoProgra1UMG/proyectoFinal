#pragma once
#include "MySQLConnector.h"
namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistroClientes
	/// </summary>
	public ref class RegistroClientes : public System::Windows::Forms::Form
	{
	private: Form^ login;
	public:
		MySQLConnector^ connector = gcnew MySQLConnector();
	private: System::Windows::Forms::Label^ lbl_nit;
	private: System::Windows::Forms::TextBox^ txb_nit;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btt_crear;
	public:

	public:

		   MySqlConnection^ connection;
		RegistroClientes(Form^ _login, MySqlConnection^ _connector)
		{
			InitializeComponent();
			login = _login;
			connection = _connector;
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegistroClientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_encabezado;
	private: System::Windows::Forms::Label^ lbl_usuario;
	private: System::Windows::Forms::Label^ lbl_contraseña;
	private: System::Windows::Forms::TextBox^ txb_usuario;
	private: System::Windows::Forms::TextBox^ txb_contraseña;
	protected:





	private: System::Windows::Forms::Button^ btt_iniciar;



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
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			this->lbl_usuario = (gcnew System::Windows::Forms::Label());
			this->lbl_contraseña = (gcnew System::Windows::Forms::Label());
			this->txb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txb_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->btt_crear = (gcnew System::Windows::Forms::Button());
			this->btt_iniciar = (gcnew System::Windows::Forms::Button());
			this->lbl_nit = (gcnew System::Windows::Forms::Label());
			this->txb_nit = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_encabezado->Location = System::Drawing::Point(122, 9);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(153, 46);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"Registro";
			this->lbl_encabezado->Click += gcnew System::EventHandler(this, &RegistroClientes::lbl_encabezado_Click);
			// 
			// lbl_usuario
			// 
			this->lbl_usuario->AutoSize = true;
			this->lbl_usuario->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_usuario->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_usuario->Location = System::Drawing::Point(74, 8);
			this->lbl_usuario->Name = L"lbl_usuario";
			this->lbl_usuario->Size = System::Drawing::Size(84, 28);
			this->lbl_usuario->TabIndex = 1;
			this->lbl_usuario->Text = L"Usuario";
			this->lbl_usuario->Click += gcnew System::EventHandler(this, &RegistroClientes::label2_Click);
			// 
			// lbl_contraseña
			// 
			this->lbl_contraseña->AutoSize = true;
			this->lbl_contraseña->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_contraseña->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_contraseña->Location = System::Drawing::Point(60, 70);
			this->lbl_contraseña->Name = L"lbl_contraseña";
			this->lbl_contraseña->Size = System::Drawing::Size(118, 28);
			this->lbl_contraseña->TabIndex = 2;
			this->lbl_contraseña->Text = L"Contraseña";
			this->lbl_contraseña->Click += gcnew System::EventHandler(this, &RegistroClientes::lbl_contraseña_Click);
			// 
			// txb_usuario
			// 
			this->txb_usuario->Location = System::Drawing::Point(46, 38);
			this->txb_usuario->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txb_usuario->Name = L"txb_usuario";
			this->txb_usuario->Size = System::Drawing::Size(133, 22);
			this->txb_usuario->TabIndex = 3;
			// 
			// txb_contraseña
			// 
			this->txb_contraseña->Location = System::Drawing::Point(46, 100);
			this->txb_contraseña->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txb_contraseña->Name = L"txb_contraseña";
			this->txb_contraseña->Size = System::Drawing::Size(133, 22);
			this->txb_contraseña->TabIndex = 4;
			// 
			// btt_crear
			// 
			this->btt_crear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->btt_crear->FlatAppearance->BorderSize = 0;
			this->btt_crear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_crear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_crear->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btt_crear->Location = System::Drawing::Point(79, 212);
			this->btt_crear->Margin = System::Windows::Forms::Padding(2);
			this->btt_crear->Name = L"btt_crear";
			this->btt_crear->Size = System::Drawing::Size(75, 34);
			this->btt_crear->TabIndex = 2;
			this->btt_crear->Text = L"Crear";
			this->btt_crear->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btt_crear->UseVisualStyleBackColor = false;
			this->btt_crear->Click += gcnew System::EventHandler(this, &RegistroClientes::btt_crear_Click);
			// 
			// btt_iniciar
			// 
			this->btt_iniciar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_iniciar->FlatAppearance->BorderSize = 0;
			this->btt_iniciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_iniciar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_iniciar->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btt_iniciar->Location = System::Drawing::Point(130, 346);
			this->btt_iniciar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btt_iniciar->Name = L"btt_iniciar";
			this->btt_iniciar->Size = System::Drawing::Size(147, 34);
			this->btt_iniciar->TabIndex = 6;
			this->btt_iniciar->Text = L"Iniciar Sesión";
			this->btt_iniciar->UseVisualStyleBackColor = false;
			this->btt_iniciar->Click += gcnew System::EventHandler(this, &RegistroClientes::btt_iniciar_Click);
			// 
			// lbl_nit
			// 
			this->lbl_nit->AutoSize = true;
			this->lbl_nit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_nit->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_nit->Location = System::Drawing::Point(89, 133);
			this->lbl_nit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_nit->Name = L"lbl_nit";
			this->lbl_nit->Size = System::Drawing::Size(46, 28);
			this->lbl_nit->TabIndex = 7;
			this->lbl_nit->Text = L"NIT";
			this->lbl_nit->Click += gcnew System::EventHandler(this, &RegistroClientes::label1_Click);
			// 
			// txb_nit
			// 
			this->txb_nit->Location = System::Drawing::Point(46, 165);
			this->txb_nit->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txb_nit->Name = L"txb_nit";
			this->txb_nit->Size = System::Drawing::Size(132, 22);
			this->txb_nit->TabIndex = 8;
			this->txb_nit->TextChanged += gcnew System::EventHandler(this, &RegistroClientes::txb_nit_TextChanged);
			this->txb_nit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RegistroClientes::txb_nit_KeyPress);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btt_crear);
			this->panel1->Controls->Add(this->txb_nit);
			this->panel1->Controls->Add(this->lbl_usuario);
			this->panel1->Controls->Add(this->lbl_nit);
			this->panel1->Controls->Add(this->txb_usuario);
			this->panel1->Controls->Add(this->lbl_contraseña);
			this->panel1->Controls->Add(this->txb_contraseña);
			this->panel1->Location = System::Drawing::Point(84, 71);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(227, 263);
			this->panel1->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->panel2->Controls->Add(this->lbl_encabezado);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(410, 65);
			this->panel2->TabIndex = 10;
			// 
			// RegistroClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(408, 391);
			this->Controls->Add(this->btt_iniciar);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RegistroClientes";
			this->Text = L"RegistroClientes";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btt_iniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		login->Show();
	}

	private: System::Void btt_crear_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Obtener el usuario y la contraseña ingresados por el usuario
			String^ nombre = this->txb_usuario->Text;
			String^ contraseña = this->txb_contraseña->Text;
			String^ nit = this->txb_nit->Text;

			if (String::IsNullOrEmpty(nombre) || String::IsNullOrEmpty(contraseña) || String::IsNullOrEmpty(nit)) {
				MessageBox::Show("Por favor, complete todos los campos."); 
				return; 
			}
			// Consulta SQL para insertar los datos del usuario
			String^ query = "INSERT INTO clientes (nombre, contraseña, nit) VALUES (@nombre, @contraseña, @nit)";

			// Abrir la conexión antes de ejecutar la consulta
			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				command->Parameters->AddWithValue("@nombre", nombre);
				command->Parameters->AddWithValue("@contraseña", contraseña);
				command->Parameters->AddWithValue("@nit", nit);

				int resultado = command->ExecuteNonQuery();

				if (resultado > 0) {
					MessageBox::Show("Cuenta Creada.");
				}
				else
				{
					MessageBox::Show("Error al crear cuenta.");
				}

				// Cerrar la conexión después de ejecutar la consulta
				connector->CloseConnection();
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
		this->txb_nit->Text = "";
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

//---------------------------PARA NO INGRESAR CARACTERES A NIT----------------------------
	   System::Void txb_nit_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		   // Verifica si el caracter ingresado no es un número ni la tecla de retroceso
		   if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			   // Establece Handled en true para indicar que el evento ha sido manejado
			   e->Handled = true;
		   }
	   }

private: System::Void lbl_encabezado_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_contraseña_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txb_nit_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
