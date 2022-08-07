#include <iostream>
using namespace std;

inline double cubo (const double lado) {
    return lado * lado * lado;
}

int main()
{
    // 1.- Funciones en linea
    // Ayudan a reducir la sobreccarga de funciones en la pila
    // Ocupan mas memmoia  pero se ejecuan de forma rapida
    // Son usadas para funciones muy cortas
    // No se apican al mecanismo de llamda y retorno habitual

    double lado;
    cout << "Introuduzca el lado de su cubo: ";
    cin >> lado;

    // LO que hace el compilador es copiar el contenido de la fincionc en el lugar donde se la llama
    cout << "El resultado es: " << cubo(lado) << endl; 
    system("pause");
    return 0;
}