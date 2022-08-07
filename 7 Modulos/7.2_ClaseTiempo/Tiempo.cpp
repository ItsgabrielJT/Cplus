#include <iostream>
#include <iomanip>
#include <stdexcept> // para la clase de excepción invalid_argument
#include "Tiempo.h" // incluye la definición de la clase Tiempo de Tiempo.h

using namespace std;

// el constructor de Tiempo inicializa cada miembro de datos con cero.
Tiempo::Tiempo()
    : hora( 0 ), minuto( 0 ), segundo( 0 )
{
}

// 1.- Uso de la instruccion throw
// Crea un nuevo objeto del tipo invalid_argument
// Lo cual noes permite especificar una cadena de error especifica

// establece el nuevo valor de Tiempo usando la hora universal
void Tiempo::establecerTiempo( int h, int m, int s )
{
    // validando hora, minuto y segundo
    if ( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) && ( s >= 0 && s < 60 ) ) {
        hora = h;
        minuto = m;
        segundo = s;
    }
    else
        throw invalid_argument("hora, minuto y/o segundo estaban fuera de rango" );
}

// imprime el Tiempo en formato de hora universal (HH:MM:SS)
void Tiempo::imprimirUniversal() const
{
    cout << setfill( '0' ) << setw( 2 ) << hora << ":" << setw( 2 ) << minuto << ":" << setw( 2 ) << segundo;
}

// imprime el Tiempo en formato de hora estándar (HH:MM:SS AM o PM)
void Tiempo::imprimirEstandar() const
{
    cout << ( ( hora == 0 || hora == 12 ) ? 12 : hora % 12 ) << ":"
        << setfill( '0' ) << setw( 2 ) << minuto << ":" << setw( 2 )
        << segundo << ( hora < 12 ? " AM" : " PM" );
}