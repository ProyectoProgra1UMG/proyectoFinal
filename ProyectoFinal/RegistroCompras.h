#pragma once

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
		RegistroCompras(Form^ _menuempleados)
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
		~RegistroCompras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btt_regreso;
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
			this->SuspendLayout();
			// 
			// btt_regreso
			// 
			this->btt_regreso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_regreso->Location = System::Drawing::Point(79, 126);
			this->btt_regreso->Name = L"btt_regreso";
			this->btt_regreso->Size = System::Drawing::Size(112, 38);
			this->btt_regreso->TabIndex = 0;
			this->btt_regreso->Text = L"Regresar";
			this->btt_regreso->UseVisualStyleBackColor = true;
			this->btt_regreso->Click += gcnew System::EventHandler(this, &RegistroCompras::btt_regreso_Click);
			// 
			// RegistroCompras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->btt_regreso);
			this->Name = L"RegistroCompras";
			this->Text = L"RegistroCompras";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btt_regreso_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		menuempleados->Show();

	}

	};
}
