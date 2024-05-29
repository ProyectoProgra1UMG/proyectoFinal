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
	/// Resumen de RutasParaClientes
	/// </summary>
	public ref class RutasParaClientes : public System::Windows::Forms::Form
	{
	public:
		MySQLConnector^ connector = gcnew MySQLConnector();
		MySqlConnection^ connection;
		RutasParaClientes(void)
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
		~RutasParaClientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_encavezado;
	protected:

	private: System::Windows::Forms::DataGridView^ dgv_registros;

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
			this->lbl_encavezado = (gcnew System::Windows::Forms::Label());
			this->dgv_registros = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_registros))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_encavezado
			// 
			this->lbl_encavezado->AutoSize = true;
			this->lbl_encavezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encavezado->Location = System::Drawing::Point(262, 20);
			this->lbl_encavezado->Name = L"lbl_encavezado";
			this->lbl_encavezado->Size = System::Drawing::Size(138, 20);
			this->lbl_encavezado->TabIndex = 0;
			this->lbl_encavezado->Text = L"Rutas Disponibles";
			// 
			// dgv_registros
			// 
			this->dgv_registros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_registros->Location = System::Drawing::Point(12, 61);
			this->dgv_registros->Name = L"dgv_registros";
			this->dgv_registros->Size = System::Drawing::Size(682, 272);
			this->dgv_registros->TabIndex = 1;
			// 
			// RutasParaClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 357);
			this->Controls->Add(this->dgv_registros);
			this->Controls->Add(this->lbl_encavezado);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"RutasParaClientes";
			this->Text = L"RutasParaClientes";
			this->Load += gcnew System::EventHandler(this, &RutasParaClientes::RutasParaClientes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_registros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RutasParaClientes_Load(System::Object^ sender, System::EventArgs^ e) {
		dgv_registros->DataSource = ObtenerUsuarios();
	}
		   DataTable^ ObtenerUsuarios() {

			   try
			   {
				   //se agregó una función en la clase MYSQLConnector  para ejecutar consultas 
				   //y estas se guardan en una estructura de datos  (dataTable)  
				   return connector->ExecuteQuery("Select * from lugares");
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error: " + ex->Message);
			   }

		   }
	};
}
