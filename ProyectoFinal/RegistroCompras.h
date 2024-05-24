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
			this->btt_regreso = (gcnew System::Windows::Forms::Button());
			this->dgv_registro = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_encavezado = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_registro))->BeginInit();
			this->SuspendLayout();
			// 
			// btt_regreso
			// 
			this->btt_regreso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_regreso->Location = System::Drawing::Point(868, 26);
			this->btt_regreso->Margin = System::Windows::Forms::Padding(2);
			this->btt_regreso->Name = L"btt_regreso";
			this->btt_regreso->Size = System::Drawing::Size(84, 31);
			this->btt_regreso->TabIndex = 0;
			this->btt_regreso->Text = L"Regresar";
			this->btt_regreso->UseVisualStyleBackColor = true;
			this->btt_regreso->Click += gcnew System::EventHandler(this, &RegistroCompras::btt_regreso_Click);
			// 
			// dgv_registro
			// 
			this->dgv_registro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_registro->Location = System::Drawing::Point(12, 77);
			this->dgv_registro->Name = L"dgv_registro";
			this->dgv_registro->Size = System::Drawing::Size(950, 259);
			this->dgv_registro->TabIndex = 1;
			// 
			// lbl_encavezado
			// 
			this->lbl_encavezado->AutoSize = true;
			this->lbl_encavezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encavezado->Location = System::Drawing::Point(440, 31);
			this->lbl_encavezado->Name = L"lbl_encavezado";
			this->lbl_encavezado->Size = System::Drawing::Size(178, 20);
			this->lbl_encavezado->TabIndex = 2;
			this->lbl_encavezado->Text = L"Registro de Compras";
			// 
			// RegistroCompras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 372);
			this->Controls->Add(this->lbl_encavezado);
			this->Controls->Add(this->dgv_registro);
			this->Controls->Add(this->btt_regreso);
			this->Margin = System::Windows::Forms::Padding(2);
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
