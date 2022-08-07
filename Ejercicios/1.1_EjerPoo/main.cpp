#include <iostream>
#include <iomanip>
#include <vector>

#include "Empleado.h"
#include "EmpleadoAsalariado.h"
#include "EmpleadoBaseComision.h"
#include "EmpleadoPorComision.h"

using namespace std;

void virtualViaApuntador( const Empleado * const );
void virtualViaReferencia( const Empleado & );

int main(int argc, char const *argv[])
{
    // establece el formato de salida de punto flotante
    cout << fixed << setprecision( 2 );
 
    // crea objetos de las clases derivadas 
    EmpleadoAsalariado empleadoAsalariado( 
    "John", "Smith", "111-11-1111", 800 ); 
    EmpleadoPorComision empleadoPorComision( 
    "Sue", "Jones", "333-33-3333", 10000, .06 );
    EmpleadoBaseComision empleadoBaseMasComision( 
    "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );

    cout << "Empleados procesados en forma individual, usando vinculacion estatica:\n\n";

    // imprime la información de cada empleado y sus ingresos, usando vinculación estática
    empleadoAsalariado.imprimir();
    cout << "\nobtuvo $" << empleadoAsalariado.ingresos() << "\n\n";
    empleadoPorComision.imprimir();
    cout << "\nobtuvo $" << empleadoPorComision.ingresos() << "\n\n";
    empleadoBaseMasComision.imprimir();
    cout << "\nobtuvo $" << empleadoBaseMasComision.ingresos() << "\n\n";

    // crea un vector de tres apuntadores de la clase base
    vector< Empleado * > empleados( 3 ); 
 
    // inicializa el vector con apuntadores a objetos Empleado
    empleados[ 0 ] = &empleadoAsalariado; 
    empleados[ 1 ] = &empleadoPorComision; 
    empleados[ 2 ] = &empleadoBaseMasComision; 
 
    cout << "Empleados procesados en forma polimorfica mediante vinculacion dinamica:\n\n";
 
    // llama a virtualViaApuntador para imprimir la información de cada Empleado
    // y a ingresos mediante el uso de la vinculación dinámica
    cout << "Llamadas a funciones virtuales realizadas desde apuntadores de la clase base:\n\n";
 
    for ( const Empleado *empleadoPtr : empleados )
        virtualViaApuntador( empleadoPtr ); 
 
    // llama a virtualViaReferencia para imprimir la información de cada Empleado
    // y a ingresos mediante el uso de vinculación dinámica
    cout << "Llamadas a funciones virtuales realizadas desde referencias de la clase base:\n\n";

    for ( const Empleado *empleadoPtr : empleados ) 
        virtualViaReferencia( *empleadoPtr ); // observe la desreferencia

    system("pause");
    return 0;
}

void virtualViaApuntador(const Empleado * const empleadoPtr) {
    empleadoPtr->imprimir();
    cout << "Obetuvo: " << empleadoPtr->ingresos() << endl << endl;
}

void virtualViaReferencia(const Empleado &empleadoRef) {
    empleadoRef.imprimir();
    cout << "Obetuvo: " << empleadoRef.ingresos() << endl << endl;
}
