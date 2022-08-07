#include <iostream>
#include "Empleado.h"
using namespace std;

Empleado::Empleado (const string &nombre, const string &apellido, const string &nss):
    nombre(nombre), apellido(apellido), numeroSeguroSocial(nss)
    {

    }

void Empleado::setNombre(const string &_nombre) {
    nombre = _nombre;
}

void Empleado::setApellido(const string &_apellido) {
    nombre = _apellido;
}

void Empleado::setNumeroSeguro(const string &_nss) {
    nombre = _nss;
}

string Empleado::getNombre() const {
    return nombre;
}

string Empleado::getApellido() const {
    return apellido;
}

string Empleado::getNumeroSeguro() const {
    return numeroSeguroSocial;
}

void Empleado::imprimir () const {
    cout << getNombre() << " " << getApellido() << "\n Numero de seguro social: " << getNumeroSeguro() << endl;
}

