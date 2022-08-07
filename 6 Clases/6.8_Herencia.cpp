// Herencia
// Se basa en una clase base y en una sueperclase
// Se trata de que la clase base tiene todos los miembros y atributos de una sauperclase

// Tipos de acceso
// Anteriormente ya hablamos de los tipos de acceso public , private, protected
// Estos son usados por la herencia de clse para definir el scope de cada miembro o atrbiuto
// a excepcion de los mimbros friend todos los miembros con tipos e acceso pueden heredarse
// Tambien no podemos heredar los metodos constructores de las clases

// Relacion entre es-un y tien-un
// La relacion es-un es mas directo con herencia porque po rejemplo podemos decir 
// Un auto es-un vehiculo
// La elacion tiene-un es mas relaconado con la composicion de un obejto a otros miembros
// Un auto tiene-un volante, un pedal, etc; no podemos decir un auto es-un volante
// Con estas relaciones podemos identificar de mejor manera como usar la herencia

// Constructores herencia
// Los constructores no puden ser heredados pero si tienen que ser llamados explicitamente
// Los parametros del constructor base tienen que ser del mismo tipo que el de la clsae super
// Sin embargo podemos agregar parametros a la clase base siemre y cuando se cumpla lo anterior

#include <iostream>
using namespace std;

class Triangulo
{
public:
    Triangulo(int _lado1, int _lado2, int _lado3)    
    {
        lado1 = _lado1;
        lado2 = _lado2;
        lado3 = _lado3;
    }

    void mostarCarcateriticas() {
        cout << lado1 << " " << lado2 << lado3;
    }
protected:
    int lado1;
    int lado2;
    int lado3;
};

class TrianguloRectangulo: public Triangulo
{
public:
// Primero se esjeucta el constructor de la clase base y despues el de la clase que hereda
    TrianguloRectangulo(int l1, int l2, int l3)
        : Triangulo(l1, l2, l3) // Como no podemos heredarlos los llamamos explicitamente
    {
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;
    }

    void mostrarTrinagulo() {
        // De esta forma podemos llmar metodos de la clase base sin teener que crear un obejto
        cout << "Triangulo Rectangulo: ";
        Triangulo::mostarCarcateriticas();
    }
};

int main(int argc, char const *argv[])
{
    TrianguloRectangulo geo (3, 4, 5);
    geo.mostarCarcateriticas(); // Usando un metodo heredado
    system("pause");
    return 0;
}