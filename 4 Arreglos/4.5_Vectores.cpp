#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void imprimirVector( const vector< int > & ); // muestra el vector
void recibirVector( vector< int > & ); // introduce los valores en el vector

int main()
{
    // 1.- Creaqcion de vectores
    // Se colocal el tipo de dato y colocamos el identificador con el numero de elementos entrre parentesis
    // De manera predeterminada todos los valores de los vectores son 0

    vector< int > enteros1( 7 ); // vector de 7 elementos< int >
    vector< int > enteros2( 10 ); // vector de 10 elementos< int >

    // imprime el tamaño y el contenido de enteros1
    cout << "El tamanio del vector enteros1 es " << enteros1.size()
    << "\nvector despues de la inicializacion:" << endl;
    imprimirVector( enteros1 );

    // imprime el tamaño y el contenido de enteros2
    cout << "\nEl tamanio del vector enteros2 es " << enteros2.size()
    << "\nvector despues de la inicializacion:" << endl;
    imprimirVector( enteros2 );

    // recibe e imprime enteros1 y enteros2
    cout << "\nEscriba 17 enteros:" << endl;
    recibirVector( enteros1 );
    recibirVector( enteros2 );
    cout << "\nDespues de la entrada, los vectores contienen:\n" << "enteros1:" << endl;
    imprimirVector( enteros1 );
    cout << "enteros2:" << endl;
    imprimirVector( enteros2 );

    // usa el operador de desigualdad (!=) con objetos vector
    cout << "\nEvaluacion: enteros1 != enteros2" << endl;
    if ( enteros1 != enteros2 )
    cout << "enteros1 y enteros2 no son iguales" << endl;

    // 2.- f<roma de inicializar un vector
    // En el caso de vectores podemos inicializar un nuevo vector con otro ya existente
    // Se inicializa con una copia del otro vector
    // crea el vector enteros3 usando enteros1 como un
    // inicializador; imprime el tamaño y el contenido
    vector< int > enteros3( enteros1 ); // constructor de copia
    cout << "\nEl tamanio del vector enteros3 es " << enteros3.size()
    << "\nvector despues de la inicializacion:" << endl;
    imprimirVector( enteros3 );

    // usa el operador de asignacion (=) sobrecargado
    cout << "\nAsignacion de enteros2 a enteros1:" << endl;
    enteros1 = enteros2; // asigna enteros2 a enteros1
    cout << "enteros1:" << endl;
    imprimirVector( enteros1 );
    cout << "enteros2:" << endl;
    imprimirVector( enteros2 );

    // usa el operador de igualdad (==) con objetos vector
    cout << "\nEvaluacion: enteros1 == enteros2" << endl;
    if ( enteros1 == enteros2 )
        cout << "enteros1 y enteros2 son iguales" << endl;

    // usa corchetes para asignar el valor en la ubicación 5 como un rvalue
    cout << "\nenteros1[5] es " << enteros1[ 5 ];

    // usa corchetes para crear lvalue
    cout << "\n\nAsignacion de 1000 a enteros1[5]" << endl;
    enteros1[ 5 ] = 1000;
    cout << "enteros1:" << endl;
    imprimirVector( enteros1 );

    // 3.- Manejo de excepciones
    // El bloque try contiene los codigos de error que se generan
    // Mientrs que el cloque cacth maneja todo esos errore
    // La funcion .what inidica qwue tipo de excepcion ocurrio

    // intenta usar subíndice fuera de rango
    try {
        cout << "\nIntento de mostrar enteros1.at( 15 )" << endl;
        cout << enteros1.at( 15 ) << endl; // ERROR: fuera de rango
    } 
    catch ( out_of_range &ex ) {
        cerr << "Ocurrio una excepcion: " << ex.what() << endl;
    } 

    // 4.- Cambiar el tamaño de un vector
    // La diferencia entre vectores y arreglos es sobre sobre la forma dinamica que puede tener el vector
    // Es decir os vectores pueden cmabiar de tamaño
    // push_back nos ayuda con eso
    cout << "\nEl tamanio actual de enteros3 es: " << enteros3.size() << endl;
    enteros3.push_back( 1000 ); // agrega 1000 al final del vector
    cout << "El tamanio nuevo de enteros3 es: " << enteros3.size() << endl;
    cout << "Ahora enteros3 contiene: ";
    imprimirVector( enteros3 );

    system("pause");
    return 0;
} 

// imprime el contenido del vector
void imprimirVector( const vector< int > &arreglo ) {
    for ( int elemento : arreglo )
        cout << elemento << " ";
    cout << endl;
} 

// recibe el contenido del vector
void recibirVector( vector< int > &arreglo ) {
    for ( int &elemento : arreglo )
        cin >> elemento;
} 