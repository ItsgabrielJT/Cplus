#include<iostream>
using namespace std;

int main()
{
    // 1,. Apuntadores
    // Las varibale apuntadores contienen direcciones de memoria como sus valores
    // Un apuntador contiene la dirección de memoria de una variable que, a su vez, contiene un valor específico. 
    // En este sentido, el nombre de una variable hace referencia directa a un valor, 
    // y un apuntador hace referencia indirecta a un valor

    // 2.- Declaracion de puntadores
    // A cada variable que se declara como apuntadro se le antepone un asterisco
    // Es buena practica de programacion colocar la palbra Ptr 
    // Todos los apuntadores se inicializan con nullptr que significa que no apunta a nada

        // Caraterstcas de C++11
        // Antes los apuntadores se incicializaban con 0 o NULL pero en C++11 lo hacemos con nullptr
    int *cuentaPtr = nullptr;

    // 3.- Operando &
    // Es u operador unario que obtiene la direccion de memoria de su operando 

    int y = 5; // declara la variable y
    int *yPtr = nullptr; // declara la variable apuntador yPtr
    yPtr = &y; // asigna la direccion de memoria de y a yPtr

    // 4.- Operador * indiferencia
    // El operador unario se concoce conmnmente como el operador de indireccion
    // Devulve un lvalue que representa al objeto al que punta
    // Tambien se le conoce al uso del * como desferenciar a un apuntador
    // Un apuntador no pude ser nulo al momento de desferenciarlo

    cout << *yPtr << endl; // Impimer el valor de la varibale y que es (5)    
    *yPtr = 9; // Tambien ayuda a asiganar valores, en este caso agina 9 a la variable y
    cout << *yPtr << endl; // Impimer el valor de la varibale y que es (9)    
    cin >> *yPtr; // Tambien se pude usar para aignar valors por entrada
    cout << *yPtr << endl; // Impimer el valor de la varibale y que es (entrada)    
    
    // Ejemplo de uso de apuntadores
    cout << "-------------------------------------------------" << endl;

    int a = 7; // se asigna un 7 a la variable a
    int *aPtr = &a; // aPtr se inicializa con la dirección de la variable int a
    cout << "La direccion de a es " << &a
            << "\nEl valor de aPtr es " << aPtr;
    cout << "\n\nEl valor de a es " << a
            << "\nEl valor de *aPtr es " << *aPtr << endl;
    cout << "\nCabiamos el valor de a" << endl;
    *aPtr = 12;
    cout << "\n\nEl valor de a es " << a
            << "\nEl valor de *aPtr es " << *aPtr << endl;
    
    system("pause");
    return 0;
}