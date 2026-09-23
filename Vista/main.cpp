#include <iostream>
#include "ConexionBD.h"
#include "Sponsor.h"
using namespace std;
int main()
{
    cout << "Hello World!\n";
	/*ConexionBD conexion = ConexionBD();
	conexion.abrirConexion();

	if (conexion.getConector() != NULL)
	{
		cout << "Conexion exitosa" << endl;
	}
	else
	{
		cout << "Conexion fallida" << endl;
	}
	conexion.cerrarConexion();	*/


	//crud Sponsor

	Sponsor sponsor = Sponsor();

	sponsor.mostrarSponsor();
	return 0;	

}


