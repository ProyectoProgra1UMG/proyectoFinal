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
	/// Resumen de RegistroCompras
	/// </summary>
	public ref class RegistroCompras : public System::Windows::Forms::Form
	{
	private: Form^ menuempleados;
	public:	
		MySQLConnector^ connector = gcnew MySQLConnector();
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
			this->btt_regreso->Location = System::Drawing::Point(1157, 32);
			this->btt_regreso->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btt_regreso->Name = L"btt_regreso";
			this->btt_regreso->Size = System::Drawing::Size(112, 38);
			this->btt_regreso->TabIndex = 0;
			this->btt_regreso->Text = L"Regresar";
			this->btt_regreso->UseVisualStyleBackColor = false;
			this->btt_regreso->Click += gcnew System::EventHandler(this, &RegistroCompras::btt_regreso_Click);
			// 
			// dgv_registro
			// 
			this->dgv_registro->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_registro->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgv_registro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_registro->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_registro->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgv_registro->EnableHeadersVisualStyles = false;
			this->dgv_registro->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->dgv_registro->Location = System::Drawing::Point(16, 95);
			this->dgv_registro->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgv_registro->Name = L"dgv_registro";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->dgv_registro->Size = System::Drawing::Size(1267, 319);
			this->dgv_registro->TabIndex = 1;
			// 
			// lbl_encavezado
			// 
			this->lbl_encavezado->AutoSize = true;
			this->lbl_encavezado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encavezado->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_encavezado->Location = System::Drawing::Point(587, 38);
			this->lbl_encavezado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_encavezado->Name = L"lbl_encavezado";
			this->lbl_encavezado->Size = System::Drawing::Size(208, 28);
			this->lbl_encavezado->TabIndex = 2;
			this->lbl_encavezado->Text = L"Registro de Compras";
			// 
			// RegistroCompras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(1300, 458);
			this->Controls->Add(this->lbl_encavezado);
			this->Controls->Add(this->dgv_registro);
			this->Controls->Add(this->btt_regreso);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RegistroCompras";
			this->Text = L"RegistroCompras";
			this->Load += gcnew System::EventHandler(this, &RegistroCompras::RegistroCompras_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_registro))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btt_regreso_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		menuempleados->Show();

	}

	private: System::Void RegistroCompras_Load(System::Object^ sender, System::EventArgs^ e) {
		dgv_registro->DataSource = ObtenerUsuarios();
	}
		   DataTable^ ObtenerUsuarios() {

			   try
			   {
				   //se agregó una función en la clase MYSQLConnector  para ejecutar consultas 
				   //y estas se guardan en una estructura de datos  (dataTable)  
				   return connector->ExecuteQuery("Select * from compras");
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error: " + ex->Message);
			   }
	}
};
}
