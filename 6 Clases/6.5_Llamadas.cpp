#include <iostream>
using namespace std;

// Ejemplo del uso de llamadas en casacada
class Tiempo
{
public: 
    explicit Tiempo( int = 0, int = 0, int = 0 ); // constructor predeterminado

    // funciones "establecer" (los tipos de valores de retorno Tiempo & permiten las llamadas en cascada)
    Tiempo &establecerTiempo( int, int, int ); // establece hora, minuto, segundo
    Tiempo &establecerHora( int ); // establece la hora
    Tiempo &establecerMinuto( int ); // establece el minuto
    Tiempo &establecerSegundo( int ); // establece el segundo 
private:
    unsigned int hora; 
    unsigned int minuto; 
    unsigned int segundo; 
};

Tiempo::Tiempo (int hora, int min, int seg) {
    establecerTiempo(hora, min, seg);
}
// establece los valores de hora, minuto y segundo
Tiempo &Tiempo::establecerTiempo( int h, int m, int s ) {// observe Tiempo & return
    establecerHora( h );
    establecerMinuto( m );
    establecerSegundo( s );
    return *this; // permite las llamadas en cascada
}

// establece el valor de hora
Tiempo &Tiempo::establecerHora( int h ) {// observe Tiempo & return
    if ( h >= 0 && h < 24 )
        hora = h;
    else
        throw invalid_argument( "hora debe estar entre 0 y 23" );
    return *this; // permite las llamadas en cascada
}

// establece el valor de minuto
Tiempo &Tiempo::establecerMinuto( int m ) {// observe Tiempo & return
    if ( m >= 0 && m < 60 )
        minuto = m;
    else
        throw invalid_argument( "minuto debe estar entre 0 y 59" );
    return *this; // permite las llamadas en cascada
}

// establece el valor de segundo
Tiempo &Tiempo::establecerSegundo( int s ) {
    if ( s >= 0 && s < 60 )
        segundo = s;
    else
        throw invalid_argument( "segundo debe estar entre 0 y 59" );
    return *this; // permite las llamadas en cascada
}

int main(int argc, char const *argv[])
{
    // 1.- El apuntador this
    // Aparte de permitirnos acceder a los atributos tambien nos permite
    // Permite la llmada en cascada en funciones miembro

    // 2.. Como funcion la llamada en casacada
    // Al colocar Tiempo &, nos permite devolver una referencia a un obejto tiempo
    // Al colocar return *this, se pasa la referencia del objeto t a la siguiente funcion

    // 3.- Malas practicas con this
    // Utilizar el apuntador this en funciones de miembro static es un error de compilacion

    Tiempo t;
    t.establecerHora(20).establecerMinuto(2).establecerSegundo(34);
    // Si la ultima funon rtorna el valor t podemos seguir llamando a otra funcion
    // Pero si la ultima funcion que llamemos no retorna t entonces ya no podemos contitnuar haciedno eso


    return 0;
}



