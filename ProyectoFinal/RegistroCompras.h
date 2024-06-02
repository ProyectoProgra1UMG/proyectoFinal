#pragma once
#include "MySQLConnector.h"
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
	/// Resumen de RegistroCompras
	/// </summary>
	public ref class RegistroCompras : public System::Windows::Forms::Form
	{
	private: Form^ menuempleados;
	public:	
		MySQLConnector^ connector = gcnew MySQLConnector();
	private: System::Windows::Forms::Label^ lbl_indicacion;
	public:

	public:
		MySqlConnection^ connection;

		RegistroCompras(Form^ _menuempleados)
		{
			InitializeComponent();
			menuempleados = _menuempleados;
			connection = gcnew MySqlConnection(connector->connectionString);
 			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegistroCompras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btt_regreso;
	private: System::Windows::Forms::DataGridView^ dgv_registro;
	private: System::Windows::Forms::Label^ lbl_encavezado;
	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btt_regreso = (gcnew System::Windows::Forms::Button());
			this->dgv_registro = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_encavezado = (gcnew System::Windows::Forms::Label());
			this->lbl_indicacion = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_registro))->BeginInit();
			this->SuspendLayout();
			// 
			// btt_regreso
			// 
			this->btt_regreso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_regreso->FlatAppearance->BorderSize = 0;
			this->btt_regreso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_regreso->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_regreso->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btt_regreso->Location = System::Drawing::Point(868, 26);
			this->btt_regreso->Margin = System::Windows::Forms::Padding(2);
			this->btt_regreso->Name = L"btt_regreso";
			this->btt_regreso->Size = System::Drawing::Size(84, 31);
			this->btt_regreso->TabIndex = 0;
			this->btt_regreso->Text = L"Regresar";
			this->btt_regreso->UseVisualStyleBackColor = false;
			this->btt_regreso->Click += gcnew System::EventHandler(this, &RegistroCompras::btt_regreso_Click);
			// 
			// dgv_registro
			// 
			this->dgv_registro->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->dgv_registro->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_registro->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgv_registro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_registro->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_registro->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgv_registro->EnableHeadersVisualStyles = false;
			this->dgv_registro->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->dgv_registro->Location = System::Drawing::Point(12, 90);
			this->dgv_registro->Name = L"dgv_registro";
			this->dgv_registro->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_registro->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgv_registro->RowHeadersVisible = false;
			this->dgv_registro->RowHeadersWidth = 51;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->dgv_registro->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dgv_registro->RowTemplate->Height = 30;
			this->dgv_registro->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgv_registro->Size = System::Drawing::Size(950, 259);
			this->dgv_registro->TabIndex = 1;
			this->dgv_registro->DoubleClick += gcnew System::EventHandler(this, &RegistroCompras::dgv_registro_DoubleClick);
			// 
			// lbl_encavezado
			// 
			this->lbl_encavezado->AutoSize = true;
			this->lbl_encavezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encavezado->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_encavezado->Location = System::Drawing::Point(416, 22);
			this->lbl_encavezado->Name = L"lbl_encavezado";
			this->lbl_encavezado->Size = System::Drawing::Size(216, 30);
			this->lbl_encavezado->TabIndex = 2;
			this->lbl_encavezado->Text = L"Registro de Compras";
			// 
			// lbl_indicacion
			// 
			this->lbl_indicacion->AutoSize = true;
			this->lbl_indicacion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_indicacion->Location = System::Drawing::Point(403, 57);
			this->lbl_indicacion->Name = L"lbl_indicacion";
			this->lbl_indicacion->Size = System::Drawing::Size(250, 17);
			this->lbl_indicacion->TabIndex = 3;
			this->lbl_indicacion->Text = L"Doble click en la fila para imprimir boleto";
			// 
			// RegistroCompras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(975, 372);
			this->Controls->Add(this->lbl_indicacion);
			this->Controls->Add(this->lbl_encavezado);
			this->Controls->Add(this->dgv_registro);
			this->Controls->Add(this->btt_regreso);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"RegistroCompras";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegistroCompras";
			this->Load += gcnew System::EventHandler(this, &RegistroCompras::RegistroCompras_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_registro))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//-----------------------REGRESA AL MENU DE EMPLEADOS------------------------------
	private: System::Void btt_regreso_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		menuempleados->Show();
	}

	//----------------------CREA LA LISTA DE REGISTROS DE COMPRAS---------------------------
	private: System::Void RegistroCompras_Load(System::Object^ sender, System::EventArgs^ e) {
		dgv_registro->DataSource = ObtenerUsuarios();
	}
		DataTable^ ObtenerUsuarios() {
			try
			{
				//FUNCION EN MYSQLCONECTOR PARA CREAR TABLAS
				return connector->ExecuteQuery("Select * from compras");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
	}

	private: System::Void dgv_registro_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ idCompras = Convert::ToString(dgv_registro->SelectedRows[0]->Cells[0]->Value); 
		String^ nombre = Convert::ToString(dgv_registro->SelectedRows[0]->Cells[1]->Value); 
		String^ lugarSalida = Convert::ToString(dgv_registro->SelectedRows[0]->Cells[2]->Value); 
		String^ lugarDestino = Convert::ToString(dgv_registro->SelectedRows[0]->Cells[3]->Value); 
		String^ precio = Convert::ToString(dgv_registro->SelectedRows[0]->Cells[4]->Value); 
		String^ fecha = Convert::ToString(dgv_registro->SelectedRows[0]->Cells[5]->Value); 
		String^ hora = Convert::ToString(dgv_registro->SelectedRows[0]->Cells[6]->Value); 
		String^ cantidad = Convert::ToString(dgv_registro->SelectedRows[0]->Cells[7]->Value); 
		String^ total = Convert::ToString(dgv_registro->SelectedRows[0]->Cells[8]->Value);  

		//..........................CREACION DEL BOLETO EN PDF................................
		MessageBox::Show("Imprimir Boleto");
		SaveFileDialog^ guardar = gcnew SaveFileDialog();
		guardar->FileName = nombre + DateTime::Now.ToString("ddMMyyyyHHmmss") + ".pdf";

		String^ htmlFilePath = "ticket.html";
		StreamReader^ reader = gcnew StreamReader(htmlFilePath);
		String^ textHtml = reader->ReadToEnd();
		reader->Close();

		textHtml = textHtml->Replace("@NOMBRE", nombre);
		textHtml = textHtml->Replace("@FECHA", fecha);
		textHtml = textHtml->Replace("@HORA", hora);
		textHtml = textHtml->Replace("@SALIDA", lugarSalida);
		textHtml = textHtml->Replace("@DESTINO", lugarDestino);
		textHtml = textHtml->Replace("@CANTIDAD", cantidad);
		textHtml = textHtml->Replace("@TOTAL", total);

		if (guardar->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filePath = guardar->FileName;
			FileStream^ stream = gcnew FileStream(filePath, FileMode::Create);

			try {
				float altura = 3 * 72; // 3 pulgadas en puntos 
				float ancho = 8 * 72; // 8 pulgadas en puntos 

				iTextSharp::text::Rectangle^ ticketSize = gcnew iTextSharp::text::Rectangle(ancho, altura);

				Document^ pdf = gcnew Document(ticketSize, 1, 1, 1, 1);

				PdfWriter^ whiter = PdfWriter::GetInstance(pdf, stream);
				pdf->Open();

				System::Drawing::Image^ imgFromFile = System::Drawing::Image::FromFile("logo.png");

				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				imgFromFile->Save(ms, System::Drawing::Imaging::ImageFormat::Png);

				iTextSharp::text::Image^ img = iTextSharp::text::Image::GetInstance(ms->GetBuffer());

				img->ScaleToFit(80, 60);
				img->Alignment = iTextSharp::text::Image::UNDERLYING;
				img->SetAbsolutePosition(pdf->LeftMargin + 20, pdf->Top - 45);
				pdf->Add(img);

				StringReader^ strR = gcnew StringReader(textHtml);
				try
				{
					XMLWorkerHelper::GetInstance()->ParseXHtml(whiter, pdf, strR);
					MessageBox::Show("Voleto Guardado");
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
				if (stream != nullptr) {
					stream->Close();
				}
			}
		}
	}
};
}
