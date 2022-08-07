#ifndef ASALARIADO_H
#define ASALARIADO_H

#include <string>
#include "Empleado.h"

class EmpleadoAsalariado : public Empleado 
{
public:
    EmpleadoAsalariado (const std::string &, const std::string &, const std::string &, double = 0.0);
    ~EmpleadoAsalariado() { };    

    void setSalario(const double );
    double getSalario() const;

    virtual void imprimir() const override;
    virtual double ingresos() const override;

private:
    double salarioSemanal;
};

#endif