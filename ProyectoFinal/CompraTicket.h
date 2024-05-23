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
	/// Resumen de CompraTicket
	/// </summary>
	public ref class CompraTicket : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector = gcnew MySQLConnector();
	private: System::Windows::Forms::Label^ lbl_dedos;
	private: System::Windows::Forms::Label^ lbl_adedos;
	private: System::Windows::Forms::Label^ lbl_fechados;
	private: System::Windows::Forms::Label^ lbl_hora;
	private: System::Windows::Forms::Label^ lbl_preciodos;
	private: System::Windows::Forms::Label^ lbl_totaldos;
	public:

	public:





	private: System::Windows::Forms::TextBox^ txb_tickets;

	private: System::Windows::Forms::Label^ lbl_horados;
	private: System::Windows::Forms::Label^ lbl_id;









	public:
		   MySqlConnection^ connection;
		   CompraTicket(void)
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
		~CompraTicket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_encabezado;
	private: System::Windows::Forms::Label^ lbl_de;
	private: System::Windows::Forms::Label^ lbl_a;
	private: System::Windows::Forms::Label^ lbl_fecha;

	private: System::Windows::Forms::Label^ lbl_cantickets;
	private: System::Windows::Forms::Label^ lbl_precio;
	private: System::Windows::Forms::Label^ lbl_total;
	private: System::Windows::Forms::Button^ btt_comprar;
	private: System::Windows::Forms::ComboBox^ cbx_id;









	protected:

	protected:


















	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			this->lbl_de = (gcnew System::Windows::Forms::Label());
			this->lbl_a = (gcnew System::Windows::Forms::Label());
			this->lbl_fecha = (gcnew System::Windows::Forms::Label());
			this->lbl_cantickets = (gcnew System::Windows::Forms::Label());
			this->lbl_precio = (gcnew System::Windows::Forms::Label());
			this->lbl_total = (gcnew System::Windows::Forms::Label());
			this->btt_comprar = (gcnew System::Windows::Forms::Button());
			this->cbx_id = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_dedos = (gcnew System::Windows::Forms::Label());
			this->lbl_adedos = (gcnew System::Windows::Forms::Label());
			this->lbl_fechados = (gcnew System::Windows::Forms::Label());
			this->lbl_hora = (gcnew System::Windows::Forms::Label());
			this->lbl_preciodos = (gcnew System::Windows::Forms::Label());
			this->lbl_totaldos = (gcnew System::Windows::Forms::Label());
			this->txb_tickets = (gcnew System::Windows::Forms::TextBox());
			this->lbl_horados = (gcnew System::Windows::Forms::Label());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->Location = System::Drawing::Point(84, 24);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(232, 38);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"TICKETS TPG";
			// 
			// lbl_de
			// 
			this->lbl_de->AutoSize = true;
			this->lbl_de->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_de->Location = System::Drawing::Point(27, 144);
			this->lbl_de->Name = L"lbl_de";
			this->lbl_de->Size = System::Drawing::Size(43, 25);
			this->lbl_de->TabIndex = 1;
			this->lbl_de->Text = L"De:";
			// 
			// lbl_a
			// 
			this->lbl_a->AutoSize = true;
			this->lbl_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_a->Location = System::Drawing::Point(218, 144);
			this->lbl_a->Name = L"lbl_a";
			this->lbl_a->Size = System::Drawing::Size(32, 25);
			this->lbl_a->TabIndex = 2;
			this->lbl_a->Text = L"A:";
			// 
			// lbl_fecha
			// 
			this->lbl_fecha->AutoSize = true;
			this->lbl_fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_fecha->Location = System::Drawing::Point(27, 210);
			this->lbl_fecha->Name = L"lbl_fecha";
			this->lbl_fecha->Size = System::Drawing::Size(73, 25);
			this->lbl_fecha->TabIndex = 3;
			this->lbl_fecha->Text = L"Fecha:";
			// 
			// lbl_cantickets
			// 
			this->lbl_cantickets->AutoSize = true;
			this->lbl_cantickets->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_cantickets->Location = System::Drawing::Point(218, 286);
			this->lbl_cantickets->Name = L"lbl_cantickets";
			this->lbl_cantickets->Size = System::Drawing::Size(197, 25);
			this->lbl_cantickets->TabIndex = 4;
			this->lbl_cantickets->Text = L" Cantidad de Tickets:";
			this->lbl_cantickets->Click += gcnew System::EventHandler(this, &CompraTicket::label5_Click);
			// 
			// lbl_precio
			// 
			this->lbl_precio->AutoSize = true;
			this->lbl_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_precio->Location = System::Drawing::Point(27, 286);
			this->lbl_precio->Name = L"lbl_precio";
			this->lbl_precio->Size = System::Drawing::Size(73, 25);
			this->lbl_precio->TabIndex = 5;
			this->lbl_precio->Text = L"Precio:";
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_total->Location = System::Drawing::Point(156, 385);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(56, 25);
			this->lbl_total->TabIndex = 6;
			this->lbl_total->Text = L"Total";
			// 
			// btt_comprar
			// 
			this->btt_comprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_comprar->Location = System::Drawing::Point(160, 461);
			this->btt_comprar->Name = L"btt_comprar";
			this->btt_comprar->Size = System::Drawing::Size(110, 35);
			this->btt_comprar->TabIndex = 7;
			this->btt_comprar->Text = L"Comprar";
			this->btt_comprar->UseVisualStyleBackColor = true;
			// 
			// cbx_id
			// 
			this->cbx_id->FormattingEnabled = true;
			this->cbx_id->Location = System::Drawing::Point(58, 102);
			this->cbx_id->Name = L"cbx_id";
			this->cbx_id->Size = System::Drawing::Size(121, 24);
			this->cbx_id->TabIndex = 15;
			this->cbx_id->SelectedIndexChanged += gcnew System::EventHandler(this, &CompraTicket::comboBox1_SelectedIndexChanged);
			// 
			// lbl_dedos
			// 
			this->lbl_dedos->AutoSize = true;
			this->lbl_dedos->Location = System::Drawing::Point(79, 151);
			this->lbl_dedos->Name = L"lbl_dedos";
			this->lbl_dedos->Size = System::Drawing::Size(0, 16);
			this->lbl_dedos->TabIndex = 16;
			// 
			// lbl_adedos
			// 
			this->lbl_adedos->AutoSize = true;
			this->lbl_adedos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_adedos->Location = System::Drawing::Point(272, 151);
			this->lbl_adedos->Name = L"lbl_adedos";
			this->lbl_adedos->Size = System::Drawing::Size(0, 25);
			this->lbl_adedos->TabIndex = 17;
			// 
			// lbl_fechados
			// 
			this->lbl_fechados->AutoSize = true;
			this->lbl_fechados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_fechados->Location = System::Drawing::Point(101, 210);
			this->lbl_fechados->Name = L"lbl_fechados";
			this->lbl_fechados->Size = System::Drawing::Size(0, 25);
			this->lbl_fechados->TabIndex = 18;
			// 
			// lbl_hora
			// 
			this->lbl_hora->AutoSize = true;
			this->lbl_hora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_hora->Location = System::Drawing::Point(218, 210);
			this->lbl_hora->Name = L"lbl_hora";
			this->lbl_hora->Size = System::Drawing::Size(60, 25);
			this->lbl_hora->TabIndex = 19;
			this->lbl_hora->Text = L"Hora:";
			// 
			// lbl_preciodos
			// 
			this->lbl_preciodos->AutoSize = true;
			this->lbl_preciodos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_preciodos->Location = System::Drawing::Point(32, 334);
			this->lbl_preciodos->Name = L"lbl_preciodos";
			this->lbl_preciodos->Size = System::Drawing::Size(0, 25);
			this->lbl_preciodos->TabIndex = 20;
			// 
			// lbl_totaldos
			// 
			this->lbl_totaldos->AutoSize = true;
			this->lbl_totaldos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_totaldos->Location = System::Drawing::Point(160, 414);
			this->lbl_totaldos->Name = L"lbl_totaldos";
			this->lbl_totaldos->Size = System::Drawing::Size(0, 25);
			this->lbl_totaldos->TabIndex = 22;
			// 
			// txb_tickets
			// 
			this->txb_tickets->Location = System::Drawing::Point(249, 314);
			this->txb_tickets->Name = L"txb_tickets";
			this->txb_tickets->Size = System::Drawing::Size(100, 22);
			this->txb_tickets->TabIndex = 23;
			// 
			// lbl_horados
			// 
			this->lbl_horados->AutoSize = true;
			this->lbl_horados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_horados->Location = System::Drawing::Point(290, 219);
			this->lbl_horados->Name = L"lbl_horados";
			this->lbl_horados->Size = System::Drawing::Size(0, 25);
			this->lbl_horados->TabIndex = 24;
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_id->Location = System::Drawing::Point(27, 102);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(37, 25);
			this->lbl_id->TabIndex = 25;
			this->lbl_id->Text = L"ID:";
			// 
			// CompraTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 508);
			this->Controls->Add(this->lbl_id);
			this->Controls->Add(this->lbl_horados);
			this->Controls->Add(this->txb_tickets);
			this->Controls->Add(this->lbl_totaldos);
			this->Controls->Add(this->lbl_preciodos);
			this->Controls->Add(this->lbl_hora);
			this->Controls->Add(this->lbl_fechados);
			this->Controls->Add(this->lbl_adedos);
			this->Controls->Add(this->lbl_dedos);
			this->Controls->Add(this->cbx_id);
			this->Controls->Add(this->btt_comprar);
			this->Controls->Add(this->lbl_total);
			this->Controls->Add(this->lbl_precio);
			this->Controls->Add(this->lbl_cantickets);
			this->Controls->Add(this->lbl_fecha);
			this->Controls->Add(this->lbl_a);
			this->Controls->Add(this->lbl_de);
			this->Controls->Add(this->lbl_encabezado);
			this->Name = L"CompraTicket";
			this->Text = L"CompraTicket";
			this->Load += gcnew System::EventHandler(this, &CompraTicket::CompraTicket_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedValue = cbx_id->SelectedItem->ToString();
	}
		   void comboxSalida() {
			   try
			   {

				   String^ query = "SELECT idlugar FROM lugares";


				   if (connector->OpenConnection()) {
					   MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
					   MySqlDataReader^ reader = command->ExecuteReader();


					   cbx_id->Items->Clear();


					   while (reader->Read()) {
						   int id = reader->GetInt32(0);
						   cbx_id->Items->Add(id.ToString());
					   }

					   // Cerrar el lector y la conexión después de obtener los datos
					   reader->Close();
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
		   }

	private: System::Void CompraTicket_Load(System::Object^ sender, System::EventArgs^ e) {
		comboxSalida();

	}
	

		   //--------------------------------------------------------------------------------------------------------------------
	
};
}
