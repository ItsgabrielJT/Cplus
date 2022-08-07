#include <iostream>
#include <array>
using namespace std;

int main()
{
    // 1.- For basado en rango
    // Tiene ña seuguiente estructura
    // for ( Mismo tipo de dato que el arreeglo identificador: array o vector)
    // LO que hace este for es recorrer sobre cada valor del array y pasarle una copia al identificador del for
    // Pasamos los valores orginales cuando colocamos & alado del identificador del for
    
    array < int, 5 > items = { 1, 2, 3, 4, 5 };
    // muestra los items antes de modificarlos
    cout << "items antes de modificarlos: ";
    for ( int item : items )
    cout << item << " ";
    // multiplica los elementos de los ítems por 2
    for ( int &refItem : items )
    refItem *= 2;
    // muestra los ítems después de modificarlos
    cout << "\nitems despues de modificarlos: ";
    for ( int item : items )
    cout << item << " ";
    cout << endl;

    cout << "\n Arreglo sin unsar la referencia" << endl;
    array < int, 5 > items2 = { 1, 2, 3, 4, 5 };
    // muestra los items antes de modificarlos
    cout << "items antes de modificarlos: ";
    for ( int item : items2 )
    cout << item << " ";
    // multiplica los elementos de los ítems por 2
    for ( int refItem : items2 )
    refItem *= 2;
    // muestra los ítems después de modificarlos
    cout << "\nitems despues de modificarlos: ";
    for ( int item : items2 )
    cout << item << " ";
    cout << endl;
    system("pause");
    return 0;
} // fin de main