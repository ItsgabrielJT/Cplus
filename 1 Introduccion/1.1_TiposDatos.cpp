#include <iostream> // Es una de la librerias de C++

int main() // Dentro de esta funcion se ejecutan todo el codigo
{
    // 1.- Definicion de variables
        // Definimos las varibales empezando a nombrar el tipo de dato y luego de un nombre
        // Tipo de dato nombre_de_la_variable = valor que depende del tipo de dato

    int numero = 12; // Son de tipo entero, numero es el nombre de la variable
    float decimal = 12.333; // Los floats no son tan exactos en decimales
    double cantidad = 123.4444; // Los double son mas exactos en los decimales
    char letra = 'A'; // Solo acepta un caracter ya sea letra o numerico
    std::string nombre = "Joel"; // Los strings pertenen al espacio dew nombres std
    bool seleccion = true; // Solo puede recibor true o fallse

    long int numeros = 12233000303; // Alarga el espacio en memoria del int
    short int num = 123; // menora el espacio de memoria de int
    unsigned int postivos; // No toma encuenta los valores negativos

    // 2.- Reglas de varibles
        // En las varibles no deben haber caracteres especiales
        // Como por ejemplo:nombrandolas con numeros

    //int 34numeros = 12;

    // 3.- Conversiones explicitas
        // Usamos el operdor staic_cast para transformar momentaneamente
        // Una vaiable en otro tipo de dato que queramos
        // Este operador solo funciona cuando se hace una sola operacion

    int total = 300;
    int numero = 13;

    double resultado = static_cast<double>(total) / numero;
    
}