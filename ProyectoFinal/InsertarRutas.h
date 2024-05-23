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
			this->SuspendLayout();
			// 
			// txb_salida
			// 
			this->txb_salida->Location = System::Drawing::Point(118, 88);
			this->txb_salida->Name = L"txb_salida";
			this->txb_salida->Size = System::Drawing::Size(215, 22);
			this->txb_salida->TabIndex = 0;
			// 
			// txb_precio
			// 
			this->txb_precio->Location = System::Drawing::Point(161, 206);
			this->txb_precio->Name = L"txb_precio";
			this->txb_precio->Size = System::Drawing::Size(172, 22);
			this->txb_precio->TabIndex = 1;
			// 
			// txb_hora
			// 
			this->txb_hora->Location = System::Drawing::Point(233, 324);
			this->txb_hora->Name = L"txb_hora";
			this->txb_hora->Size = System::Drawing::Size(193, 22);
			this->txb_hora->TabIndex = 2;
			// 
			// txb_destino
			// 
			this->txb_destino->Location = System::Drawing::Point(118, 147);
			this->txb_destino->Name = L"txb_destino";
			this->txb_destino->Size = System::Drawing::Size(215, 22);
			this->txb_destino->TabIndex = 3;
			// 
			// lbl_salida
			// 
			this->lbl_salida->AutoSize = true;
			this->lbl_salida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_salida->Location = System::Drawing::Point(75, 88);
			this->lbl_salida->Name = L"lbl_salida";
			this->lbl_salida->Size = System::Drawing::Size(43, 25);
			this->lbl_salida->TabIndex = 4;
			this->lbl_salida->Text = L"De:";
			// 
			// lbl_destino
			// 
			this->lbl_destino->AutoSize = true;
			this->lbl_destino->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_destino->Location = System::Drawing::Point(75, 143);
			this->lbl_destino->Name = L"lbl_destino";
			this->lbl_destino->Size = System::Drawing::Size(32, 25);
			this->lbl_destino->TabIndex = 5;
			this->lbl_destino->Text = L"A:";
			// 
			// lbl_fechas
			// 
			this->lbl_fechas->AutoSize = true;
			this->lbl_fechas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_fechas->Location = System::Drawing::Point(77, 258);
			this->lbl_fechas->Name = L"lbl_fechas";
			this->lbl_fechas->Size = System::Drawing::Size(189, 25);
			this->lbl_fechas->TabIndex = 6;
			this->lbl_fechas->Text = L"Fechas Disponibles:";
			// 
			// lbl_precio
			// 
			this->lbl_precio->AutoSize = true;
			this->lbl_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_precio->Location = System::Drawing::Point(75, 202);
			this->lbl_precio->Name = L"lbl_precio";
			this->lbl_precio->Size = System::Drawing::Size(73, 25);
			this->lbl_precio->TabIndex = 7;
			this->lbl_precio->Text = L"Precio:";
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->Location = System::Drawing::Point(234, 9);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(275, 38);
			this->lbl_encabezado->TabIndex = 8;
			this->lbl_encabezado->Text = L"Insertar Registros";
			// 
			// btt_insertar
			// 
			this->btt_insertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_insertar->Location = System::Drawing::Point(161, 412);
			this->btt_insertar->Name = L"btt_insertar";
			this->btt_insertar->Size = System::Drawing::Size(98, 31);
			this->btt_insertar->TabIndex = 9;
			this->btt_insertar->Text = L"Insertar";
			this->btt_insertar->UseVisualStyleBackColor = true;
			this->btt_insertar->Click += gcnew System::EventHandler(this, &InsertarRutas::btt_insertar_Click);
			// 
			// dtp_fecha
			// 
			this->dtp_fecha->Location = System::Drawing::Point(306, 258);
			this->dtp_fecha->Name = L"dtp_fecha";
			this->dtp_fecha->Size = System::Drawing::Size(200, 22);
			this->dtp_fecha->TabIndex = 10;
			// 
			// lbl_hora
			// 
			this->lbl_hora->AutoSize = true;
			this->lbl_hora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_hora->Location = System::Drawing::Point(80, 320);
			this->lbl_hora->Name = L"lbl_hora";
			this->lbl_hora->Size = System::Drawing::Size(147, 25);
			this->lbl_hora->TabIndex = 11;
			this->lbl_hora->Text = L"Hora de Salida:";
			// 
			// InsertarRutas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 533);
			this->Controls->Add(this->lbl_hora);
			this->Controls->Add(this->dtp_fecha);
			this->Controls->Add(this->btt_insertar);
			this->Controls->Add(this->lbl_encabezado);
			this->Controls->Add(this->lbl_precio);
			this->Controls->Add(this->lbl_fechas);
			this->Controls->Add(this->lbl_destino);
			this->Controls->Add(this->lbl_salida);
			this->Controls->Add(this->txb_destino);
			this->Controls->Add(this->txb_hora);
			this->Controls->Add(this->txb_precio);
			this->Controls->Add(this->txb_salida);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"InsertarRutas";
			this->Text = L"InsertarRutas";
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
