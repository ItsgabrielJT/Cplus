#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

// 1.- Encabezados
    // Los encabezados son los archivos que tienen terminacion en .h
    // Por regla geneal solo contienen una clase
    // El nombre del encabezado depende del nobre de la clase
    // No podemos usar declaraciones using en los encabezados

// 2.- Interfza de una clase
    // Es buena ingenieria de software definir las clases y aparte realizar su implementacion
    // Para ello creamos otro archivo que tenga el mismo nombre del archivo .h pero esta vez
    // colocamos .cpp al final
    
int main()
{
    LibroCalificaciones curso = LibroCalificaciones();
    curso.setNombre("10mo D");
    cout << "Matematicas " << curso.getNombre() << endl;
    system("pause");
    return 0;
}

