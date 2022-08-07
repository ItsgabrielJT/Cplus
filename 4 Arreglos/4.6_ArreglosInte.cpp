#include <iostream>
#include <algorithm> // Nuevas funcion begin y end de C++11
using namespace std;

int main()
{
    // 1.- Que son arreglos integreados
    // Son estrucutras de datos de tamaño fijo

    // 2.- Declracion de arreglos integraids
    // Tipode dato nombre del arreglo [Tamajio de ele,entos]
    int numeros[5] = {1, 23, 51, 13, 56};

    // 3.- Paso de arrelgo integrados a funciones
    // El valor del nombre de un arreglo integrado implicitamente se pasa la dreccion de memoria
    // Del primer elemtnos a la funcion
    // Por tanto una funcion puede modificar los elemtnos de un arreglo asi no se haya pasado
    // El nombre de la fucnion con &

    // Difrencia entres obejtos array y arreglos integrados
    // La diferencia es que loa arreglos integrados no conocen su proio tamaño
    // Pir lo que una funcion que recibe como paraemtro un arreglo integrado tambein recibe como parametro 
    // el tamaño del arreglo
    // Por cnvencion todos lo areglos integrados se escriben como la forma de abajo
    // El const se coloca debido a que las funciones no dben modificar el areglo int a menos que sea 
    // absolutamente necesario, hacer lo anterios es una buen pracica
    int sumaElementos( const int valores[], const size_t numeroDeElementos );


    // Ordenamiento en arregos integradis
    // Funciona de la misma manera que con los obejtos array 
    
    sort(begin(numeros), end(numeros));

    // 4.- Limitaciones de arreglos integradis
    // - No pueden comprarse meidnate el uso de operaciones relciones, para compara aregglos intgrados
    //   Tenemos que hacerlo elemento por elemtnos mediante un ciclo
    // - No pueden asignarse unos a otros
    // - No cocnocen su porpio tamaño cuando estan de paraemtros en una funcion
    // - No cuentan con comprobacion de limites superiores
    // - Las plantillas de obejtos array y vector son as robustas, seguras y prporcionan mas herramientas

    // 5.- Uso de arreglo sintegrados
    // Son usados para procesar lo sargumentos de lineas de comandos
    // por ejemplo en kinux se pasa el arguento -la
    // ls -al

    
    return 0;
}