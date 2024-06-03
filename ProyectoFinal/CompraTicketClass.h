#pragma once
#include "MySQLConnector.h"

using namespace System::Windows::Forms;

public ref class TickeClass {
private:
    MySQLConnector^ connector;
    int cantidad;
    double total;
    double precioDouble;
    String^ totaldosString;
    String^ nombre ="---";
public:
    TickeClass(MySQLConnector^ _connector) {
        connector = _connector;
    }
    //--------------------------------OBTENER NOMBRE DE CLIENTE-------------------------------------------
    void nombreCliente(String^ _nombre) {
        nombre = _nombre;
    }

    String^ nombreUsuario() {
        return nombre;
    }

    //--------------------------------RELLENO DEL COMBOX-------------------------------------------
    void comboxID(ComboBox^ cbx_id) {
        try
        {
            String^ query = "SELECT idlugar FROM lugares";

            if (connector->OpenConnection()) {
                MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
                MySqlDataReader^ reader = command->ExecuteReader();

                cbx_id->Items->Clear();

                while (reader->Read()) {
                    int id = reader->GetInt32(0);
                    cbx_id->Items->Add(id.ToString());
                }

                reader->Close();
                connector->CloseConnection();
            }
            else {
                MessageBox::Show("Conector no ejecutado.");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(" error: " + ex->Message);
            connector->CloseConnection();
        }
    }
    

    //--------------------------------RECIBE CANTIDAD-------------------------------------------
    void darCantidad(int _cantidad) {
        cantidad = _cantidad;
    }




    //--------------------------------AUTO RELLENO-------------------------------------------
    void autoRelleno(Label^ lbl_dedos, Label^ lbl_adedos, Label^ lbl_fechados, Label^ lbl_horados, Label^ lbl_preciodos, String^ seleccion) {
        try
        {
            String^ query = "SELECT * FROM lugares WHERE idlugar = " + seleccion;

            if (connector->OpenConnection()) {
                MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
                MySqlDataReader^ reader = command->ExecuteReader();

                if (reader->Read()) {
                    String^ lugarSalida = reader["lugarSalida"]->ToString();
                    String^ lugarDestino = reader["lugarDestino"]->ToString();
                    String^ precio = reader["precio"]->ToString();
                    String^ fecha = reader["fecha"]->ToString();
                    String^ hora = reader["hora"]->ToString();

                    // Esto elimina el primer carácter, que se asume es "Q"
                    String^ precioString; 
                    if (precio->StartsWith("Q")) { 
                        precioString = precio->Substring(1); 
                    } 
                    else { 
                        precioString = precio; 
                    }
                    precioDouble = Convert::ToDouble(precioString);
                    calculoTotal();

                    lbl_dedos->Text = lugarSalida;
                    lbl_adedos->Text = lugarDestino;
                    lbl_preciodos->Text = precio;
                    lbl_fechados->Text = fecha;
                    lbl_horados->Text = hora;
                }

                reader->Close();
                connector->CloseConnection();
            }
            else {
                MessageBox::Show("Conector no ejecutado.");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(" error: " + ex->Message);
            connector->CloseConnection();
        }
    }


    //--------------------------------CALCULAR TOTAL-------------------------------------------
    void calculoTotal() { 
        total = precioDouble * cantidad; 
        String^ totalString = String::Format("{0:F2}", total);
        totaldosString = "Q" + totalString; 
    }


    //--------------------------------RELLENA EL TOTAL-------------------------------------------
    void totalString(Label^ lbl_totaldos) {
        calculoTotal();
        lbl_totaldos->Text = totaldosString;
    }


    //--------------------------------SUBIR REGISTRO-------------------------------------------
    void registroCompras(Label^ lbl_dedos, Label^ lbl_adedos, Label^ lbl_preciodos, Label^ lbl_fechados, Label^ lbl_horados, NumericUpDown^ nud_cantidadT, Label^ lbl_totaldos) {
        try
        {
            String^ _nombre = nombre;
            String^ salida = lbl_dedos->Text;
            String^ destino = lbl_adedos->Text;
            String^ precio = lbl_preciodos->Text;
            String^ fecha = lbl_fechados->Text;
            String^ hora = lbl_horados->Text;
            String^ cantidad = nud_cantidadT->Text;
            String^ total = lbl_totaldos->Text;

            String^ query = "INSERT INTO compras (nombreCliente, lugarSalida, lugarDestino, precio, fecha, hora, cantidad, total) VALUES (@nombre, @lugarSalida, @lugarDestino, @precio, @fecha, @hora, @cantidad, @total)";

            if (connector->OpenConnection()) {
                MySqlCommand^ command = gcnew MySqlCommand(query, connector->getConnection());
                command->Parameters->AddWithValue("@nombre", _nombre);
                command->Parameters->AddWithValue("@lugarSalida", salida);
                command->Parameters->AddWithValue("@lugarDestino", destino);
                command->Parameters->AddWithValue("@precio", precio);
                command->Parameters->AddWithValue("@fecha", fecha);
                command->Parameters->AddWithValue("@hora", hora);
                command->Parameters->AddWithValue("@cantidad", cantidad);
                command->Parameters->AddWithValue("@total", total);


                int resultado = command->ExecuteNonQuery();

                if (resultado > 0) {
                    MessageBox::Show("Compra realizada con exito.");
                }
                else
                {
                    MessageBox::Show("Error al comprar.");
                }

                connector->CloseConnection();
            }
            else {
                MessageBox::Show("Conector no ejecutado.");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(" error: " + ex->Message);
            connector->CloseConnection();
        }
    }
};

