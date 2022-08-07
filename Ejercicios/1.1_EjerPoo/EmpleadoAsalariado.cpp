#include <iostream>
#include <stdexcept>
#include "EmpleadoAsalariado.h"
using namespace std;

EmpleadoAsalariado::EmpleadoAsalariado(const string &_nombre, const string &_apellido, const string &nss, double salario)
    :Empleado(_nombre, _apellido, nss)
    {
        setSalario(salario);
    }

void EmpleadoAsalariado::setSalario(double salario) {
    if (salario >= 0.0)
        salarioSemanal = salario;
    else
        throw invalid_argument("El salario semanal no puede ser menor que cero o igual a cero");
}

double EmpleadoAsalariado::getSalario() const {
    return salarioSemanal;
}

double EmpleadoAsalariado::ingresos() const {
    return getSalario();
}

void EmpleadoAsalariado::imprimir() const {
    cout << "Empleado Asalariado: ";
    Empleado::imprimir();
    cout << "Salario Semanal: " << getSalario() << endl;
}