#pragma once
#include "CompraTicketClass.h"
#include "MySQLConnector.h"
#include "CompraTicket.h"
#include "MenuEmpleados.h"
using namespace System::Windows::Forms;

public ref class LoginClass {
private:
	MySQLConnector^ connector;
public:	
	LoginClass(MySQLConnector^ _connector) { connector = _connector; }

	//---------------------------LOGIN CLIENTES----------------------------------------------
	void getLoginClientes(TextBox^ txb_usuario, TextBox^ txb_contrase�a, TickeClass^ ticketClass, Form^ login) {
		try
		{
			String^ usuario = txb_usuario->Text;
			String^ contrase�a = txb_contrase�a->Text;

			String^ query = "SELECT COUNT(*) FROM clientes WHERE nombre = @usuario AND contrase�a = @contrase�a";

			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				command->Parameters->AddWithValue("@usuario", usuario);
				command->Parameters->AddWithValue("@contrase�a", contrase�a);

				int count = Convert::ToInt32(command->ExecuteScalar());

				connector->CloseConnection();

				if (count > 0) {
					ticketClass->nombreCliente(txb_usuario->Text);
					ProyectoFinal::CompraTicket^ compraticket = gcnew ProyectoFinal::CompraTicket(ticketClass, login);
					compraticket->Show();
					login->Hide();
				}
				else {
					MessageBox::Show("Usuario o contrase�a incorrectos. Por favor, int�ntelo de nuevo.");
					connector->CloseConnection();
				}
			}
			else {
				MessageBox::Show("Conector no ejecutado.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(" error: " + ex->Message);
			connector->CloseConnection();
		}
		txb_usuario->Text = "";
		txb_contrase�a->Text = "";
	}

	//---------------------------LOGIN EMPLEADOS----------------------------------------------
	void getLoginEmpleado(TextBox^ txb_usuario, TextBox^ txb_contrase�a, TickeClass^ ticketClass, Form^ login) {
		try
		{
			String^ usuario = txb_usuario->Text;
			String^ contrase�a = txb_contrase�a->Text;

			String^ query = "SELECT COUNT(*) FROM empleados WHERE nombre = @usuario AND contrase�a = @contrase�a";

			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				command->Parameters->AddWithValue("@usuario", usuario);
				command->Parameters->AddWithValue("@contrase�a", contrase�a);

				int count = Convert::ToInt32(command->ExecuteScalar());

				connector->CloseConnection();

				if (count > 0) {
					ticketClass->nombreCliente(txb_usuario->Text);
					ProyectoFinal::MenuEmpleados^ menuempleados = gcnew ProyectoFinal::MenuEmpleados(login); 
					menuempleados->Show(); 
					login->Hide();
				}
				else {
					MessageBox::Show("Usuario o contrase�a incorrectos. Por favor, int�ntelo de nuevo.");
					connector->CloseConnection();
				}
			}
			else {
				MessageBox::Show("Conector no ejecutado.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(" error: " + ex->Message);
			connector->CloseConnection();
		}
		txb_usuario->Text = "";
		txb_contrase�a->Text = "";
	}
};