#include <iostream>
#include <stdexcept>
#include "EmpleadoBaseComision.h"

using namespace std;

EmpleadoBaseComision::EmpleadoBaseComision(const string &nombre, const string &apellido, const string &nss,
    double venta, double tarifa, double _salarioBa)
    : EmpleadoPorComision(nombre, apellido, nss, venta, tarifa)
    {
        setSalarioBase(_salarioBa);
    }

void EmpleadoBaseComision::setSalarioBase ( double salario ) {
    if (salario >= 0.0)
        salarioBase = salario;
    else
        throw invalid_argument("El salario base tiene que ser mayor que cero o igual");        
}

double EmpleadoBaseComision::getSalarioBase () const {
    return salarioBase;
}

double EmpleadoBaseComision::ingresos() const {
    return getSalarioBase() + EmpleadoPorComision::ingresos();
}

void EmpleadoBaseComision::imprimir () const {
    cout << "Sin salario: ";
    EmpleadoPorComision::imprimir();
    cout << "Con salario base: " << getSalarioBase() << endl;
}