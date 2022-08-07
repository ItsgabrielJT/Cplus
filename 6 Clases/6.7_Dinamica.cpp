// 1.- Memoria dinamica mediante new
// El operador new asigna el almacenimeitno necesario para un obejto

// 2.- Liberacion de memoria mediante delete
// Para destruir un obejto con la palabra new y desocupar el espacio que usa


#include <iostream>
using namespace std;

int main()
{
    // Inicializacion de memoria dinamica
    double *ptr = new double (3.242525);

    // Los parentesis inicializan los elemtnos en 0
    int *arregloCalifiaciones = new int[10] ();

    // Apartir de C++ 11 podemos colocar el inicializador de listas
    int *arregloNumeros = new int[10] {};

    // En caso de tener un arreglo de obejtos, primero llama al destructor de cada obejeto
    delete [] arregloCalifiaciones;
    
    system("pause");
    return 0;
}