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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->brd_registro = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brd_registro))->BeginInit();
			this->SuspendLayout();
			// 
			// brd_registro
			// 
			this->brd_registro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->brd_registro->Location = System::Drawing::Point(12, 51);
			this->brd_registro->Name = L"brd_registro";
			this->brd_registro->RowHeadersWidth = 51;
			this->brd_registro->RowTemplate->Height = 24;
			this->brd_registro->Size = System::Drawing::Size(866, 470);
			this->brd_registro->TabIndex = 0;
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->Location = System::Drawing::Point(279, 9);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(279, 38);
			this->lbl_encabezado->TabIndex = 1;
			this->lbl_encabezado->Text = L"Registro de Rutas";
			// 
			// MostrarRutas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 533);
			this->Controls->Add(this->lbl_encabezado);
			this->Controls->Add(this->brd_registro);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MostrarRutas";
			this->Text = L"MostrarRutas";
			this->Load += gcnew System::EventHandler(this, &MostrarRutas::MostrarRutas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brd_registro))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MostrarRutas_Load(System::Object^ sender, System::EventArgs^ e) {
		brd_registro->DataSource = ObtenerUsuarios();
	}
		   DataTable^ ObtenerUsuarios() {

			   try
			   {
				   //se agreg� una funci�n en la clase MYSQLConnector  para ejecutar consultas 
				   //y estas se guardan en una estructura de datos  (dataTable)  
				   return connector->ExecuteQuery("Select * from lugares");
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error: " + ex->Message);
			   }

		   }

	};
}
