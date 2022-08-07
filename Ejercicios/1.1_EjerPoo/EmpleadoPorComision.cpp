#include <iostream>
#include <stdexcept>
#include "EmpleadoPorComision.h"

using namespace std;

EmpleadoPorComision::EmpleadoPorComision(const string &_nombre, const string &_apellido, const string &nss, 
    double ventas, double tarifa)
    : Empleado(_nombre, _apellido, nss)
    {
        setVentas(ventas);
        setTarifa(tarifa);
    }

void EmpleadoPorComision::setVentas(double ventas) {
    if (ventas >= 0.0)
        ventasBrutas = ventas;
    else
        throw invalid_argument("La ventas tienen que ser mayores o iguales a cero");
}

void EmpleadoPorComision::setTarifa(double tarifas) {
    if (tarifas >= 0.0)
        tarifaComision = tarifas;
    else
        throw invalid_argument("Las tarifas tiene que ser mayores o iguales a cero");
}

double EmpleadoPorComision::getventas() const {
    return ventasBrutas;
}

double EmpleadoPorComision::getTarifa() const {
    return tarifaComision;
}

double EmpleadoPorComision::ingresos() const {
    return getventas() * getTarifa();
}

void EmpleadoPorComision::imprimir() const {
    cout << "Empleado por Comision: ";
    Empleado::imprimir();
    cout << "Ventas brutas: " << getventas() << endl;
    cout << "Tarifa Por Comision: " << getTarifa() << endl;
}

