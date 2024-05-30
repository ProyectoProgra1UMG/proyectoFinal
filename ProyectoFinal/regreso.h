#pragma once
#include "Form1.h"
using namespace System::Windows::Forms; 
public ref class RegresoIncio { 
public:
	RegresoIncio(){}

	void regreso() {
		ProyectoFinal::Form1^ form1 = gcnew ProyectoFinal::Form1();
		form1->Show();
	}
};