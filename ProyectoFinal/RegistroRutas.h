#pragma once

namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistroRutas
	/// </summary>
	public ref class RegistroRutas : public System::Windows::Forms::Form
	{
	private: Form^ menuempleados;
	public:
		RegistroRutas(Form^ _menuempleados)
		{
			InitializeComponent();
			menuempleados = _menuempleados;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegistroRutas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btt_regresar;
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
			this->btt_regresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btt_regresar
			// 
			this->btt_regresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_regresar->Location = System::Drawing::Point(75, 102);
			this->btt_regresar->Name = L"btt_regresar";
			this->btt_regresar->Size = System::Drawing::Size(122, 36);
			this->btt_regresar->TabIndex = 0;
			this->btt_regresar->Text = L"Regresar";
			this->btt_regresar->UseVisualStyleBackColor = true;
			this->btt_regresar->Click += gcnew System::EventHandler(this, &RegistroRutas::btt_regresar_Click);
			// 
			// RegistroRutas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->btt_regresar);
			this->Name = L"RegistroRutas";
			this->Text = L"RegistroRutas";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btt_regresar_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		menuempleados->Show();
	}
	};
}
