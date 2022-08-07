// 1.- Inroduccion a la sbrecarga de Operadores
// Los operadors permiten manipular obejtos string de forma precisa
// C++ no permite crear nuevos operadores
// Cuando sobrecargamos oepradores como funciones no tiene que ser estaticos
// Estas funciones de operadores sobrecaragdas soo funcionan con obejtos

// 2.- Excepcones al sobrecarar operacines con funciones
// El operador de direccion & devuelve un apuntador al obejto, por lo que puede sobrecargarse
// El operador coma evalua la expresion a su izquierda y despues el de la derecha, por lo que tamien uede sobrecargarse

// 3.- Reglas y restricciones a la sobrecarga de operadores
// La precedencia de un oeprador no pude ser cambido, sin embargo podemos usar parentesis para el orden de evaluacion
// La asociatividad de un operador no puede cambiar, que seria de izquierda a derecha asi sea en la sobrecarag
// No es posible cambair el numero de operando que recibe un operador
// No es posible crear nuevos operadores
// Los operadores de tipos de fundamentales no pueden ser sobrecargados
// Los operadores relacionados como + y += deben ser sobrecaragdos por separado
// Sbrecargue los operadores para tipos de clases 

// 4.- Sobrecarga de operadores binarios
// Se sobrecarga con una funcion de miembro no estatic 
// Deben contar con un paraetro o dos 
// Uno de esos parametros debe ser el obejto de una clase o una referecnia al obejto)
// Por cuestiones de rendimiento la fucnion de sobrecarag del operador se declara como friend de la clase

    // 4.1 Fucniones miembros
    // Las funciones de operador sobrecargadas para los operadores binarios pueden ser funciones miembro
    // sólo cuando el operando izquierdo es un objeto de la clase de la que la función es miembro. 

    // 4.1 Fucniones no miembros
    // Como función no miembro, el operador binario debe recibir dos argumentos (uno de los cuales debe
    // ser un objeto (o una referencia a un objeto) de la clase con la que está asociado el operador sobrecargado

// 5.- Sobrecarga de operadores unarios
// Se pude sobrecarar como fucnion de miembro static
// Debe contar con al menos un argumento o sin argumentos
// Cabe aclcarra que si existe un paraemtro debe ser la referencia del obejto a una clase



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Operador binario de inserccion y de fluko >>, <<
// Vamos a sbrecaragr esos operadores para que recibir y entregar objetos del mismo tipo de clase 
// en donde fueron declaradas

class NumeroTelefonico
{
    // Las fucniones no miembro se tiene que declarar como friend
    // para que puedan accerder a los atributos privados y tambien ayuda a mejorar el rendimientio

    // operador de inserción de flujo sobrecargado; no puede ser
    // una función miembro si deseamos invocarlo con
    // cout << unNumeroTelefonico;
    friend ostream &operator<<( ostream &salida, const NumeroTelefonico &numero ) {
        salida << "(" << numero.codigoArea << ") " << numero.intercambio << "-" << numero.linea;
        return salida; // permite cout << a << b << c;
    }

    // operador de extracción de flujo sobrecargado; no puede ser
    // una función miembro si deseamos invocarlo con
    // cin >> unNumeroTelefonico;
    friend istream &operator>>( istream &entrada, NumeroTelefonico &numero ) {
        entrada.ignore(); // omite (
        entrada >> setw( 3 ) >> numero.codigoArea; // recibe el código de área
        entrada.ignore( 2 ); // omite ) y espacio
        entrada >> setw( 3 ) >> numero.intercambio; // setw limite el numero de caracteres que puede recibir
        entrada.ignore(); // omite el guión corto (-)
        entrada >> setw( 4 ) >> numero.linea; // recibe linea
        return entrada; // permite cin >> a >> b >> c;
    }

    // Tiene que ser fucniones no miembro porque si usaramos funciones miembro
    // tendriamos que colocar el operando derecho del operador
    // telefono << cout;
    // telefono >> cin;

private:
    string codigoArea; // código de área de 3 dígitos
    string intercambio; // intercambio de 3 dígitos
    string linea; // línea de 4 dígitos 
};

// Operador unario de incremento prefijo y postfijo, ++ 

class Fecha
{
    // operador de salida sobrecargado
    friend ostream &operator<<( ostream &salida, const Fecha &d ) {
        static string nombreMes[ 13 ] = { "", "Enero", "Febrero",
                                            "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto",
                                            "Septiembre", "Octubre", "Noviembre", "Diciembre" };
        salida << nombreMes[ d.mes ] << ' ' << d.dia << ", " << d.anio;
        return salida; // permite la asignación en cascada
    }

public:
    // inicializa miembro estático; una copia a nivel de clase
    const array< unsigned int, 13 > dias =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // constructor de Fecha
    Fecha ( int mes = 1, int dia = 1, int anio = 1900) {
        establecerFecha( mes, dia, anio );
    }

