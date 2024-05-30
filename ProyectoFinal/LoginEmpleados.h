#pragma once
#include "MySQLConnector.h"
#include "MenuEmpleados.h"
namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginEmpleados
	/// </summary>
	public ref class LoginEmpleados : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector = gcnew MySQLConnector();
	private: System::Windows::Forms::Label^ lbl_encabezado;
	private: System::Windows::Forms::Panel^ panel1;
	public:
		MySqlConnection^ connection;
		LoginEmpleados(void)
		{
			InitializeComponent();
			connection = gcnew MySqlConnection(connector->connectionString);
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~LoginEmpleados()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ lbl_usuario;
	private: System::Windows::Forms::Label^ lbl_contrase�a;
	private: System::Windows::Forms::TextBox^ txb_usuario;

	private: System::Windows::Forms::TextBox^ txb_contrase�a;


	private: System::Windows::Forms::Button^ btt_login;



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
			this->lbl_usuario = (gcnew System::Windows::Forms::Label());
			this->lbl_contrase�a = (gcnew System::Windows::Forms::Label());
			this->txb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txb_contrase�a = (gcnew System::Windows::Forms::TextBox());
			this->btt_login = (gcnew System::Windows::Forms::Button());
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_usuario
			// 
			this->lbl_usuario->AutoSize = true;
			this->lbl_usuario->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_usuario->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_usuario->Location = System::Drawing::Point(97, 97);
			this->lbl_usuario->Name = L"lbl_usuario";
			this->lbl_usuario->Size = System::Drawing::Size(79, 28);
			this->lbl_usuario->TabIndex = 1;
			this->lbl_usuario->Text = L"Usuario";
			this->lbl_usuario->Click += gcnew System::EventHandler(this, &LoginEmpleados::lbl_usuario_Click);
			// 
			// lbl_contrase�a
			// 
			this->lbl_contrase�a->AutoSize = true;
			this->lbl_contrase�a->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_contrase�a->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_contrase�a->Location = System::Drawing::Point(97, 165);
			this->lbl_contrase�a->Name = L"lbl_contrase�a";
			this->lbl_contrase�a->Size = System::Drawing::Size(110, 28);
			this->lbl_contrase�a->TabIndex = 2;
			this->lbl_contrase�a->Text = L"Contrase�a";
			// 
			// txb_usuario
			// 
			this->txb_usuario->Location = System::Drawing::Point(102, 128);
			this->txb_usuario->Name = L"txb_usuario";
			this->txb_usuario->Size = System::Drawing::Size(137, 22);
			this->txb_usuario->TabIndex = 3;
			this->txb_usuario->TextChanged += gcnew System::EventHandler(this, &LoginEmpleados::txb_usuario_TextChanged);
			// 
			// txb_contrase�a
			// 
			this->txb_contrase�a->Location = System::Drawing::Point(102, 196);
			this->txb_contrase�a->Name = L"txb_contrase�a";
			this->txb_contrase�a->Size = System::Drawing::Size(135, 22);
			this->txb_contrase�a->TabIndex = 4;
			this->txb_contrase�a->UseSystemPasswordChar = true;
			// 
			// btt_login
			// 
			this->btt_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_login->FlatAppearance->BorderSize = 0;
			this->btt_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_login->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btt_login->Location = System::Drawing::Point(102, 271);
			this->btt_login->Name = L"btt_login";
			this->btt_login->Size = System::Drawing::Size(151, 32);
			this->btt_login->TabIndex = 5;
			this->btt_login->Text = L"Iniciar Sesi�n";
			this->btt_login->UseVisualStyleBackColor = false;
			this->btt_login->Click += gcnew System::EventHandler(this, &LoginEmpleados::btt_login_Click);
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_encabezado->Location = System::Drawing::Point(48, 20);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(279, 46);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"Inicio de Sesion ";
			this->lbl_encabezado->Click += gcnew System::EventHandler(this, &LoginEmpleados::lbl_encabezado_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->panel1->Controls->Add(this->btt_login);
			this->panel1->Controls->Add(this->lbl_encabezado);
			this->panel1->Controls->Add(this->txb_contrase�a);
			this->panel1->Controls->Add(this->lbl_usuario);
			this->panel1->Controls->Add(this->lbl_contrase�a);
			this->panel1->Controls->Add(this->txb_usuario);
			this->panel1->Location = System::Drawing::Point(42, 42);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(363, 334);
			this->panel1->TabIndex = 6;
			// 
			// LoginEmpleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(439, 452);
			this->Controls->Add(this->panel1);
			this->Name = L"LoginEmpleados";
			this->Text = L"LoginEmpleados";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btt_login_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Obtener el usuario y la contrase�a ingresados por el usuario
			String^ usuario = txb_usuario->Text;
			String^ contrase�a = txb_contrase�a->Text;

			// Consulta SQL para verificar si el usuario y la contrase�a son v�lidos
			String^ query = "SELECT COUNT(*) FROM empleados WHERE nombre = '" + usuario + "' AND contrase�a = '" + contrase�a + "'";

			// Abrir la conexi�n antes de ejecutar la consulta
			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				int count = Convert::ToInt32(command->ExecuteScalar());

				// Cerrar la conexi�n despu�s de ejecutar la consulta
				connector->CloseConnection();

				// Verificar si se encontr� una coincidencia en la base de datos
				if (count > 0) {
					ProyectoFinal::MenuEmpleados^ menuempleados = gcnew ProyectoFinal::MenuEmpleados();
					menuempleados->Show();
					Close();
				}
				else {
					MessageBox::Show("Usuario o contrase�a incorrectos. Por favor, int�ntelo de nuevo.");
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
		this->txb_contrase�a->Text = "";
	}
private: System::Void lbl_encabezado_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_usuario_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txb_usuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
