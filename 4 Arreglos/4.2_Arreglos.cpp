#include <iostream>
#include <array>
using namespace std;

void initArregloLocal();
void initArregloAutomatico();
const size_t tamanio = 3;

int main()
{
    // 1.- Arreglos automaticos y  locales
    // Los arreglos locales son los que se acompañan de un static y estos tiene la caracterirstica
    // de mantenr sus valores originales durante todo el programa
    // Pir otro lado lso arreglos automaticosno permiten hacer y se destruyen una ves qacaba 
    // de ejecutarse el bloque de codigo donde se encuentren
    // De manera que usar arreglos static mejoran el rendimiento por que no se inicializan en cada momento
    // ni tampoco se destruyen una vez acaba el bloque donde se ubican
    
    cout << "Primera llamada a cada funcion:\n";
    initArregloLocal();
    initArregloAutomatico();    
    cout << "\n\nSegunda llamada a cada funcion:\n";
    initArregloLocal();
    initArregloAutomatico();  
    cout << endl;
    system("pause");
    return 0;
}

// Funcion para demostar un arreglo local estatico
void initArregloLocal(void) {
    static array <int, tamanio> arreglo1 = {}; // Inicializa el arreglo con 0
    // Muestra los valores del array
    cout << "\n Valores al entrar al arreglo local" << endl;
    for (size_t i = 0; i < arreglo1.size(); ++i)
        cout << "arreglo1 [" << i << "] = " << arreglo1[i] << endl;

    // Modifica los valores del array
    cout << "\n Valores al salir del arreglo local" << endl;
    for (size_t i = 0; i < arreglo1.size(); ++i)
        cout << "arreglo1 [" << i << "] = " << (arreglo1[i] += 5) << endl;
}

// Funcion para demostar un arreglo automatico
void initArregloLocal(void) {
    array <int, tamanio> arreglo2 = {1, 2, 3}; // Inicializa el arreglo 
    // Muestra los valores del array
    cout << "\n Valores al entrar al arreglo automatico" << endl;
    for (size_t j = 0; j < arreglo2.size(); ++j)
        cout << "arreglo1 [" << j << "] = " << arreglo2[j] << endl;

    // Modifica los valores del array
    cout << "\n Valores al salir del arreglo automatico" << endl;
    for (size_t j = 0; j < arreglo2.size(); ++j)
        cout << "arreglo1 [" << j << "] = " << (arreglo2[j] += 5) << endl;
}