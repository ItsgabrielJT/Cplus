#ifndef BASECOMISION_H
#define BASECOMISION_H

#include <string>
#include "EmpleadoPorComision.h"

class EmpleadoBaseComision : public EmpleadoPorComision
{
public:
    EmpleadoBaseComision(const std::string &, const std::string &, const std::string &,
        double = 0.0, double = 0.0, double = 0.0);
    
    virtual ~EmpleadoBaseComision() { };

    void setSalarioBase( double );
    double getSalarioBase() const;

    virtual void imprimir() const override;
    virtual double ingresos() const override;

private:
    double salarioBase;
};

#endif