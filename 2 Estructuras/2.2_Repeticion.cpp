#include <iostream>
using namespace std;

int main()
{
    // 1.- Ciclo while
        // Para entrar de principio a un ciclo while la condicion
        // Tiene que ser verdadera
        // Se repite hasta que la comprobacion salga false

    int numero = 1;
    while(numero > 0) {
        cout << "Introdxca unn numero: ";
        cin >> numero;
    }

    cout << "---------------------------" << endl;
    // 2.- Ciclo for
    // Es una estructura de cntrol limitada 
    // Se repite hasat llegar a cierto limite impuesto    

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }

    cout << "---------------------------" << endl;

    // Dentro del ciclo fro tabien podemos hacer operaciaones

    int x = 2;
    for (int j = x; j <= 4 * x; j += 2) {
        cout << j << endl;
    }

    cout << "---------------------------" << endl;

    // 3.- Ciclo do while
    // Entra desde principio en la condicion y despues evalua si es verdad

    int contador = 1;
    do {
        cout << contador << " ";
        contador++;
    } while (contador <= 10);

    system("pause");
    return 0;
}