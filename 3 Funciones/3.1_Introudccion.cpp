// 1.- Para que sirven
// Nos ayudan a modlarizar nuestro prorama es decir, que sea mas ordenado
// Podemos reutilizarlas
// Evita que repitamos codigo

// 2.- Buenas practicas
// Es bueno que una funcion se dedique a realizar una sola cosa
// El nombre de la funcion debe expresar lo que hace
// Para el nimbre de las funciones usaremos lowerCamelCase
// Siempre haceos los prototipos asi no sean necesarios
// Podemos colocar o no los nombres de los paraemtros

// 3.- Retorno de funciones
// lAs fucniones pueden retornar un tipo de dato 
// se indica void cuando no queremos que retoeene nada

#include <iostream>
#include <cstdlib> // Nos proporciona la funcion rand
#include <iomanip>
using namespace std;

// Prototios de funciones
void mostrarDatos(string, int); // Funcion que no retorna nada

int main()
{
    mostrarDatos("Joel", 12);

    // Ejemplo del uso de la funcion de una biblioteca
    // itera 20 veces
    for ( unsigned int contador = 1; contador <= 20; ++contador ) {
    // elije un número aleatorio de 1 a 6 y lo imprime
    cout << setw( 10 ) << ( 1 + rand() % 6 );   
    // si contador puede dividirse entre 5, empieza una nueva línea de salida
    if ( contador % 5 == 0 )
    cout << endl;
    } // fin de for
    system("pause");
    return 0;
}

void mostrarDatos(string nombre, int edad) {    
    cout << "Su identificacion es: " << nombre << " Edad: " << edad << endl;
}



