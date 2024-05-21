#pragma once
namespace ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegistroClientes
	/// </summary>
	public ref class RegistroClientes : public System::Windows::Forms::Form
	{
	private: Form^ login;
	public:
		RegistroClientes(Form^ _login)
		{
			InitializeComponent();
			login = _login;
			
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~RegistroClientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_encabezado;
	private: System::Windows::Forms::Label^ lbl_usuario;
	private: System::Windows::Forms::Label^ lbl_contrase�a;
	private: System::Windows::Forms::TextBox^ txb_usuario;
	private: System::Windows::Forms::TextBox^ txb_contrase�a;
	protected:




	private: System::Windows::Forms::Button^ btt_crear;
	private: System::Windows::Forms::Button^ btt_iniciar;



	protected:

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
			this->lbl_encabezado = (gcnew System::Windows::Forms::Label());
			this->lbl_usuario = (gcnew System::Windows::Forms::Label());
			this->lbl_contrase�a = (gcnew System::Windows::Forms::Label());
			this->txb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txb_contrase�a = (gcnew System::Windows::Forms::TextBox());
			this->btt_crear = (gcnew System::Windows::Forms::Button());
			this->btt_iniciar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_encabezado
			// 
			this->lbl_encabezado->AutoSize = true;
			this->lbl_encabezado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_encabezado->Location = System::Drawing::Point(74, 9);
			this->lbl_encabezado->Name = L"lbl_encabezado";
			this->lbl_encabezado->Size = System::Drawing::Size(225, 38);
			this->lbl_encabezado->TabIndex = 0;
			this->lbl_encabezado->Text = L"Crear Cuenta";
			// 
			// lbl_usuario
			// 
			this->lbl_usuario->AutoSize = true;
			this->lbl_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_usuario->Location = System::Drawing::Point(143, 74);
			this->lbl_usuario->Name = L"lbl_usuario";
			this->lbl_usuario->Size = System::Drawing::Size(79, 25);
			this->lbl_usuario->TabIndex = 1;
			this->lbl_usuario->Text = L"Usuario";
			this->lbl_usuario->Click += gcnew System::EventHandler(this, &RegistroClientes::label2_Click);
			// 
			// lbl_contrase�a
			// 
			this->lbl_contrase�a->AutoSize = true;
			this->lbl_contrase�a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_contrase�a->Location = System::Drawing::Point(117, 165);
			this->lbl_contrase�a->Name = L"lbl_contrase�a";
			this->lbl_contrase�a->Size = System::Drawing::Size(114, 25);
			this->lbl_contrase�a->TabIndex = 2;
			this->lbl_contrase�a->Text = L"Contrase�a";
			// 
			// txb_usuario
			// 
			this->txb_usuario->Location = System::Drawing::Point(109, 102);
			this->txb_usuario->Name = L"txb_usuario";
			this->txb_usuario->Size = System::Drawing::Size(133, 22);
			this->txb_usuario->TabIndex = 3;
			// 
			// txb_contrase�a
			// 
			this->txb_contrase�a->Location = System::Drawing::Point(109, 193);
			this->txb_contrase�a->Name = L"txb_contrase�a";
			this->txb_contrase�a->Size = System::Drawing::Size(133, 22);
			this->txb_contrase�a->TabIndex = 4;
			// 
			// btt_crear
			// 
			this->btt_crear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_crear->Location = System::Drawing::Point(148, 304);
			this->btt_crear->Name = L"btt_crear";
			this->btt_crear->Size = System::Drawing::Size(74, 34);
			this->btt_crear->TabIndex = 5;
			this->btt_crear->Text = L"Crear";
			this->btt_crear->UseVisualStyleBackColor = true;
			// 
			// btt_iniciar
			// 
			this->btt_iniciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btt_iniciar->Location = System::Drawing::Point(103, 353);
			this->btt_iniciar->Name = L"btt_iniciar";
			this->btt_iniciar->Size = System::Drawing::Size(146, 34);
			this->btt_iniciar->TabIndex = 6;
			this->btt_iniciar->Text = L"Iniciar Sesi�n";
			this->btt_iniciar->UseVisualStyleBackColor = true;
			this->btt_iniciar->Click += gcnew System::EventHandler(this, &RegistroClientes::btt_iniciar_Click);
			// 
			// RegistroClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(408, 391);
			this->Controls->Add(this->btt_iniciar);
			this->Controls->Add(this->btt_crear);
			this->Controls->Add(this->txb_contrase�a);
			this->Controls->Add(this->txb_usuario);
			this->Controls->Add(this->lbl_contrase�a);
			this->Controls->Add(this->lbl_usuario);
			this->Controls->Add(this->lbl_encabezado);
			this->Name = L"RegistroClientes";
			this->Text = L"RegistroClientes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btt_iniciar_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
	login->Show();
}
};
}
