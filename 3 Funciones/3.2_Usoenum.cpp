#include <iostream>
#include <cstdlib> // contiene los prototipos para las funciones srand y rand
#include <ctime> // contiene el prototipo para la función time
using namespace std;

unsigned int rollDice(); // tira los dados, calcula y muestra la suma

int main()
{
    // enumeración con constantes que representa el estado del juego    
    // Para el identificador de enum usamos primero Letra mayuscula por buenas practicas
    // Usar solo mayusculas en las contsantes de enumeracion asi nos recuerda que no son varibales
    // La cmntantes colocadas adentro de las llaves tiene valor 0 por defecto 
    // a menos que se especifique lo contario
    // Por ellos los valores de las contantes se incrementan en 1
                    // 0       1      2   
    enum Estado { CONTINUAR, GANO, PERDIO };
    // todas las letras mayúsculas en las constantes

    // randomiza el generador de números aleatorios, usando la hora actual
    srand( static_cast<unsigned int>( time( 0 ) ) );

    unsigned int miPunto = 0; // punto si no se gana o pierde en el primer tiro
    Estado estadoJuego = CONTINUAR; // puede contener CONTINUAR, GANO o PERDIO
    unsigned int sumaDeDados = tirarDados() ; // primer tiro del dado

    // determina el estado del juego y el punto (si es necesario), con base en el primer tiro
    switch ( sumaDeDados ) {
        case 7: // gana con 7 en el primer tiro
        case 11: // gana con 11 en el primer tiro
            estadoJuego = GANO;
            break;
        case 2: // pierde con 2 en el primer tiro
        case 3: // pierde con 3 en el primer tiro
        case 12: // pierde con 12 en el primer tiro
            estadoJuego = PERDIO;
            break;
        default: // no gano ni perdio, por lo que recuerda el punto
            estadoJuego = CONTINUAR; // el juego no ha terminado
            miPunto = sumaDeDados; // recuerda el punto
            cout << "El punto es " << miPunto << endl;
            break; // opcional al final del switch
    } // fin de switch

    // mientras el juego no esté completo
    while ( CONTINUAR == estadoJuego ) {// no GANO ni PERDIO
        sumaDeDados = tirarDados(); // tira los dados de nuevo

        // determina el estado del juego
        if ( sumaDeDados == miPunto ) // gana al hacer un punto
            estadoJuego = GANO;
        else if ( sumaDeDados == 7 ) // pierde al tirar 7 antes del punto
            estadoJuego = PERDIO;
    }

    // muestra mensaje de que ganó o perdió
    if ( GANO == estadoJuego )
        cout << "El jugador gana" << endl;
    else
        cout << "El jugador pierde" << endl;


} // fin del main

// tira los dados, calcula la suma y muestra los resultados
unsigned int tirarDados() {
    // elige valores aleatorios para el dado
    unsigned int dado1 = 1 + rand() % 6; // tiro del primer dado
    unsigned int dado2 = 1 + rand() % 6; // tiro del segundo dado
    unsigned int suma = dado1 + dado2; // calcula la suma de valores de los dados
    // muestra los resultados de este tiro
    cout << "El jugador tiro " << dado1 << " + " << dado2
         << " = " << suma << endl;
    return suma; // devuelve la suma de los dados
} // fin de la función tirarDad


// Otro ejemplo de enumeraciones
// Al hacer esta el valor de cada constante incrementa en 1
                    // 2   3    4    5    6   7    8     9   10   11    12
enum Meses {ENE = 1, FEB, MAR, ABR, MAY, JUN, JUL, AGO, SEP, OCT, NOV, DIC};
// Dandonos como resultado una serie del 1 al 12

// Otras carateristicas a paritr de C++ 11
// Para evitar erroes de enumeraciones con mismo nombres se invento las enumeraciones on alcnace
// Con esto eviamos que las constantes tengan mcha alcance en un codigo
enum class Configuraciones {CONTINUAR, PERDER, GANAR};

// De manera que para acceder a las enumeraciones tenemos que hacer lo siguiente
// Configuraciones::CONTINUAR;

// Especifircar los datos especificos de enum
// Por defecto del tipo integral de una enum es int pero podemos espeficia si lo desemamos
enum class Estado : unsigned int {CONTINUAR, PERDER, GANAR};

