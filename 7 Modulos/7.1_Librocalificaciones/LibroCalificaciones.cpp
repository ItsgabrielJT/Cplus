#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

// Incluyen las implementaciones de los metodos y atributos que ya fuern prototipados

void LibroCalificaciones::setNombre(string nombre) {
    nombre_curso = nombre;
}

string LibroCalificaciones::getNombre() const{
    return nombre_curso;
}

void LibroCalificaciones::mostarCurso() const{
    cout << nombre_curso << endl;
}

