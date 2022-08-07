#include <iostream>
using namespace std;

int cuadradoPorValor( int ); // prototipo de función (paso por valor)
void cuadradoPorReferencia( int & ); // prototipo de función (paso por referencia)

// prototipo de función que especifica argumentos predeterminados
unsigned int volumenCaja( unsigned int longitud = 1, unsigned int anchura = 1, unsigned int altura = 1 );

int main()
{
    // 1.- ipos de paso de parametros
        // 1.1 Paso por valor
        // LO que hace aqui es que se pasa una copia del valor del arguemnto a la funcion
        // POr tanto los cambios a esa valor no afectan al original

        // 1.2 Paso por referencia
        // Permte acceder direcamente a la doreccion de memoria de un identificador
        // Por tanto los cambios que se hacen si afectan al valor originak

    int x = 2; // valor para cuadrado usando cuadradoPorValor
    int z = 4; // valor para cuadrado usando cuadradoPorReferencia

    // demuestra cuadradoPorValor
    cout << "x = " << x << " antes de cuadradoPorValor\n";
    cout << "Valor devuelto por cuadradoPorValor: " << cuadradoPorValor( x ) << endl;
    cout << "x = " << x << " despues de cuadradoPorValor\n" << endl;    

    // demuestra cuadradoPorReferencia
    cout << "z = " << z << " antes de cuadradoPorReferencia" << endl;
    cuadradoPorReferencia( z );
    cout << "z = " << z << " despues de cuadradoPorReferencia" << endl;


    // 2.- Argumentos predeterminados
    // Lo que hacemos aqui es dar de antemano un valorres a los argumentos
    // Esto nos permite mandar o no valores a esos argumentos

    // sin argumentos--usa valores predeterminados para todas las medidas
    cout << "El volumen predeterminado de la caja es: " << volumenCaja();
    // especifica la longitud; anchura y altura predeterminadas
    cout << "\n\nEl volumen de una caja con longitud 10,\n" << "anchura 1 y altura 1 es: " << volumenCaja( 10 );
    // especifica longitud y anchura; altura predeterminada
    cout << "\n\nEl volumen de una caja con longitud 10,\n" << "anchura 5 y altura 1 es: " << volumenCaja( 10, 5 );    
    // especifica todos los argumentos
    cout << "\n\nEl volumen de una caja con longitud 10,\n" << "anchura 5 y altura 2 es: " << volumenCaja( 10, 5, 2 )
    << endl;    
    
    system("pause");
    return 0;
}

// cuadradoPorValor multiplica el número por sí mismo, almacena el
// resultado en el número y devuelve el nuevo valor del número
int cuadradoPorValor( int numero ) {
    return numero *= numero; // no se modificó el argumento de la función que hizo la llamada
}

// cuadradoPorReferencia multiplica a refNumero por sí solo y almacena el resultado
// en la variable a la que refNumero hace referencia en la función main
void cuadradoPorReferencia( int &refNumero ) {
    refNumero *= refNumero; // se modificó el argumento de la función que hizo la llamada
}

// la función volumenCaja calcula el volumen de una caja
unsigned int volumenCaja( unsigned int longitud, unsigned int anchura, unsigned int altura ) {
    return longitud * anchura * altura;
}