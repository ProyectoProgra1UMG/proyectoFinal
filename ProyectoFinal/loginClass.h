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
	void getLoginClientes(TextBox^ txb_usuario, TextBox^ txb_contraseña, TickeClass^ ticketClass, Form^ login) {
		try
		{
			String^ usuario = txb_usuario->Text;
			String^ contraseña = txb_contraseña->Text;

			String^ query = "SELECT COUNT(*) FROM clientes WHERE nombre = @usuario AND contraseña = @contraseña";

			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				command->Parameters->AddWithValue("@usuario", usuario);
				command->Parameters->AddWithValue("@contraseña", contraseña);

				int count = Convert::ToInt32(command->ExecuteScalar());

				connector->CloseConnection();

				if (count > 0) {
					ticketClass->nombreCliente(txb_usuario->Text);
					ProyectoFinal::CompraTicket^ compraticket = gcnew ProyectoFinal::CompraTicket(ticketClass, login);
					compraticket->Show();
					login->Hide();
				}
				else {
					MessageBox::Show("Usuario o contraseña incorrectos. Por favor, inténtelo de nuevo.");
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
		txb_contraseña->Text = "";
	}

	//---------------------------LOGIN EMPLEADOS----------------------------------------------
	void getLoginEmpleado(TextBox^ txb_usuario, TextBox^ txb_contraseña, TickeClass^ ticketClass, Form^ login) {
		try
		{
			String^ usuario = txb_usuario->Text;
			String^ contraseña = txb_contraseña->Text;

			String^ query = "SELECT COUNT(*) FROM empleados WHERE nombre = @usuario AND contraseña = @contraseña";

			if (connector->OpenConnection()) {
				MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
				command->Parameters->AddWithValue("@usuario", usuario);
				command->Parameters->AddWithValue("@contraseña", contraseña);

				int count = Convert::ToInt32(command->ExecuteScalar());

				connector->CloseConnection();

				if (count > 0) {
					ticketClass->nombreCliente(txb_usuario->Text);
					ProyectoFinal::MenuEmpleados^ menuempleados = gcnew ProyectoFinal::MenuEmpleados(login); 
					menuempleados->Show(); 
					login->Hide();
				}
				else {
					MessageBox::Show("Usuario o contraseña incorrectos. Por favor, inténtelo de nuevo.");
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
		txb_contraseña->Text = "";
	}
};