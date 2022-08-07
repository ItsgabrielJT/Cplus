#include <iostream>
using namespace std;

int main()
{
    // 1.- Deciciones simples
        // Los if solo pueden tomar un true o un false

    int numero = 0;
    cout << "Introduxaca un numero: ";
    cin >> numero;
    if(numero < 30) {
        cout << "Su numero es mayor" << endl;
    }else {
        cout << "Tu numero es menor" << endl;
    }

    // 2.- Decisiones dobles
        // Son If else anidados
        // Comprueba cada if else desde arriba a abajo
        // LAs intrucciones que vayan a dar mas veces true deben ponerse 
        // Primeras paea que asi mejore el rendimiento del proggrama
        
    int calificaciones = 0;
    cout << "Introduzca la caificacion: ";
    cin >> calificaciones;

    if (calificaciones >= 9) {
        cout << "Aprobaste con " << calificaciones << endl;
    } else if (calificaciones <= 7) {
        cout << "Pasate con ls justas con " << calificaciones << endl;
    } else if (calificaciones < 5) {
        cout << "Reprobaste con " << calificaciones << endl;
    } else {
        cout << "Perdedodr " << calificaciones << endl;
    }
    return 0;
}