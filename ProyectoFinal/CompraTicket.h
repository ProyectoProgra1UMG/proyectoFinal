#pragma once
#include "MySQLConnector.h"
#include "CompraTicketClass.h"
#include "RutasParaClientes.h"
namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Reflection;
	using namespace System::Resources;

	using namespace iTextSharp::text;
	using namespace iTextSharp::text::pdf;
	using namespace iTextSharp::tool::xml;
	using namespace System::IO;

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







	private: System::Windows::Forms::Label^ lbl_horados;
	private: System::Windows::Forms::Label^ lbl_id;



	public:
		   MySqlConnection^ connection;
	private: System::Windows::Forms::NumericUpDown^ nud_cantidadT;
	private: System::Windows::Forms::Label^ lbl_usuario;

	private: System::Windows::Forms::Button^ btt_rutas;
	private: System::Windows::Forms::Panel^ panel1;

	public:

	public:
		TickeClass^ ticketClass;
		   CompraTicket(TickeClass^ _ticketClass)
		   {
			   InitializeComponent();
			   connection = gcnew MySqlConnection(connector->connectionString);
			   ticketClass = _ticketClass;

			   this->WindowState = FormWindowState::Maximized;
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
			this->lbl_horados = (gcnew System::Windows::Forms::Label());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->nud_cantidadT = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbl_usuario = (gcnew System::Windows::Forms::Label());
			this->btt_rutas = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_cantidadT))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->Location = System::Drawing::Point(128, 18);
			this->lbl_encabezado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(193, 31);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"TICKETS TPG";
			// 
			// lbl_de
			// 
			this->lbl_de->AutoSize = true;
			this->lbl_de->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_de->Location = System::Drawing::Point(92, 136);
			this->lbl_de->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_de->Name = L"lbl_de";
			this->lbl_de->Size = System::Drawing::Size(34, 20);
			this->lbl_de->TabIndex = 1;
			this->lbl_de->Text = L"De:";
			// 
			// lbl_a
			// 
			this->lbl_a->AutoSize = true;
			this->lbl_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_a->Location = System::Drawing::Point(277, 136);
			this->lbl_a->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_a->Name = L"lbl_a";
			this->lbl_a->Size = System::Drawing::Size(24, 20);
			this->lbl_a->TabIndex = 2;
			this->lbl_a->Text = L"A:";
			// 
			// lbl_fecha
			// 
			this->lbl_fecha->AutoSize = true;
			this->lbl_fecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_fecha->Location = System::Drawing::Point(30, 191);
			this->lbl_fecha->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_fecha->Name = L"lbl_fecha";
			this->lbl_fecha->Size = System::Drawing::Size(58, 20);
			this->lbl_fecha->TabIndex = 3;
			this->lbl_fecha->Text = L"Fecha:";
			// 
			// lbl_cantickets
			// 
			this->lbl_cantickets->AutoSize = true;
			this->lbl_cantickets->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_cantickets->Location = System::Drawing::Point(30, 290);
			this->lbl_cantickets->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_cantickets->Name = L"lbl_cantickets";
			this->lbl_cantickets->Size = System::Drawing::Size(157, 20);
			this->lbl_cantickets->TabIndex = 4;
			this->lbl_cantickets->Text = L" Cantidad de Tickets:";
			this->lbl_cantickets->Click += gcnew System::EventHandler(this, &CompraTicket::label5_Click);
			// 
			// lbl_precio
			// 
			this->lbl_precio->AutoSize = true;
			this->lbl_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_precio->Location = System::Drawing::Point(30, 237);
			this->lbl_precio->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_precio->Name = L"lbl_precio";
			this->lbl_precio->Size = System::Drawing::Size(57, 20);
			this->lbl_precio->TabIndex = 5;
			this->lbl_precio->Text = L"Precio:";
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_total->Location = System::Drawing::Point(305, 290);
			this->lbl_total->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(44, 20);
			this->lbl_total->TabIndex = 6;
			this->lbl_total->Text = L"Total";
			// 
			// btt_comprar
			// 
			this->btt_comprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_comprar->Location = System::Drawing::Point(197, 363);
			this->btt_comprar->Margin = System::Windows::Forms::Padding(2);
			this->btt_comprar->Name = L"btt_comprar";
			this->btt_comprar->Size = System::Drawing::Size(82, 28);
			this->btt_comprar->TabIndex = 7;
			this->btt_comprar->Text = L"Comprar";
			this->btt_comprar->UseVisualStyleBackColor = true;
			this->btt_comprar->Click += gcnew System::EventHandler(this, &CompraTicket::btt_comprar_Click);
			// 
			// cbx_id
			// 
			this->cbx_id->FormattingEnabled = true;
			this->cbx_id->Location = System::Drawing::Point(187, 82);
			this->cbx_id->Margin = System::Windows::Forms::Padding(2);
			this->cbx_id->Name = L"cbx_id";
			this->cbx_id->Size = System::Drawing::Size(92, 21);
			this->cbx_id->TabIndex = 15;
			this->cbx_id->SelectedIndexChanged += gcnew System::EventHandler(this, &CompraTicket::comboBox1_SelectedIndexChanged);
			// 
			// lbl_dedos
			// 
			this->lbl_dedos->AutoSize = true;
			this->lbl_dedos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_dedos->Location = System::Drawing::Point(130, 136);
			this->lbl_dedos->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_dedos->Name = L"lbl_dedos";
			this->lbl_dedos->Size = System::Drawing::Size(53, 20);
			this->lbl_dedos->TabIndex = 16;
			this->lbl_dedos->Text = L"dedos";
			// 
			// lbl_adedos
			// 
			this->lbl_adedos->AutoSize = true;
			this->lbl_adedos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_adedos->Location = System::Drawing::Point(305, 136);
			this->lbl_adedos->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_adedos->Name = L"lbl_adedos";
			this->lbl_adedos->Size = System::Drawing::Size(62, 20);
			this->lbl_adedos->TabIndex = 17;
			this->lbl_adedos->Text = L"adedos";
			// 
			// lbl_fechados
			// 
			this->lbl_fechados->AutoSize = true;
			this->lbl_fechados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_fechados->Location = System::Drawing::Point(92, 191);
			this->lbl_fechados->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_fechados->Name = L"lbl_fechados";
			this->lbl_fechados->Size = System::Drawing::Size(75, 20);
			this->lbl_fechados->TabIndex = 18;
			this->lbl_fechados->Text = L"fechados";
			// 
			// lbl_hora
			// 
			this->lbl_hora->AutoSize = true;
			this->lbl_hora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_hora->Location = System::Drawing::Point(301, 191);
			this->lbl_hora->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_hora->Name = L"lbl_hora";
			this->lbl_hora->Size = System::Drawing::Size(48, 20);
			this->lbl_hora->TabIndex = 19;
			this->lbl_hora->Text = L"Hora:";
			// 
			// lbl_preciodos
			// 
			this->lbl_preciodos->AutoSize = true;
			this->lbl_preciodos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_preciodos->Location = System::Drawing::Point(92, 237);
			this->lbl_preciodos->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_preciodos->Name = L"lbl_preciodos";
			this->lbl_preciodos->Size = System::Drawing::Size(78, 20);
			this->lbl_preciodos->TabIndex = 20;
			this->lbl_preciodos->Text = L"preciodos";
			// 
			// lbl_totaldos
			// 
			this->lbl_totaldos->AutoSize = true;
			this->lbl_totaldos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_totaldos->Location = System::Drawing::Point(301, 323);
			this->lbl_totaldos->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_totaldos->Name = L"lbl_totaldos";
			this->lbl_totaldos->Size = System::Drawing::Size(66, 20);
			this->lbl_totaldos->TabIndex = 22;
			this->lbl_totaldos->Text = L"totaldos";
			// 
			// lbl_horados
			// 
			this->lbl_horados->AutoSize = true;
			this->lbl_horados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_horados->Location = System::Drawing::Point(353, 191);
			this->lbl_horados->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_horados->Name = L"lbl_horados";
			this->lbl_horados->Size = System::Drawing::Size(70, 20);
			this->lbl_horados->TabIndex = 24;
			this->lbl_horados->Text = L"horaldos";
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_id->Location = System::Drawing::Point(153, 83);
			this->lbl_id->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(30, 20);
			this->lbl_id->TabIndex = 25;
			this->lbl_id->Text = L"ID:";
			// 
			// nud_cantidadT
			// 
			this->nud_cantidadT->Location = System::Drawing::Point(57, 326);
			this->nud_cantidadT->Name = L"nud_cantidadT";
			this->nud_cantidadT->Size = System::Drawing::Size(95, 20);
			this->nud_cantidadT->TabIndex = 26;
			this->nud_cantidadT->ValueChanged += gcnew System::EventHandler(this, &CompraTicket::numericUpDown1_ValueChanged);
			// 
			// lbl_usuario
			// 
			this->lbl_usuario->AutoSize = true;
			this->lbl_usuario->Location = System::Drawing::Point(12, 9);
			this->lbl_usuario->Name = L"lbl_usuario";
			this->lbl_usuario->Size = System::Drawing::Size(16, 13);
			this->lbl_usuario->TabIndex = 27;
			this->lbl_usuario->Text = L"---";
			// 
			// btt_rutas
			// 
			this->btt_rutas->Location = System::Drawing::Point(339, 25);
			this->btt_rutas->Name = L"btt_rutas";
			this->btt_rutas->Size = System::Drawing::Size(107, 23);
			this->btt_rutas->TabIndex = 29;
			this->btt_rutas->Text = L"Mostrar Rutas";
			this->btt_rutas->UseVisualStyleBackColor = true;
			this->btt_rutas->Click += gcnew System::EventHandler(this, &CompraTicket::btt_rutas_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(468, 36);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(722, 396);
			this->panel1->TabIndex = 30;
			// 
			// CompraTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1202, 444);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btt_rutas);
			this->Controls->Add(this->lbl_usuario);
			this->Controls->Add(this->nud_cantidadT);
			this->Controls->Add(this->lbl_id);
			this->Controls->Add(this->lbl_horados);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CompraTicket";
			this->Text = L"CompraTicket";
			this->Load += gcnew System::EventHandler(this, &CompraTicket::CompraTicket_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_cantidadT))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ seleccion = cbx_id->SelectedItem->ToString();
		ticketClass->autoRelleno(lbl_dedos, lbl_adedos, lbl_fechados, lbl_horados, lbl_preciodos, seleccion);
		ticketClass->totalString(lbl_totaldos);
	}

	private: System::Void CompraTicket_Load(System::Object^ sender, System::EventArgs^ e) {
		ticketClass->comboxID(cbx_id);
		nud_cantidadT->Text = "1";
		lbl_usuario->Text = ticketClass->nombreUsuario();
	}

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int cantidad = Decimal::ToInt32(nud_cantidadT->Value);
		ticketClass->darCantidad(cantidad);
		ticketClass->totalString(lbl_totaldos);
	}

	private: System::Void btt_comprar_Click(System::Object^ sender, System::EventArgs^ e) {
		//---------------------------------------------------------------------------

		MessageBox::Show("Imprimir voleto");
		SaveFileDialog^ guardar = gcnew SaveFileDialog();
		guardar->FileName = "ticket" + DateTime::Now.ToString("ddMMyyyyHHmmss") + ".pdf";

		String^ htmlFilePath = "ticket.html";
		StreamReader^ reader = gcnew StreamReader(htmlFilePath);
		String^ textHtml = reader->ReadToEnd();
		reader->Close();

		textHtml = textHtml->Replace("@NOMBRE", lbl_usuario->Text);
		textHtml = textHtml->Replace("@FECHA", lbl_fechados->Text);
		textHtml = textHtml->Replace("@HORA", lbl_horados->Text);
		textHtml = textHtml->Replace("@SALIDA", lbl_dedos->Text);
		textHtml = textHtml->Replace("@DESTINO", lbl_adedos->Text);
		textHtml = textHtml->Replace("@CANTIDAD", nud_cantidadT->Text);
		textHtml = textHtml->Replace("@TOTAL", lbl_totaldos->Text);



		if (guardar->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filePath = guardar->FileName;
			FileStream^ stream = gcnew FileStream(filePath, FileMode::Create);

			try {
				// Definir un tamaño de página personalizado para el ticket
				float altura = 3 * 72; // 3 pulgadas en puntos 
				float ancho = 8 * 72; // 8 pulgadas en puntos 
				iTextSharp::text::Rectangle^ ticketSize = gcnew iTextSharp::text::Rectangle(ancho, altura);

				// Crear el documento PDF con el tamaño de página personalizado
				Document^ pdf = gcnew Document(ticketSize, 1, 1, 1, 1);

				PdfWriter^ whiter = PdfWriter::GetInstance(pdf, stream);
				pdf->Open();
				
				//iTextSharp::text::Image^ img = iTextSharp::text::Image::GetInstance("logo.png", System::Drawing::Imaging::ImageFormat::Png);
				// Cargar la imagen desde el archivo
				System::Drawing::Image^ imgFromFile = System::Drawing::Image::FromFile("logo.png"); 

				// Convertir la imagen a un flujo de datos
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				imgFromFile->Save(ms, System::Drawing::Imaging::ImageFormat::Png); 

				// Crear una instancia de iTextSharp Image usando el flujo de datos
				iTextSharp::text::Image^ img = iTextSharp::text::Image::GetInstance(ms->GetBuffer()); 

				img->ScaleToFit(80, 60);
				img->Alignment = iTextSharp::text::Image::UNDERLYING;
				img->SetAbsolutePosition(pdf->LeftMargin + 20, pdf->Top - 45);
				pdf->Add(img);

				StringReader^ strR = gcnew StringReader(textHtml);
				try
				{
					XMLWorkerHelper::GetInstance()->ParseXHtml(whiter, pdf, strR);
				}
				finally
				{
					if (strR != nullptr) {
						strR->Close();
					}
				}

				pdf->Close();
				stream->Close();
			}
			finally {
				// Asegurarse de que el stream se cierre al salir del bloque try
				if (stream != nullptr) {
					stream->Close();
				}
			}
		}


		//---------------------------------------------------------------------------
		String^ datos = lbl_totaldos->Text;

		if (datos == "Q0") {
			MessageBox::Show("Por favor, complete todos los campos.");
			return;
		}

		int cantidad = Decimal::ToInt32(nud_cantidadT->Value); 

		if (!(cantidad <= 0)) {
			ticketClass->registroCompras(lbl_dedos, lbl_adedos, lbl_preciodos, lbl_fechados, lbl_horados, nud_cantidadT, lbl_totaldos);
		}
		else
		{
			MessageBox::Show("Cantidad de tickets invalida");
		}
	}


	template<class T>
		void AbrirPanel(T FormHijo)
		{
			if (this->panel1->Controls->Count > 0)
			this->panel1->Controls->RemoveAt(0);
			FormHijo->TopLevel = false;
			FormHijo->Dock = DockStyle::Fill;
			this->panel1->Controls->Add(FormHijo);
			this->panel1->Tag = FormHijo;
			FormHijo->Show();
		}
	
	
	
	private: System::Void btt_rutas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew ProyectoFinal::RutasParaClientes);
	}
};
}
