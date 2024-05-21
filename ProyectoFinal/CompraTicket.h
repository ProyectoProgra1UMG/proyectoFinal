#pragma once

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
		CompraTicket(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Label^ lbl_fechahora;
	private: System::Windows::Forms::Label^ lbl_cantickets;
	private: System::Windows::Forms::Label^ lbl_precio;
	private: System::Windows::Forms::Label^ lbl_total;
	private: System::Windows::Forms::Button^ btt_comprar;
	private: System::Windows::Forms::TextBox^ txb_salida;

	private: System::Windows::Forms::TextBox^ txb_destino;
	private: System::Windows::Forms::TextBox^ txb_fecha;
	private: System::Windows::Forms::TextBox^ txb_tickets;
	private: System::Windows::Forms::TextBox^ txb_total;



	protected:

	protected:













	private: System::Windows::Forms::TextBox^ txb_precio;


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
			this->lbl_de = (gcnew System::Windows::Forms::Label());
			this->lbl_a = (gcnew System::Windows::Forms::Label());
			this->lbl_fechahora = (gcnew System::Windows::Forms::Label());
			this->lbl_cantickets = (gcnew System::Windows::Forms::Label());
			this->lbl_precio = (gcnew System::Windows::Forms::Label());
			this->lbl_total = (gcnew System::Windows::Forms::Label());
			this->btt_comprar = (gcnew System::Windows::Forms::Button());
			this->txb_salida = (gcnew System::Windows::Forms::TextBox());
			this->txb_destino = (gcnew System::Windows::Forms::TextBox());
			this->txb_fecha = (gcnew System::Windows::Forms::TextBox());
			this->txb_tickets = (gcnew System::Windows::Forms::TextBox());
			this->txb_total = (gcnew System::Windows::Forms::TextBox());
			this->txb_precio = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->Location = System::Drawing::Point(84, 24);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(242, 39);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"TICKETS TPG";
			// 
			// lbl_de
			// 
			this->lbl_de->AutoSize = true;
			this->lbl_de->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_de->Location = System::Drawing::Point(26, 106);
			this->lbl_de->Name = L"lbl_de";
			this->lbl_de->Size = System::Drawing::Size(37, 25);
			this->lbl_de->TabIndex = 1;
			this->lbl_de->Text = L"De";
			// 
			// lbl_a
			// 
			this->lbl_a->AutoSize = true;
			this->lbl_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_a->Location = System::Drawing::Point(244, 107);
			this->lbl_a->Name = L"lbl_a";
			this->lbl_a->Size = System::Drawing::Size(26, 25);
			this->lbl_a->TabIndex = 2;
			this->lbl_a->Text = L"A";
			// 
			// lbl_fechahora
			// 
			this->lbl_fechahora->AutoSize = true;
			this->lbl_fechahora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_fechahora->Location = System::Drawing::Point(52, 186);
			this->lbl_fechahora->Name = L"lbl_fechahora";
			this->lbl_fechahora->Size = System::Drawing::Size(129, 25);
			this->lbl_fechahora->TabIndex = 3;
			this->lbl_fechahora->Text = L"Fecha y Hora";
			// 
			// lbl_cantickets
			// 
			this->lbl_cantickets->AutoSize = true;
			this->lbl_cantickets->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_cantickets->Location = System::Drawing::Point(244, 186);
			this->lbl_cantickets->Name = L"lbl_cantickets";
			this->lbl_cantickets->Size = System::Drawing::Size(191, 25);
			this->lbl_cantickets->TabIndex = 4;
			this->lbl_cantickets->Text = L" Cantidad de Tickets";
			this->lbl_cantickets->Click += gcnew System::EventHandler(this, &CompraTicket::label5_Click);
			// 
			// lbl_precio
			// 
			this->lbl_precio->AutoSize = true;
			this->lbl_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_precio->Location = System::Drawing::Point(86, 273);
			this->lbl_precio->Name = L"lbl_precio";
			this->lbl_precio->Size = System::Drawing::Size(67, 25);
			this->lbl_precio->TabIndex = 5;
			this->lbl_precio->Text = L"Precio";
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_total->Location = System::Drawing::Point(305, 273);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(56, 25);
			this->lbl_total->TabIndex = 6;
			this->lbl_total->Text = L"Total";
			// 
			// btt_comprar
			// 
			this->btt_comprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_comprar->Location = System::Drawing::Point(153, 378);
			this->btt_comprar->Name = L"btt_comprar";
			this->btt_comprar->Size = System::Drawing::Size(110, 35);
			this->btt_comprar->TabIndex = 7;
			this->btt_comprar->Text = L"Comprar";
			this->btt_comprar->UseVisualStyleBackColor = true;
			// 
			// txb_salida
			// 
			this->txb_salida->Location = System::Drawing::Point(69, 110);
			this->txb_salida->Name = L"txb_salida";
			this->txb_salida->Size = System::Drawing::Size(100, 22);
			this->txb_salida->TabIndex = 9;
			// 
			// txb_destino
			// 
			this->txb_destino->Location = System::Drawing::Point(286, 109);
			this->txb_destino->Name = L"txb_destino";
			this->txb_destino->Size = System::Drawing::Size(100, 22);
			this->txb_destino->TabIndex = 10;
			// 
			// txb_fecha
			// 
			this->txb_fecha->Location = System::Drawing::Point(69, 214);
			this->txb_fecha->Name = L"txb_fecha";
			this->txb_fecha->Size = System::Drawing::Size(100, 22);
			this->txb_fecha->TabIndex = 11;
			// 
			// txb_tickets
			// 
			this->txb_tickets->Location = System::Drawing::Point(286, 214);
			this->txb_tickets->Name = L"txb_tickets";
			this->txb_tickets->Size = System::Drawing::Size(100, 22);
			this->txb_tickets->TabIndex = 12;
			// 
			// txb_total
			// 
			this->txb_total->Location = System::Drawing::Point(286, 301);
			this->txb_total->Name = L"txb_total";
			this->txb_total->Size = System::Drawing::Size(100, 22);
			this->txb_total->TabIndex = 13;
			// 
			// txb_precio
			// 
			this->txb_precio->Location = System::Drawing::Point(69, 301);
			this->txb_precio->Name = L"txb_precio";
			this->txb_precio->Size = System::Drawing::Size(100, 22);
			this->txb_precio->TabIndex = 14;
			// 
			// CompraTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 508);
			this->Controls->Add(this->txb_precio);
			this->Controls->Add(this->txb_total);
			this->Controls->Add(this->txb_tickets);
			this->Controls->Add(this->txb_fecha);
			this->Controls->Add(this->txb_destino);
			this->Controls->Add(this->txb_salida);
			this->Controls->Add(this->btt_comprar);
			this->Controls->Add(this->lbl_total);
			this->Controls->Add(this->lbl_precio);
			this->Controls->Add(this->lbl_cantickets);
			this->Controls->Add(this->lbl_fechahora);
			this->Controls->Add(this->lbl_a);
			this->Controls->Add(this->lbl_de);
			this->Controls->Add(this->lbl_encabezado);
			this->Name = L"CompraTicket";
			this->Text = L"CompraTicket";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
