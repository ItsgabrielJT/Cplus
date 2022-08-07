#include <iostream>
using namespace std;

int main()
{
    // 1.- Caso switch
    // Es una estructura de seleccion mutiple
    // Tu colocas en cada case los caos que quieres que entren

    int opcion = 0;
    cout << "Ingrese una pocion: ";
    cin >> opcion;

    switch (opcion) {
    case 1:
        cout << "opcion 1";
        break; // Los break hacemm que no se impriman los demas opciones
    case 2:
        cout << "opcion 2";
        break;
    case 3:
        cout << "opcion 3";
        break;
    default: // Funciona para cuando no entra en ningun caso
        cout << "Ninguna opcion";
    }
}