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




	private: System::Windows::Forms::Button^ btt_crear;
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
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->Location = System::Drawing::Point(56, 7);
			this->lbl_encabezado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(189, 31);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"Crear Cuenta";
			// 
			// lbl_usuario
			// 
			this->lbl_usuario->AutoSize = true;
			this->lbl_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_usuario->Location = System::Drawing::Point(107, 60);
			this->lbl_usuario->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_usuario->Name = L"lbl_usuario";
			this->lbl_usuario->Size = System::Drawing::Size(64, 20);
			this->lbl_usuario->TabIndex = 1;
			this->lbl_usuario->Text = L"Usuario";
			this->lbl_usuario->Click += gcnew System::EventHandler(this, &RegistroClientes::label2_Click);
			// 
			// lbl_contraseña
			// 
			this->lbl_contraseña->AutoSize = true;
			this->lbl_contraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_contraseña->Location = System::Drawing::Point(88, 134);
			this->lbl_contraseña->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_contraseña->Name = L"lbl_contraseña";
			this->lbl_contraseña->Size = System::Drawing::Size(92, 20);
			this->lbl_contraseña->TabIndex = 2;
			this->lbl_contraseña->Text = L"Contraseña";
			// 
			// txb_usuario
			// 
			this->txb_usuario->Location = System::Drawing::Point(82, 83);
			this->txb_usuario->Margin = System::Windows::Forms::Padding(2);
			this->txb_usuario->Name = L"txb_usuario";
			this->txb_usuario->Size = System::Drawing::Size(101, 20);
			this->txb_usuario->TabIndex = 3;
			// 
			// txb_contraseña
			// 
			this->txb_contraseña->Location = System::Drawing::Point(82, 157);
			this->txb_contraseña->Margin = System::Windows::Forms::Padding(2);
			this->txb_contraseña->Name = L"txb_contraseña";
			this->txb_contraseña->Size = System::Drawing::Size(101, 20);
			this->txb_contraseña->TabIndex = 4;
			// 
			// btt_crear
			// 
			this->btt_crear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_crear->Location = System::Drawing::Point(111, 247);
			this->btt_crear->Margin = System::Windows::Forms::Padding(2);
			this->btt_crear->Name = L"btt_crear";
			this->btt_crear->Size = System::Drawing::Size(56, 28);
			this->btt_crear->TabIndex = 5;
			this->btt_crear->Text = L"Crear";
			this->btt_crear->UseVisualStyleBackColor = true;
			this->btt_crear->Click += gcnew System::EventHandler(this, &RegistroClientes::btt_crear_Click);
			// 
			// btt_iniciar
			// 
			this->btt_iniciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_iniciar->Location = System::Drawing::Point(77, 287);
			this->btt_iniciar->Margin = System::Windows::Forms::Padding(2);
			this->btt_iniciar->Name = L"btt_iniciar";
			this->btt_iniciar->Size = System::Drawing::Size(110, 28);
			this->btt_iniciar->TabIndex = 6;
			this->btt_iniciar->Text = L"Iniciar Sesión";
			this->btt_iniciar->UseVisualStyleBackColor = true;
			this->btt_iniciar->Click += gcnew System::EventHandler(this, &RegistroClientes::btt_iniciar_Click);
			// 
			// lbl_nit
			// 
			this->lbl_nit->AutoSize = true;
			this->lbl_nit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_nit->Location = System::Drawing::Point(122, 190);
			this->lbl_nit->Name = L"lbl_nit";
			this->lbl_nit->Size = System::Drawing::Size(34, 20);
			this->lbl_nit->TabIndex = 7;
			this->lbl_nit->Text = L"NIT";
			this->lbl_nit->Click += gcnew System::EventHandler(this, &RegistroClientes::label1_Click);
			// 
			// txb_nit
			// 
			this->txb_nit->Location = System::Drawing::Point(87, 222);
			this->txb_nit->Name = L"txb_nit";
			this->txb_nit->Size = System::Drawing::Size(100, 20);
			this->txb_nit->TabIndex = 8;
			this->txb_nit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &RegistroClientes::txb_nit_KeyPress);
			// 
			// RegistroClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(306, 318);
			this->Controls->Add(this->txb_nit);
			this->Controls->Add(this->lbl_nit);
			this->Controls->Add(this->btt_iniciar);
			this->Controls->Add(this->btt_crear);
			this->Controls->Add(this->txb_contraseña);
			this->Controls->Add(this->txb_usuario);
			this->Controls->Add(this->lbl_contraseña);
			this->Controls->Add(this->lbl_usuario);
			this->Controls->Add(this->lbl_encabezado);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"RegistroClientes";
			this->Text = L"RegistroClientes";
			this->ResumeLayout(false);
			this->PerformLayout();

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

};
}
