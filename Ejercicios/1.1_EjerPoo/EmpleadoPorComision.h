#ifndef COMISION_H
#define COMISION_H

#include <string>
#include "Empleado.h"

class EmpleadoPorComision : public Empleado
{
public:
    EmpleadoPorComision(const std::string &, const std::string &, const std::string &
        , double = 0.0 , double = 0.0);

    virtual ~EmpleadoPorComision() { };

    void setVentas(double);
    void setTarifa(double);

    double getventas() const;
    double getTarifa() const;

    virtual void imprimir() const override;
    virtual double ingresos() const override;
    
private:
    double ventasBrutas;
    double tarifaComision;
};
 
#endif