#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1( "feliz" );
    string s2( " cumpleanios" );
    string s3;

    // prueba los operadores de igualdad y relacionales sobrecargados
    cout << "s1 es \"" << s1 << "\"; s2 es \"" << s2
        << "\"; s3 es \"" << s3 << '\"'
        << "\n\nLos resultados de comparar s2 y s1:"
        << "\ns2 == s1 produce " << ( s2 == s1 ? "true" : "false" )
        << "\ns2 != s1 produce " << ( s2 != s1 ? "true" : "false" )
        << "\ns2 > s1 produce " << ( s2 > s1 ? "true" : "false" )
        << "\ns2 < s1 produce " << ( s2 < s1 ? "true" : "false" )
        << "\ns2 >= s1 produce " << ( s2 >= s1 ? "true" : "false" )
        << "\ns2 <= s1 produce " << ( s2 <= s1 ? "true" : "false" );

    // empty nos permite verificar si un obejto string esta vacia
    // prueba la función miembro empty de string
    cout << "\n\nPrueba de s3.empty():" << endl;

    if ( s3.empty() ) {
        cout << "s3 esta vacia; se asigno s1 a s3;" << endl;
        s3 = s1 ; // asigna s1 a s3
        cout << "s3 es \"" << s3 << "\"";
    }

    // prueba el operador de concatenación sobrecargado de string
    cout << "\n\ns1 += s2 produce s1 = ";

    s1 += s2; // prueba el operador de concatenación sobrecargado
    cout << s1;

    // prueba el operador de concatenación sobrecargado de string con una cadena estilo C
    cout << "\n\ns1 += \" a ti\" produce" << endl;
    s1 += " a ti";
    cout << "s1 = " << s1 << "\n\n";

    // sustr Nos permite recrtar una cadena de strings
    // prueba la función miembro substr de string
    cout << "La subcadena de s1 que empieza en la ubicacion 0 para\n"
        << "17 caracteres, s1.substr(0, 17), es:\n"
        << s1.substr( 0, 17 ) << "\n\n";

    // prueba la opción "hasta el final de la cadena" de substr
    cout << "La subcadena de s1 qe empieza en\n"
        << "la ubicacion 18, s1.substr(18), es:\n"
        << s1.substr( 18 ) << endl;

    // prueba el constructor de copia
    string s4( s1 );
    cout << "\ns4 = " << s4 << "\n\n";

    // prueba el operador de asignación de copia sobrecargado(=) con la auto-asignación
    cout << "asignando s4 a s4" << endl;
    s4 = s4;
    cout << "s4 = " << s4 << endl;

    // prueba el uso del operador de subíndice sobrecargado para crear un lvalue
    s1[ 0 ] = 'F';
    s1[ 6 ] = 'C';
    cout << "\ns1 despues de s1[0] = 'F' y s1[6] = 'C' es: "
        << s1 << "\n\n";

    // la funcion at nos permite agregar una cadena a otra cadena en la posicion que ndiquemos
    // prueba el subíndice fuera de rango con la función miembro "at" de string
    try {
        cout << "El intento de asignar 'd' a s1.at( 30 ) produce:" << endl;
        s1.at( 30 ) = 'd'; // ERROR: subíndice fuera de rango
    }
    catch ( out_of_range &ex ) {
        cout << "Ocurrio una excepcion: " << ex.what() << endl;
    }
} // fin de main