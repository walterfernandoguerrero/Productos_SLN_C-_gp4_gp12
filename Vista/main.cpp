#include <iostream>
#include "ConexionBD.h"
#include "Sponsor.h"
using namespace std;
int main()
{
    Sponsor sp;

    int opcion = 0;

    do {
        cout << "\n=================================\n";
        cout << "       GESTION DE SPONSORS       \n";
        cout << "=================================\n";
        cout << "1. Agregar Sponsor\n";
        cout << "2. Mostrar Sponsors\n";
        cout << "3. Modificar Sponsor\n";
        cout << "4. Eliminar Sponsor\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Limpiar el buffer de entrada para evitar saltos al leer strings
        cin.ignore();

        switch (opcion) {
        case 1: {
            string nombre, pais;
            cout << "\n--- AGREGAR SPONSOR ---\n";
            cout << "Ingrese el nombre: ";
            getline(cin, nombre);
            cout << "Ingrese el pais: ";
            getline(cin, pais);

            // Llamada al método para agregar
            sp.agregarSponsor(nombre, pais);
            break;
        }
        case 2: {
            cout << "\n";
            // Llamada al método para consultar todos
            sp.mostrarSponsor();
            break;
        }
        case 3: {
            int id;
            string nuevoNombre, nuevoPais;
            cout << "\n--- MODIFICAR SPONSOR ---\n";
            cout << "Ingrese el ID del sponsor a modificar: ";
            cin >> id;
            cin.ignore();

            cout << "Ingrese el nuevo nombre: ";
            getline(cin, nuevoNombre);
            cout << "Ingrese el nuevo pais: ";
            getline(cin, nuevoPais);

            // Llamada al método para actualizar
            sp.modificarSponsor(id, nuevoNombre, nuevoPais);
            break;
        }
        case 4: {
            int id;
            cout << "\n--- ELIMINAR SPONSOR ---\n";
            cout << "Ingrese el ID del sponsor a borrar: ";
            cin >> id;

            // Llamada al método para borrar
            sp.borrarSponsor(id);
            break;
        }
        case 5:
            cout << "\nSaliendo del programa...\n";
            break;
        default:
            cout << "\nOpcion no valida. Intente de nuevo.\n";
            break;
        }

    } while (opcion != 5);
  
	return 0;	

}


