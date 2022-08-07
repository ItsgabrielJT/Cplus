// evita múltiples inclusiones del encabezado
// Por convencion use el nombre del encabezado en mayusculas y el punto use guion bajo
#ifndef TIEMPO_H
#define TIEMPO_H

// definición de la clase Tiempo
class Tiempo
{
public:
    Tiempo(); // constructor
    void establecerTiempo( int, int, int ); // establece hora, minuto y segundo
    void imprimirUniversal() const; // imprime la hora en formato universal
    void imprimirEstandar() const; // imprime la hora en formato estándar
private:
    unsigned int hora; // 0 - 23 (formato de reloj de 24 horas)
    unsigned int minuto; // 0 - 59
    unsigned int segundo; // 0 - 59
};

#endif