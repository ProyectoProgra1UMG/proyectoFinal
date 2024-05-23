#pragma once
#include <iostream>

using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace std;
using namespace System::Data;

public ref class MySQLConnector {
private:
    MySqlConnection^ connection;

public:
    String^ connectionString;
    String^ host = "127.0.0.1";
    String^ usuario = "root";
    String^ contraseña = "";
    String^ database = "bd_trenes_tpg";

    MySQLConnector() : connection(nullptr)
    {
        connectionString = "Server=" + host + ";Uid=" + usuario + ";Pwd=" + contraseña + ";Database=" + database + ";";
        connection = gcnew MySqlConnection(connectionString);
    }

    bool OpenConnection() {
        try {
            connection->Open();
            return true;
        }
        catch (Exception^ ex) {

            return false;
        }
    }

    void CloseConnection() {
        if (connection != nullptr && connection->State == ConnectionState::Open) {
            connection->Close();

        }
    }

    MySqlConnection^ getConnection() {
        return connection;
    }

    ~MySQLConnector() {
        CloseConnection();
    }
    DataTable^ ExecuteQuery(String^ query) {
        DataTable^ dataTable = gcnew DataTable();

        try {
            if (OpenConnection()) {
                MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
                MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter(cmd);

                dataAdapter->Fill(dataTable);
                CloseConnection();
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("Error: " + ex->Message);
        }

        return dataTable;
    }
};