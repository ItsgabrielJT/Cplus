#include <iostream>
#include <stdexcept> // para la clase de excepción invalid_argument
#include "Tiempo.h"

using namespace std;

int main()
{
    Tiempo t; // instancia un objeto t de la clase Tiempo

    // imprime los valores iniciales del objeto Tiempo t
    cout << "El tiempo universal inicial es ";
    t.imprimirUniversal(); // 00:00:00
    cout << "\nEl tiempo universal estandar es ";
    t.imprimirEstandar(); // 12:00:00 AM
    t.establecerTiempo( 13, 27, 6 ); // cambia el tiempo

    // imprime los nuevos valores del objeto t Tiempo
    cout << "\n\nEl tiempo universal despues de establecerTiempo es ";
    t.imprimirUniversal(); // 13:27:06
    cout << "\nEl tiempo estandar despues de establecerTiempo es ";
    t.imprimirEstandar(); // 1:27:06 PM

    // intenta establecer el tiempo con valores inválidos
    try
    {
        t.establecerTiempo( 99, 99, 99 ); // todos los valores fuera de rango
    }
    catch ( invalid_argument &e )
    {
        cout << "\n\nExcepcion: " << e.what() << endl;
    }

    // imprime los valores de t después de especificar valores inválidos
    cout << "\n\nDespues de intentar ajustes invalidos:"
    << "\nTiempo universal: ";
    t.imprimirUniversal(); // 13:27:06
    cout << "\nTiempo estandar: ";
    t.imprimirEstandar(); // 1:27:06 PM
    cout << endl;
}