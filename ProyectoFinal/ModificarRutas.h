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
	/// Resumen de ModificarRutas
	/// </summary>
	public ref class ModificarRutas : public System::Windows::Forms::Form
	{
	private: String^ lSalida, ^lDestino, ^precio, ^fecha, ^hora, ^idLugar;
		   MySQLConnector^ connector = gcnew MySQLConnector();
	public:
		ModificarRutas(String^ _id, String^ _lSalida, String^ _lDestino, String^ _precio, String^ _fecha, String^ _hora)
		{
			InitializeComponent();
			lSalida = _lSalida;
			lDestino = _lDestino;
			precio = _precio; 
			fecha = _fecha;
			hora = _hora;
			idLugar = _id;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarRutas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_lSalida;
	private: System::Windows::Forms::Label^ lbl_lDestino;
	private: System::Windows::Forms::Label^ lbl_precio;
	private: System::Windows::Forms::Label^ lbl_fecha;
	private: System::Windows::Forms::Label^ lbl_hora;
	private: System::Windows::Forms::TextBox^ txb_lSalida;
	private: System::Windows::Forms::TextBox^ txb_lDestino;
	private: System::Windows::Forms::TextBox^ txb_precio;
	private: System::Windows::Forms::TextBox^ txb_fecha;
	private: System::Windows::Forms::TextBox^ txb_hora;

	protected:

	protected:









	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->lbl_lSalida = (gcnew System::Windows::Forms::Label());
			this->lbl_lDestino = (gcnew System::Windows::Forms::Label());
			this->lbl_precio = (gcnew System::Windows::Forms::Label());
			this->lbl_fecha = (gcnew System::Windows::Forms::Label());
			this->lbl_hora = (gcnew System::Windows::Forms::Label());
			this->txb_lSalida = (gcnew System::Windows::Forms::TextBox());
			this->txb_lDestino = (gcnew System::Windows::Forms::TextBox());
			this->txb_precio = (gcnew System::Windows::Forms::TextBox());
			this->txb_fecha = (gcnew System::Windows::Forms::TextBox());
			this->txb_hora = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_lSalida
			// 
			this->lbl_lSalida->AutoSize = true;
			this->lbl_lSalida->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_lSalida->Location = System::Drawing::Point(63, 38);
			this->lbl_lSalida->Name = L"lbl_lSalida";
			this->lbl_lSalida->Size = System::Drawing::Size(128, 21);
			this->lbl_lSalida->TabIndex = 0;
			this->lbl_lSalida->Text = L"Lugas de Salida";
			// 
			// lbl_lDestino
			// 
			this->lbl_lDestino->AutoSize = true;
			this->lbl_lDestino->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_lDestino->Location = System::Drawing::Point(44, 84);
			this->lbl_lDestino->Name = L"lbl_lDestino";
			this->lbl_lDestino->Size = System::Drawing::Size(139, 21);
			this->lbl_lDestino->TabIndex = 1;
			this->lbl_lDestino->Text = L"Lugar de Destino";
			// 
			// lbl_precio
			// 
			this->lbl_precio->AutoSize = true;
			this->lbl_precio->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_precio->Location = System::Drawing::Point(125, 127);
			this->lbl_precio->Name = L"lbl_precio";
			this->lbl_precio->Size = System::Drawing::Size(58, 21);
			this->lbl_precio->TabIndex = 2;
			this->lbl_precio->Text = L"Precio";
			// 
			// lbl_fecha
			// 
			this->lbl_fecha->AutoSize = true;
			this->lbl_fecha->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_fecha->Location = System::Drawing::Point(118, 176);
			this->lbl_fecha->Name = L"lbl_fecha";
			this->lbl_fecha->Size = System::Drawing::Size(54, 21);
			this->lbl_fecha->TabIndex = 3;
			this->lbl_fecha->Text = L"Fecha";
			// 
			// lbl_hora
			// 
			this->lbl_hora->AutoSize = true;
			this->lbl_hora->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_hora->Location = System::Drawing::Point(125, 223);
			this->lbl_hora->Name = L"lbl_hora";
			this->lbl_hora->Size = System::Drawing::Size(47, 21);
			this->lbl_hora->TabIndex = 4;
			this->lbl_hora->Text = L"Hora";
			// 
			// txb_lSalida
			// 
			this->txb_lSalida->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txb_lSalida->ForeColor = System::Drawing::Color::Black;
			this->txb_lSalida->Location = System::Drawing::Point(197, 38);
			this->txb_lSalida->Name = L"txb_lSalida";
			this->txb_lSalida->Size = System::Drawing::Size(157, 29);
			this->txb_lSalida->TabIndex = 5;
			// 
			// txb_lDestino
			// 
			this->txb_lDestino->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txb_lDestino->ForeColor = System::Drawing::Color::Black;
			this->txb_lDestino->Location = System::Drawing::Point(197, 81);
			this->txb_lDestino->Name = L"txb_lDestino";
			this->txb_lDestino->Size = System::Drawing::Size(157, 29);
			this->txb_lDestino->TabIndex = 6;
			// 
			// txb_precio
			// 
			this->txb_precio->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txb_precio->ForeColor = System::Drawing::Color::Black;
			this->txb_precio->Location = System::Drawing::Point(196, 124);
			this->txb_precio->Name = L"txb_precio";
			this->txb_precio->Size = System::Drawing::Size(157, 29);
			this->txb_precio->TabIndex = 7;
			// 
			// txb_fecha
			// 
			this->txb_fecha->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txb_fecha->ForeColor = System::Drawing::Color::Black;
			this->txb_fecha->Location = System::Drawing::Point(196, 173);
			this->txb_fecha->Name = L"txb_fecha";
			this->txb_fecha->Size = System::Drawing::Size(157, 29);
			this->txb_fecha->TabIndex = 8;
			// 
			// txb_hora
			// 
			this->txb_hora->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txb_hora->ForeColor = System::Drawing::Color::Black;
			this->txb_hora->Location = System::Drawing::Point(196, 220);
			this->txb_hora->Name = L"txb_hora";
			this->txb_hora->Size = System::Drawing::Size(157, 29);
			this->txb_hora->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(107, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 30);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarRutas::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(237, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 31);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarRutas::button2_Click);
			// 
			// ModificarRutas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->ClientSize = System::Drawing::Size(441, 366);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txb_hora);
			this->Controls->Add(this->txb_fecha);
			this->Controls->Add(this->txb_precio);
			this->Controls->Add(this->txb_lDestino);
			this->Controls->Add(this->txb_lSalida);
			this->Controls->Add(this->lbl_hora);
			this->Controls->Add(this->lbl_fecha);
			this->Controls->Add(this->lbl_precio);
			this->Controls->Add(this->lbl_lDestino);
			this->Controls->Add(this->lbl_lSalida);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"ModificarRutas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModificarRutas";
			this->Load += gcnew System::EventHandler(this, &ModificarRutas::ModificarRutas_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	private: System::Void ModificarRutas_Load(System::Object^ sender, System::EventArgs^ e) {
		txb_lSalida->Text = lSalida;
		txb_lDestino->Text = lDestino;
		txb_precio->Text = precio;
		txb_fecha->Text = fecha;
		txb_hora->Text = hora;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ _lSalida = txb_lSalida->Text;
		String^ _lDestino = txb_lDestino->Text;
		String^ _precio = txb_precio->Text;
		String^ _fecha = txb_fecha->Text;
		String^ _hora = txb_hora->Text;
		try
		{
			String^ query = "UPDATE lugares SET lugarSalida = @lugarSalida, lugarDestino = @lugarDestino, precio = @precio, fecha = @fecha, hora = @hora WHERE idlugar = @idlugar";

			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				command->Parameters->AddWithValue("@lugarSalida", _lSalida);
				command->Parameters->AddWithValue("@lugarDestino", _lDestino);
				command->Parameters->AddWithValue("@precio", _precio);
				command->Parameters->AddWithValue("@fecha", _fecha);
				command->Parameters->AddWithValue("@hora", _hora);
				command->Parameters->AddWithValue("@idlugar", idLugar);
				
				int resultado = command->ExecuteNonQuery(); 
				connector->CloseConnection(); 
				 
				if (resultado > 0) { 
					MessageBox::Show("Registro actualizado!"); 
				}
				else { 
					MessageBox::Show("Error al actualizar el registro"); 
				}

			}
			else {
				MessageBox::Show("Conector no ejecutado");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(" error: " + ex->Message);
			connector->CloseConnection();
		}
	}
};
}
