#include <iostream>
using namespace std;

int main()
{
    // 1.- Operaodres de incremento
        // Son aquellos que suman una unidad mas a cierto valor
        // se usa escribiedno el ++

    int numero = 0;
    ++numero; // Preincremento, Primero se suma el 1 y luego se usa variable con el valor actualizado
    numero = numero + 1; // Es lo msmo que hacer esto numero++
    numero++; // Postincremento, Primero se usa variable y luego se le suma el 1

    // 2.- Operaodres de decremento
        // Son aquellos que rstan una unidad mas a cierto valor
        // se usa escribiedno el --

    int numero2 = 1;
    --numero; // Predecremento, Primero se resta el 1 y luego se usa variable con el valor actualizado
    numero = numero - 1; // Es lo msmo que hacer esto numero--
    numero--; // Postdecremento, Primero se usa variable y luego se le resta el 1

    // 3.- Operadores logicos
    // 66, se le conoce como operador (AND) que sifnifica true y true
    // ||, Se le conocer como operador (OR) que signbifica true o false, false o true
    // !, Se conoce como negacion

    // crea la tabla de verdad para el operador && (AND lógico)
    cout << boolalpha << "AND logico (&&)"
    << "\nfalse && false: " << ( false && false )
    << "\nfalse && true: " << ( false && true )
    << "\ntrue && false: " << ( true && false )
    << "\ntrue && true: " << ( true && true ) << "\n\n";    
    // crea la tabla de verdad para el operador || (OR lógico)
    cout << "OR logico (||)"
    << "\nfalse || false: " << ( false || false )
    << "\nfalse || true: " << ( false || true )
    << "\ntrue || false: " << ( true || false )
    << "\ntrue || true: " << ( true || true ) << "\n\n";
}