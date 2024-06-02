#pragma once
#include "MySQLConnector.h"
#include "ModificarRutas.h"
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
	private: System::Windows::Forms::Button^ btt_actualizar;
	private: System::Windows::Forms::Label^ lbl_indicacion;
	public:
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->brd_registro = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			this->btt_actualizar = (gcnew System::Windows::Forms::Button());
			this->lbl_indicacion = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brd_registro))->BeginInit();
			this->SuspendLayout();
			// 
			// brd_registro
			// 
			this->brd_registro->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->brd_registro->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->brd_registro->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->brd_registro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->brd_registro->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->brd_registro->DefaultCellStyle = dataGridViewCellStyle2;
			this->brd_registro->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->brd_registro->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->brd_registro->Location = System::Drawing::Point(30, 102);
			this->brd_registro->Margin = System::Windows::Forms::Padding(2);
			this->brd_registro->Name = L"brd_registro";
			this->brd_registro->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->brd_registro->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->brd_registro->RowHeadersVisible = false;
			this->brd_registro->RowHeadersWidth = 51;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			this->brd_registro->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->brd_registro->RowTemplate->Height = 30;
			this->brd_registro->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->brd_registro->Size = System::Drawing::Size(627, 350);
			this->brd_registro->TabIndex = 0;
			this->brd_registro->DoubleClick += gcnew System::EventHandler(this, &MostrarRutas::brd_registro_DoubleClick);
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_encabezado->Location = System::Drawing::Point(212, 24);
			this->lbl_encabezado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(243, 37);
			this->lbl_encabezado->TabIndex = 1;
			this->lbl_encabezado->Text = L"Registro de Rutas";
			// 
			// btt_actualizar
			// 
			this->btt_actualizar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btt_actualizar->FlatAppearance->BorderSize = 0;
			this->btt_actualizar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btt_actualizar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_actualizar->ForeColor = System::Drawing::Color::White;
			this->btt_actualizar->Location = System::Drawing::Point(554, 24);
			this->btt_actualizar->Name = L"btt_actualizar";
			this->btt_actualizar->Size = System::Drawing::Size(75, 37);
			this->btt_actualizar->TabIndex = 2;
			this->btt_actualizar->Text = L"Refrescar";
			this->btt_actualizar->UseVisualStyleBackColor = false;
			this->btt_actualizar->Click += gcnew System::EventHandler(this, &MostrarRutas::btt_actualizar_Click);
			// 
			// lbl_indicacion
			// 
			this->lbl_indicacion->AutoSize = true;
			this->lbl_indicacion->Location = System::Drawing::Point(227, 72);
			this->lbl_indicacion->Name = L"lbl_indicacion";
			this->lbl_indicacion->Size = System::Drawing::Size(210, 13);
			this->lbl_indicacion->TabIndex = 3;
			this->lbl_indicacion->Text = L"Doble click a la fila que desea modificar";
			// 
			// MostrarRutas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(668, 433);
			this->Controls->Add(this->lbl_indicacion);
			this->Controls->Add(this->btt_actualizar);
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

	private: System::Void brd_registro_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ idLugar = Convert::ToString(brd_registro->SelectedRows[0]->Cells[0]->Value);
		String^ lugarSalida = Convert::ToString(brd_registro->SelectedRows[0]->Cells[1]->Value);
		String^ lugarDestino = Convert::ToString(brd_registro->SelectedRows[0]->Cells[2]->Value);
		String^ precio = Convert::ToString(brd_registro->SelectedRows[0]->Cells[3]->Value);
		String^ fecha = Convert::ToString(brd_registro->SelectedRows[0]->Cells[4]->Value);
		String^ hora = Convert::ToString(brd_registro->SelectedRows[0]->Cells[5]->Value);

		ProyectoFinal::ModificarRutas^ modificar = gcnew ProyectoFinal::ModificarRutas(idLugar, lugarSalida, lugarDestino, precio, fecha, hora);
		modificar->ShowDialog();

	}

	private: System::Void btt_actualizar_Click(System::Object^ sender, System::EventArgs^ e) {
		brd_registro->DataSource = ObtenerUsuarios();
	}
};
}
