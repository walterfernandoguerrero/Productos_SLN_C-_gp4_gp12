#pragma once
#include <mysql.h>
#include <iostream>
using namespace std;
class ConexionBD
{
private:
	MYSQL* conector;
public :
	void abrirConexion()
	{
		conector = mysql_init(0);
		conector = mysql_real_connect(conector, "localhost", "root", "root", "GestorJugadores",3306, NULL, 0);
	}
	MYSQL* getConector()
	{
		return conector;
	}
	void cerrarConexion()
	{
		mysql_close(conector);
	}
};

