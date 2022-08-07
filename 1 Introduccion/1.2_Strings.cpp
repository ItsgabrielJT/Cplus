#include <iostream> 
#include <iomanip> // No agrega mas formstos
using namespace std; // Nos evita escribir siempre std despues de una palabra clave

int main()
{
    // 1.- Imprimir en pantalla
        // Con ayuda de la libreria iostream, nos trae cietas palabras claves
        // Para imprimir en C++ usamos cout << 
        // Dentro del cout puede ir una variable o una cadena de texto

    // Si no colocaramos el esacio de nombres tendriamos que hacer lo siguiente:
    // std::cout << "Hola mundo";
    cout << "Hola mundo";
    int numero = 334;
    cout << numero; // Se imprimer el numero como string

    // 2.- Concatenar
        // Paea concatenar cadenas o varibales colocamos << 

    cout << "Hola" << "Josue" << "!!!!";

    // 3.- Saltos de linea
        // Para realizar un sato de linea del cursos colocamos endl

    cout << "Hola" << "Josue" << endl << "!!!!" << endl;

    // 4.- Secuencias de escape
        // \n Ds un salto de linea
        // \t Da un espacio tab
        // \r Se queda en la misma linea
        // \a Suena una campana
        // \\ Imprime una barra diagonal inversa
        // \' Imprime una comilla sencilla
        // \" Imprime una comilla doble

    cout << "\nHola" << "\nJoel";
    cout << "\t Ventas";
    cout << "\r Gastos";
    cout << "\a Holas";
    cout << "\\ http";
    cout << "\' hola xd";
    cout << "\" Nombres";

    // 5.- Metodos de strings
        // Son algunas funciones implementadas por c++ a los objetos strings
    string aplelidos = "tates";
    cout << aplelidos.size() << endl; // Devuelve El numero de caracteres de la cadena
    cout << aplelidos.substr(0,1) << endl; // Retorna una subcadens

    // 6.- Tipos de formatos
        // Podemos usar algunos palabreas claves de iiostream o de la 
        // biblioteca iomanip

    int numer01 = 12;
    double decimales = 123.454645646;                   
    cout << showpoint << numer01 << endl; // Onligamos que aparezca con un decimal  
    cout << setprecision(2) << decimales << endl; // Controlamos los decimales que aparecen;

    // 7.- Lecturta de datos
        // La biblioteca iostream tiene una palabra clave llamada cin
        
    int lectura = 0;
    cout << "Aqui en la variable lectura guardamos el dato que leemos: ";
    cin >> lectura;
     
    return 0; // Nos asegura que el programa acabe correctamente
}