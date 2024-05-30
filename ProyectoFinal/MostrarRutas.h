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
	/// Resumen de MostrarRutas
	/// </summary>
	public ref class MostrarRutas : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector = gcnew MySQLConnector();
		MySqlConnection^ connection;
		MostrarRutas(void)
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
		~MostrarRutas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ brd_registro;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lbl_encabezado;

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
			this->brd_registro = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brd_registro))->BeginInit();
			this->SuspendLayout();
			// 
			// brd_registro
			// 
			this->brd_registro->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->brd_registro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->brd_registro->DefaultCellStyle = dataGridViewCellStyle1;
			this->brd_registro->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->brd_registro->Location = System::Drawing::Point(9, 41);
			this->brd_registro->Margin = System::Windows::Forms::Padding(2);
			this->brd_registro->Name = L"brd_registro";
			this->brd_registro->RowHeadersVisible = false;
			this->brd_registro->RowHeadersWidth = 51;
			this->brd_registro->RowTemplate->Height = 24;
			this->brd_registro->Size = System::Drawing::Size(650, 382);
			this->brd_registro->TabIndex = 0;
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_encabezado->Location = System::Drawing::Point(212, 2);
			this->lbl_encabezado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(243, 37);
			this->lbl_encabezado->TabIndex = 1;
			this->lbl_encabezado->Text = L"Registro de Rutas";
			// 
			// MostrarRutas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(668, 433);
			this->Controls->Add(this->lbl_encabezado);
			this->Controls->Add(this->brd_registro);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MostrarRutas";
			this->Text = L"MostrarRutas";
			this->Load += gcnew System::EventHandler(this, &MostrarRutas::MostrarRutas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brd_registro))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//--------------MUESTRA EL REGISTRO DE RUTAS DISPONIBLES---------------------
	private: System::Void MostrarRutas_Load(System::Object^ sender, System::EventArgs^ e) {
		brd_registro->DataSource = ObtenerUsuarios();
	}
		DataTable^ ObtenerUsuarios() {
			try
			{ 
				//------------CREA LA TABLA CON LA FUNCION----------------
				return connector->ExecuteQuery("Select * from lugares");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}

		}

	};
}
