#pragma once
#include <iostream>
#include <string>
#include "ConexionBD.h"
#include <mysql.h>
using namespace std;


class Sponsor
{
private:
    int id;
    string nombre;
    string pais;
public:
    Sponsor() {}
    Sponsor(int id, string nombre, string pais)
    {
		this->id = id;
		this->nombre = nombre;
		this->pais = pais;
    }
    //~Sponsor();
    int getId() { return id; };
    string getNombre() { return nombre; };
    string getPais() { return pais; };
    void setId(int id) { this->id = id; };
    void setNombre(string nombre) { this->nombre = nombre; };
    void setPais(string pais) { this->pais = pais; };

	//mas metodos
    void mostrarSponsor() 
	{
		int q_estado=0;
		ConexionBD cnn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cnn.abrirConexion();
		if (cnn.getConector()) {
			// Procesar resultados
			cout << "------Datos Sponsors------" << endl;
			string consulta = "select * from sponsors;";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cnn.getConector(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cnn.getConector());
				while (fila = mysql_fetch_row(resultado)) {
					cout << "ID: " << fila[0] << endl;
					cout << "Nombre: " << fila[1] << endl;
					cout << "Pais: " << fila[2] << endl;
					cout << "-------------------------" << endl;
				}

			}
			else
			{
				cout << "Error al consultar la base de datos" << endl;
				cout << "Error al consultar la base de datos: " << mysql_error(cnn.getConector()) << endl;
			}
		}
		else
		{
			cout << "Error al conectar a la base de datos" << endl;
		}

	}

};

