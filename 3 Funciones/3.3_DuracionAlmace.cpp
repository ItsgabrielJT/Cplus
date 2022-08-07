#include <iostream>
using namespace std;

// Ejemplo de varibale global
int numero = 10;

int main()
{
    // 1,. Especificadores de clase de almacenimeinto
    // En C++ existen cinco los cuales son: register, extern, mutable, static, thread_local

    // 2,. Duracion de almacenamient
    // Determina el periodo de tiempo de la exitencia de un identificadore en la memoria y se divide en cuatro;
    // atomatica, estatica, dinamica y de hilo

        // 2.1 Varibales de duracion atomatica
        // Estan exietn mienras que el bloque este activo
        // Variables locales declaradas en funciones
        // Parametros de funciones
        // LAs ods anterioes pero declarada con register

        // La palabra register sugiere que el compilador inicialize contador sn que se lo ordene
        // Es recomendable usar register en varibale locales y parametros locales
        register unsigned int contador = 0;

        // 2.2 Variables estaticas
        // Existen en memoria a partr de que el programa se ejecute y dejan de existir cuando acaba el program
        
        // Para crear variables globalos colocamos la palabra extern o uto forma es
        // Declarrlas fuera de cualquier clase o funcion

        // Para crear variables loales las declaramos dentro de la funcion o clase
        // Cuando hcameos uso de static retenemos su valor asi llamen de neuvo a la funcion
        // Es decir giardan si valor de la ultima vez que se jecuuto la funcion en la que estan

        static unsigned int cuentas = 1;

    // 3,. Alcance
    // Signifca en que partes podemos referenciar cierto identificador

    // 4.- Enlace
    // Determina si al identificador se lo conoce solo dentro del archivo en que se declaro  o fuera de otros
    // archivo s que se compilen y se enlacen

    // 5.- Varibales y sus alnaces
    // Podemos hacer uso del operador de resolcuion de ambito para acceder a variables globales (::)
    
    // Ejemplo de varible local
    double numero = 10.5;
    cout << "Usando la varibale local: " << numero << endl;
    cout << "Usando la varibale global: " << ::numero << endl;
    system("pause");
    return 0;
}