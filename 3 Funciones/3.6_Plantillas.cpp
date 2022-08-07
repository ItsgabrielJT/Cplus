#include <iostream>
using namespace std;

// Remplaza cada nombramiento de T con el tipo de dato que se le pase a la funcion
// o template < class T >
template < typename T > T maximo( T valor1, T valor2, T valor3 )
{
    T valorMaximo = valor1; // asume que valor1 es maximo

    // determina si valor2 es mayor que valorMaximo
    if ( valor2 > valorMaximo )
        valorMaximo = valor2;

    // determina si valor3 es mayor que valorMaximo
    if ( valor3 > valorMaximo )
        valorMaximo = valor3;

    return valorMaximo;
 } // fin de la plantilla de función maximo 

template < class P > auto minimo( P x, P y, P z ) -> P
{
    P valorMinimo = x;

    // determina si valor2 es menor que valorMaximo
    if ( y < valorMinimo )
        valorMinimo = y;

    // determina si valor3 es menor que valorMaximo
    if ( z < valorMinimo )
        valorMinimo = z;

    return valorMinimo;
}

int main()
{
    // 1.- Pantilla de funciones
    // Al definir una sola plantilla de funciones se genera una familia de sobrecargas de ellas
    // Las plantillas de funciones nos evita crear muchas fucniones para aplicar las sobrecargas

    // demuestra la función maximo con valores int
    int int1, int2, int3;

    cout << "Introduzca tres valores enteros: ";
    cin >> int1 >> int2 >> int3;

    // invoca a la versión int de maximo
    cout << "El valor int de maximo es: " << maximo( int1, int2, int3 );

    // demuestra la función maximo con valores double
    double double1, double2, double3;

    cout << "\n\nIntroduzca tres valores double: ";
    cin >> double1 >> double2 >> double3;

    // invoca a la versión double de maximo
    cout << "El valor double de maximo es: " << maximo( double1, double2, double3 );

    // demuestra la función maximo con valores char
    char char1, char2, char3;

    cout << "\n\nIntroduzca tres caracteres: ";
    cin >> char1 >> char2 >> char3;

    // invoca a la versión char de maximo
    cout << "El valor char de maximo es: " << maximo( char1, char2, char3 ) << endl;  

    cout << "-------------------------------------------------------" << endl << endl;

    // demuestra la función minimo con valores int

    cout << "Introduzca tres valores enteros: ";
    cin >> int1 >> int2 >> int3;

    // invoca a la versión int de minimo
    cout << "El valor int de minimo es: " << minimo( int1, int2, int3 );

    // demuestra la función minimo con valores double

    cout << "\n\nIntroduzca tres valores double: ";
    cin >> double1 >> double2 >> double3;

    // invoca a la versión double de minimo
    cout << "El valor double de minimo es: " << minimo( double1, double2, double3 );

    // demuestra la función minimo con valores char

    cout << "\n\nIntroduzca tres caracteres: ";
    cin >> char1 >> char2 >> char3;

    // invoca a la versión char de minimo
    cout << "El valor char de minimo es: " << minimo( char1, char2, char3 ) << endl;  

    system("pause");
    return 0;
}