#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado
{
public:
    Empleado (const std::string &, const std::string &, const std::string &);
    virtual ~Empleado() { };

    // Establecemos los datos 
    void setNombre(const std::string &);
    void setApellido(const std::string &);
    void setNumeroSeguro(const std::string &);

    // Obetenmos la informacion de los datos
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getNumeroSeguro() const;

    virtual void imprimir() const; // virtual
    virtual double ingresos() const = 0; // Funcion vistual pura

private:
    std::string nombre;
    std::string apellido;
    std::string numeroSeguroSocial;
};

#endif