#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    // 1.- Declaracion de arreglos como plantilla de clases
    // Para ña declarcion de abajo necesitamos la libreria array
    // En proyectos de software es mejor usar los objetos array y vector en ves de los arrglos integrados
    array <int, 12> numeros; // Arreglo de enteros con 12 elementos

    // Para indicar la poscicion del elemtnos lo hacemos asi
    // En los arreglos el 0 es la ubivacion del primer elemnto
    // x = posicion del elemnto
    // El numero de la posicion tiene que ser entero y positvo
    // numeros[x];

    // 2.- Uso del size_t
    // Este tipo de dato representa un integral sin signo
    // Es recomendble usarlo cuando declaramos subindices de arreglos o cuando representa al tamaño del arreglo
    // Esta definida en el espacio de nombres std o en la libreria cstddef

    // Forma de incicializar el arreglo con 0
    for (size_t i = 0; i < numeros.size(); ++i) 
        numeros[i] = 0;    

    cout << "Elemento" << setw(13) << "Valor" << endl;

    // Otra forma de inicializar el arreglo con 0 es 
    array <int, 12> conteo = {}; // Asigna valores de 0

    // Imprimimos la posicion y el valor que esta ubicado alli
    for ( size_t j = 0; j < numeros.size(); ++j )
        cout << setw( 7 ) << j << setw( 13 ) << numeros[ j ] << endl;


    // 3.- Asigrnar valores al arreglo
    array <int, 5> enteros = {12, 34, 12, 4, 1};

    // Imprimimos la posicion y el valor que esta ubicado alli
    for ( size_t j = 0; j < enteros.size(); ++j )
        cout << setw( 7 ) << j << setw( 13 ) << enteros[ j ] << endl;

    // 4.- Bunas practicas de programacion
    // Es buyen practica de programacion declarar el tamanio de un arreglo con una variable constante

    const size_t tamanio = 5;
    array <string, tamanio> nombres;

    // 5.- Comparacion entre arreglos
    // Los objetos arry se pueden compara entre si mediante operadores relacionales

    array <int, 5> estudiantesA = {12, 45, 23, 56, 78};
    array <int, 5> estudiantesB = {12, 45, 23, 56, 78};

    if (estudiantesA == estudiantesB)
        cout << "Estoos arreglos son iguales" << endl;

    // 6.- Asiganciones entre arrays
    array <int, 5> estudiantesC = estudiantesA;


    return 0;
}