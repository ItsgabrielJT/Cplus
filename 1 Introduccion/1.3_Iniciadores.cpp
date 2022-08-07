#include <iostream>
using namespace std;

// 1.- Los inicializadoes de istas
    // En C++ 11 Este tipo de sintai nos permite inicializar cualquier tipo de variable
    // Una de as vetajas es cuando no perdemos informacion
    // Para una variable de tipo primitiva solo se coloca un valor
    // Para objetos, estos pueden tener varios valores separados por comas

int main()
{
    int numero = 12.7; // Solo se elimina la parte decimal y guarda la parte entera
    // Con esto evitamos el narrowing = perdida de datos en los tipos de datos primitivos
    int numero2 = {12.7}; // AL usar el inicializaodr provoca un error porque no tiene el mismo tipo de dato
    int numero3{12.7}; // Otra froma para escribir la linea anterios

    // EL inicializador de listas se usa tambien para los constructores
    Persona hombre = {"Joel", 234.56};
    Persona mujer{"MAria", 345.67};

    return 0;
}

class Persona
{
public:
    string nombre;
    double salario;
    Persona(string _nombre, double _salario)
    {
        nombre = _nombre;
        salario = _salario;
    }
};