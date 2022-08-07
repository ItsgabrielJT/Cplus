#include <iostream>
using namespace std;

// 1,- Metodo set
    // Signofica que tu vas a guardar o recibir un dato.
    // De esta forma guardamos los valores para Atributos privados.
    // Aplicando esto, protegemos los valores de nuestros atributos.

// 2.- Metodo get
    // Obtenemos la informacion guardada dentro del atributo
    // De esta forma vemos la infomacion de los atrbutos privads.
    // En los metodos hert tenemos que especificar el tipo de dato que queremos que nos retorne el metodo

class Persona
{
public:
    void setNombre(string _nombre) { // Siempre pasamos como parametro el valor que vamos a leer 
        nombre = _nombre;
    }

    // Siemopre es bueno declarar los get como constantes
    string getNombre() const{ // retornamos strimg por el tipo de dato del atributo nombre
        return nombre; // Podemos hacer esto porque estamos en la misma clase
    }

private:
    string nombre;
    int edad;
};

int main()
{
    Persona estudiante = Persona();
    estudiante.setNombre("Joel"); // Guardando el string en el atributo nombre 
    cout << "Nombre: " << estudiante.getNombre() << endl; // Obtenemso la informcaion que hay en el atributo
    system("pause");
    return 0;
}
