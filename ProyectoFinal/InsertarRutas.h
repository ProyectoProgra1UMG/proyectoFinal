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
	/// Resumen de InsertarRutas
	/// </summary>
	public ref class InsertarRutas : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector = gcnew MySQLConnector();
	private: System::Windows::Forms::Panel^ panel1;
	public:

	public:



		   MySqlConnection^ connection;
		InsertarRutas(void)

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
		~InsertarRutas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txb_salida;
	private: System::Windows::Forms::TextBox^ txb_precio;
	private: System::Windows::Forms::TextBox^ txb_hora;

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txb_destino;

	private: System::Windows::Forms::Label^ lbl_salida;
	private: System::Windows::Forms::Label^ lbl_destino;
	private: System::Windows::Forms::Label^ lbl_fechas;





	private: System::Windows::Forms::Label^ lbl_precio;

	private: System::Windows::Forms::Label^ lbl_encabezado;
	private: System::Windows::Forms::Button^ btt_insertar;
	private: System::Windows::Forms::DateTimePicker^ dtp_fecha;

	private: System::Windows::Forms::Label^ lbl_hora;



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
			this->txb_salida = (gcnew System::Windows::Forms::TextBox());
			this->txb_precio = (gcnew System::Windows::Forms::TextBox());
			this->txb_hora = (gcnew System::Windows::Forms::TextBox());
			this->txb_destino = (gcnew System::Windows::Forms::TextBox());
			this->lbl_salida = (gcnew System::Windows::Forms::Label());
			this->lbl_destino = (gcnew System::Windows::Forms::Label());
			this->lbl_fechas = (gcnew System::Windows::Forms::Label());
			this->lbl_precio = (gcnew System::Windows::Forms::Label());
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			this->btt_insertar = (gcnew System::Windows::Forms::Button());
			this->dtp_fecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbl_hora = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txb_salida
			// 
			this->txb_salida->Location = System::Drawing::Point(215, 24);
			this->txb_salida->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txb_salida->Name = L"txb_salida";
			this->txb_salida->Size = System::Drawing::Size(162, 20);
			this->txb_salida->TabIndex = 0;
			// 
			// txb_precio
			// 
			this->txb_precio->Location = System::Drawing::Point(215, 108);
			this->txb_precio->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txb_precio->Name = L"txb_precio";
			this->txb_precio->Size = System::Drawing::Size(162, 20);
			this->txb_precio->TabIndex = 1;
			// 
			// txb_hora
			// 
			this->txb_hora->Location = System::Drawing::Point(215, 194);
			this->txb_hora->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txb_hora->Name = L"txb_hora";
			this->txb_hora->Size = System::Drawing::Size(162, 20);
			this->txb_hora->TabIndex = 2;
			// 
			// txb_destino
			// 
			this->txb_destino->Location = System::Drawing::Point(215, 69);
			this->txb_destino->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txb_destino->Name = L"txb_destino";
			this->txb_destino->Size = System::Drawing::Size(162, 20);
			this->txb_destino->TabIndex = 3;
			// 
			// lbl_salida
			// 
			this->lbl_salida->AutoSize = true;
			this->lbl_salida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->lbl_salida->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_salida->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_salida->Location = System::Drawing::Point(171, 21);
			this->lbl_salida->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_salida->Name = L"lbl_salida";
			this->lbl_salida->Size = System::Drawing::Size(35, 21);
			this->lbl_salida->TabIndex = 4;
			this->lbl_salida->Text = L"De:";
			// 
			// lbl_destino
			// 
			this->lbl_destino->AutoSize = true;
			this->lbl_destino->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->lbl_destino->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_destino->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_destino->Location = System::Drawing::Point(181, 66);
			this->lbl_destino->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_destino->Name = L"lbl_destino";
			this->lbl_destino->Size = System::Drawing::Size(25, 21);
			this->lbl_destino->TabIndex = 5;
			this->lbl_destino->Text = L"A:";
			// 
			// lbl_fechas
			// 
			this->lbl_fechas->AutoSize = true;
			this->lbl_fechas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->lbl_fechas->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_fechas->ForeColor = System::Drawing::Color::White;
			this->lbl_fechas->Location = System::Drawing::Point(52, 149);
			this->lbl_fechas->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_fechas->Name = L"lbl_fechas";
			this->lbl_fechas->Size = System::Drawing::Size(159, 21);
			this->lbl_fechas->TabIndex = 6;
			this->lbl_fechas->Text = L"Fechas Disponibles:";
			// 
			// lbl_precio
			// 
			this->lbl_precio->AutoSize = true;
			this->lbl_precio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->lbl_precio->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_precio->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_precio->Location = System::Drawing::Point(144, 105);
			this->lbl_precio->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_precio->Name = L"lbl_precio";
			this->lbl_precio->Size = System::Drawing::Size(62, 21);
			this->lbl_precio->TabIndex = 7;
			this->lbl_precio->Text = L"Precio:";
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_encabezado->Location = System::Drawing::Point(217, 8);
			this->lbl_encabezado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(245, 37);
			this->lbl_encabezado->TabIndex = 8;
			this->lbl_encabezado->Text = L"Insertar Registros";
			// 
			// btt_insertar
			// 
			this->btt_insertar->BackColor = System::Drawing::Color::White;
			this->btt_insertar->FlatAppearance->BorderSize = 0;
			this->btt_insertar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_insertar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_insertar->ForeColor = System::Drawing::Color::Black;
			this->btt_insertar->Location = System::Drawing::Point(162, 250);
			this->btt_insertar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btt_insertar->Name = L"btt_insertar";
			this->btt_insertar->Size = System::Drawing::Size(117, 39);
			this->btt_insertar->TabIndex = 9;
			this->btt_insertar->Text = L"Insertar";
			this->btt_insertar->UseVisualStyleBackColor = false;
			this->btt_insertar->Click += gcnew System::EventHandler(this, &InsertarRutas::btt_insertar_Click);
			// 
			// dtp_fecha
			// 
			this->dtp_fecha->Location = System::Drawing::Point(215, 150);
			this->dtp_fecha->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dtp_fecha->Name = L"dtp_fecha";
			this->dtp_fecha->Size = System::Drawing::Size(151, 20);
			this->dtp_fecha->TabIndex = 10;
			// 
			// lbl_hora
			// 
			this->lbl_hora->AutoSize = true;
			this->lbl_hora->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->lbl_hora->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_hora->ForeColor = System::Drawing::Color::White;
			this->lbl_hora->Location = System::Drawing::Point(81, 194);
			this->lbl_hora->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_hora->Name = L"lbl_hora";
			this->lbl_hora->Size = System::Drawing::Size(125, 21);
			this->lbl_hora->TabIndex = 11;
			this->lbl_hora->Text = L"Hora de Salida:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->panel1->Controls->Add(this->lbl_hora);
			this->panel1->Controls->Add(this->lbl_salida);
			this->panel1->Controls->Add(this->lbl_precio);
			this->panel1->Controls->Add(this->dtp_fecha);
			this->panel1->Controls->Add(this->lbl_destino);
			this->panel1->Controls->Add(this->txb_hora);
			this->panel1->Controls->Add(this->txb_destino);
			this->panel1->Controls->Add(this->txb_salida);
			this->panel1->Controls->Add(this->btt_insertar);
			this->panel1->Controls->Add(this->lbl_fechas);
			this->panel1->Controls->Add(this->txb_precio);
			this->panel1->Location = System::Drawing::Point(101, 49);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(457, 348);
			this->panel1->TabIndex = 12;
			// 
			// InsertarRutas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(668, 433);
			this->Controls->Add(this->lbl_encabezado);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"InsertarRutas";
			this->Text = L"InsertarRutas";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btt_insertar_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Obtener el usuario y la contraseña ingresados por el usuario
			String^ salida = this->txb_salida->Text;
			String^ destino = this->txb_destino->Text;
			String^ precio = this->txb_precio->Text;
			String^ fecha = this->dtp_fecha->Text;
			String^ hora = this->txb_hora->Text;


			if (String::IsNullOrEmpty(salida) || String::IsNullOrEmpty(destino) || String::IsNullOrEmpty(precio) || String::IsNullOrEmpty(fecha) || String::IsNullOrEmpty(hora)) {
				MessageBox::Show("Por favor, complete todos los campos.");
				return;
			}

			// Consulta SQL para insertar los datos del usuario
			String^ query = "INSERT INTO lugares (lugarSalida, lugarDestino, precio, fecha, hora) VALUES (@lugarSalida, @lugarDestino, @precio, @fecha, @hora)";

			// Abrir la conexión antes de ejecutar la consulta
			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				command->Parameters->AddWithValue("@lugarSalida", salida);
				command->Parameters->AddWithValue("@lugarDestino", destino);
				command->Parameters->AddWithValue("@precio", precio);
				command->Parameters->AddWithValue("@fecha", fecha);
				command->Parameters->AddWithValue("@hora", hora);

				int resultado = command->ExecuteNonQuery();

				if (resultado > 0) {
					MessageBox::Show("Registro Guardado!");
				}
				else
				{
					MessageBox::Show("Error al Guardar!");
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

		this->txb_salida->Text = "";
		this->txb_destino->Text = "";
		this->txb_precio->Text = "";
		this->txb_hora->Text = "";
	}
};
}
