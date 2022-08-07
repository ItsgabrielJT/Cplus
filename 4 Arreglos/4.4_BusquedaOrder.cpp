#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm> // contiene sort y binary_search

using namespace std;

const size_t tamanioArreglo = 7; // tamaño del arreglo colores

int main()
{
    // 1.- Ordenamiento de arreglos con sort
    // las funciones begin y end expresan el rango de ordenamiento del arreglo
    // ordena en orden ascendete y en caso de letras seguia por el abecedario

    array< string, tamanioArreglo > colores = { "rojo", "naranja", "amarillo",
    "verde", "azul", "indigo", "violeta" };

    // imprime el arreglo original
    cout << "Arreglo desordenado:\n";
    for ( string color : colores )
        cout << color << " ";
    sort( colores.begin(), colores.end() ); // ordena el contenido de colores

    // imprime el arreglo ordenado
    cout << "\nArreglo ordenado:\n";
    for ( string elemento : colores )
        cout << elemento << " ";

    // 2.- Busqeda en arreglos con binary
    // Las funciones begin y end exoresan el rango de busqueda y el tercer parametro es la clave de busqueda
    // Es decir las funciones begin y end especifican que hay que arreglar todo el arreglo

    // busca "indigo" en colores
    bool encontro = binary_search( colores.begin(), colores.end(), "indigo" );
    cout << "\n\n\"indigo\" " << ( encontro ? "se" : "no se" )
    << " encuentra en colores" << endl;

    // busca "cian" en colores
    encontro = binary_search( colores.begin(), colores.end(), "cyan" );
    cout << "\"cian\" " << ( encontro ? "se" : "no se" )
    << " encuentra en colores" << endl;

    system("pause");
    return 0;
}