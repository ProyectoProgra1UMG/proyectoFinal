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
	/// Resumen de EliminarRutas
	/// </summary>
	public ref class EliminarRutas : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector = gcnew MySQLConnector();
		MySqlConnection^ connection;
		EliminarRutas(void)
		{
			InitializeComponent();
			connection = gcnew MySqlConnection(connector->connectionString);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EliminarRutas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txb_id;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lbl_eliminar;
	private: System::Windows::Forms::Label^ lbl_id;
	private: System::Windows::Forms::Button^ btt_eliminar;

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
			this->txb_id = (gcnew System::Windows::Forms::TextBox());
			this->lbl_eliminar = (gcnew System::Windows::Forms::Label());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->btt_eliminar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txb_id
			// 
			this->txb_id->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txb_id->Location = System::Drawing::Point(209, 124);
			this->txb_id->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txb_id->Name = L"txb_id";
			this->txb_id->Size = System::Drawing::Size(247, 39);
			this->txb_id->TabIndex = 0;
			// 
			// lbl_eliminar
			// 
			this->lbl_eliminar->AutoSize = true;
			this->lbl_eliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_eliminar->ForeColor = System::Drawing::Color::White;
			this->lbl_eliminar->Location = System::Drawing::Point(201, 45);
			this->lbl_eliminar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_eliminar->Name = L"lbl_eliminar";
			this->lbl_eliminar->Size = System::Drawing::Size(234, 45);
			this->lbl_eliminar->TabIndex = 1;
			this->lbl_eliminar->Text = L"Eliminar Rutas";
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_id->ForeColor = System::Drawing::Color::White;
			this->lbl_id->Location = System::Drawing::Point(152, 120);
			this->lbl_id->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(53, 37);
			this->lbl_id->TabIndex = 2;
			this->lbl_id->Text = L"ID:";
			// 
			// btt_eliminar
			// 
			this->btt_eliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_eliminar->ForeColor = System::Drawing::Color::Black;
			this->btt_eliminar->Location = System::Drawing::Point(259, 188);
			this->btt_eliminar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_eliminar->Name = L"btt_eliminar";
			this->btt_eliminar->Size = System::Drawing::Size(133, 47);
			this->btt_eliminar->TabIndex = 3;
			this->btt_eliminar->Text = L"Eliminar";
			this->btt_eliminar->UseVisualStyleBackColor = true;
			this->btt_eliminar->Click += gcnew System::EventHandler(this, &EliminarRutas::btt_eliminar_Click);
			// 
			// EliminarRutas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(668, 433);
			this->Controls->Add(this->btt_eliminar);
			this->Controls->Add(this->lbl_id);
			this->Controls->Add(this->lbl_eliminar);
			this->Controls->Add(this->txb_id);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"EliminarRutas";
			this->Text = L"EliminarRutas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//---------------------BOTON PARA ELIMINAR---------------------------
	private: System::Void btt_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ id = this->txb_id->Text;
			String^ query = "DELETE FROM lugares WHERE idlugar = @idlugar";
			if (connector->OpenConnection()) {

				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				command->Parameters->AddWithValue("@idlugar", id);

				int resultado = command->ExecuteNonQuery();

				if (resultado > 0) {
					MessageBox::Show("Registro Eliminado!");
				}
				else
				{
					MessageBox::Show("Error al Eliminar!");
				}
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
			txb_id->Text = "";
		}

	}
	};
}
