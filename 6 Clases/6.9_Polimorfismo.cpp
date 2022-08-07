// Polimorfimso
// Es una rama de la POO que nos permite programr en generral y no en especifico
// El polimorfismo promueve la extensabulidad

// Forma de apuntar una clase base a una heredada
// Una de las formas es al momento de instanciar el obejto
// Tenemos que colocar la clase base y despues apuntarla a la clase que la hereda
// No puede ser al revez
// Con esto podemos usar tanto los metodos de la clase base como de la clase que la hereda

// Funciones virtual
// Nos permite modificar una funcion de ka ckase base 
// El modificar esa funcion de la clase base se llama sobreescibir un metodo
// Para ello colocamos virtual en la funcion de la clase base para poder sobreescribirlas en clases que 
// hereden de la clase base
// Entonces esto se conoce como un comportameinto polimorfico
// En el caso de que vayamos a sobreescribir metodos de una clase base
// tenemos que escribir overrride 
// Siempre que usemos virtual es preferible crear un destructor virtual

// caracteriticas de C++ 11 
// Antes una clase derivada podis soreescribir cualquiera de los metodos virtual 
// a partir e C++ 11 podemos colocar la palabra final para no permitir esto

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual ~Animal();
    
    void mostarMensaje() {
        cout << "Soy este animal ";
    }

    virtual void decirAnimal() {
        cout << "Soy una animal de raza";
    }

    virtual void mostrarSonido() final;
};

class Perro : public Animal
{
public:
    virtual void decirAnimal() override{
        Animal::decirAnimal;
        cout << " dalmata";
    }
};

int main(int argc, char const *argv[])
{
    // Primera forma
    Animal kokoro = Perro();
    kokoro.mostarMensaje();

    kokoro.decirAnimal();


    system("pause");
    return 0;
}