    // establece mes, día y anio
    void establecerFecha( int mm, int dd, int aa ) {
        if ( mm >= 1 && mm <= 12 )
            mes = mm;
        else
            throw invalid_argument( "Mes debe estar entre 1 y 12" );

        if ( aa >= 1900 && aa <= 2100 )
            anio = aa;
        else
            throw invalid_argument( "Anio debe ser >= 1900 y <= 2100" );
    
        // prueba si es año bisiesto
        if ( ( mes == 2 && anioBisiesto( anio ) && dd >= 1 && dd <= 29 ) || ( dd >= 1 && dd <= dias[ mes ] ) )
            dia = dd;
        else
            throw invalid_argument( "Dia esta fuera de rango para el mes y anio actuales" );
    }

    // operador de incremento prefijo sobrecargado
    Fecha &operator++() {
        ayudaIncremento(); // incrementa la fecha
        return *this; // devuelve referencia para crear un lvalue
    }

    // operador de incremento postfijo sobrecargado; observe que el parámetro
    // entero de muestra no tiene un nombre de parámetro
    Fecha operator++( int ) {
        Fecha temp = *this; // contiene el estado actual del objeto
        ayudaIncremento();

        // devuelve objeto temporal almacenado y sin incrementar
        return temp; // devuelve un valor; no devuelve una referencia
    }

    // suma el número especificado de días a la fecha
    Fecha &operator+=( unsigned int diasAdicionales ) {
        for ( int i = 0; i < diasAdicionales; ++i )
            ayudaIncremento();

        return *this; // permite la asignación en cascada
    }

    // si el año es bisiesto, devuelve true; en caso contrario, devuelve false
    static bool anioBisiesto( int anioPrueba ) {
        if ( anioPrueba % 400 == 0 || ( anioPrueba % 100 != 0 && anioPrueba % 4 == 0 ) )
            return true; // un año bisiesto
        else
            return false; // no es un año bisiesto
    }

    // determina si el día es el último del mes
    bool finDeMes( int diaPrueba ) const {
        if ( mes == 2 && anioBisiesto( anio ) )
            return diaPrueba == 29; // último día de feb. en año bisiesto
        else
            return diaPrueba == dias[ mes ];
    }

    // función para ayudar a incrementar la fecha
    void ayudaIncremento() {
        // dia no es fin de mes
        if ( !finDeMes( dia ) )
            ++dia; // incrementa dia
        else if ( mes < 12 ) {
            ++mes; // incrementa mes
            dia = 1; // primer dia del nuevo mes
        }
        else { // ultimo dia del año
            ++anio; // incrementa anio
            mes = 1; // primer mes del nuevo anio
            dia = 1; // primer dia del nuevo mes
        } // fin de else
    }

private:
    unsigned int mes;
    unsigned int dia;
    unsigned int anio;
    static const std::array< unsigned int, 13 > dias; // dias por mes
    void ayudaIncremento(); // función utilitaria para incrementar la fecha
};

int main(int argc, char const *argv[])
{
    NumeroTelefonico telefono; // crea el objeto telefono
    cout << "Escriba el numero telefonico en la forma (123) 456-7890:" << endl;

    // cin >> telefono invoca a operator>> generando de manera implícita
    // la llamada a la función no miembro operator>>( cin, telefono )
    cin >> telefono;
    cout << "El numero telefonico introducido fue: ";

    // cout << telefono invoca a operator<< generando de manera implícita
    // la llamada a la función no miembro operator<<( cout, telefono )
    cout << telefono << endl; 


    // Sobrecargas de operadores unarios
    Fecha d1( 12, 27, 2010 ); // Diciembre 27, 2010
    Fecha d2; // recibe el valor predeterminado de Enero 1, 1900

    cout << "d1 es " << d1 << "\nd2 es " << d2;
    cout << "\n\nd1 += 7 es " << ( d1 += 7 );

    d2.establecerFecha( 2, 28, 2008 );
    cout << "\n\n d2 es " << d2;
    cout << "\n++d2 es " << ++d2 << " (anio bisiesto permite dia 29)";

    Fecha d3( 7, 13, 2010 );

    cout << "\n\nPrueba del operador de incremento prefijo:\n" << " d3 es " << d3 << endl;
    cout << "++d3 es " << ++d3 << endl;
    cout << " d3 es " << d3;

    cout << "\n\nPrueba del operador de incremento postfijo:\n" << " d3 es " << d3 << endl;
    cout << "d3++ es " << d3++ << endl;
    cout << " d3 es " << d3 << endl;
    return 0;
}
