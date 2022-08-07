#include <iostream>
using namespace std;

// 1.- Definicion de Clase
    // Las clases son abstracciones dentro de la programacion, se usa para escribir
    // ideas generales sobre un programa que hagamos.
    // El nombre de una clase deber ser nombrada con la regla UpperCamelCase o de Pascal
    // El nombre de una clase siemore debe ser en singular

class Persona
{
    // Miembros de la clase
};

// 2.- Defincion de los miembros de clase y Tipos de accceso
// 2.1- Tipos de acceso
    // private, son todos los miembros que se puedenn usar solo dentro de la clase
    // protected, son todos los miembros que se pueden usar solo en clases hijas 
    // public, son ,los miembros usados desde cualquier parte del codigo y por cualquie clase
    // friend, son funciones no miembro que tiene derecho a acceder a miembtos publics y no public de la clase

// 2.2- Definicion de los miembros de una clase
    // Son todas los datos que contiene la clase, se dividen en metodos y atributos
    // Metodos, son todas las funciones con tipo de acceso definidas en una clase
    // Atributos, son todas las variable con tiipo de acceso definidas en una clase
    // Buena practica de programacion colocar primero los miembros publicos y luegos los privados

class Animal
{
    // tenemos que pasrle un objeto de la clase porque como tal no pertence a la clase
    // auqnue es buen practica de rpogramacion declararla antes de cada miembro de la clase y dentro de esta
    // ademas de no colocar un tipo de acceso antes de esta
    friend void establecerNombre(Animal &a, string _nombre) {
        a.nombre = _nombre; // POdemos haer eso por el acceso friend
    }

public:
    void mostrarMensaje() { // Metodo de la clase Animal
        cout << nombre << endl;
    }
private:
    string nombre = "Perico"; // Atributo de la clase Animal
};

// 3.- Defincion de obejetos
    // Se definen como aquellas variable que provienen a partir de una clase
    // Estos objetos puede usar todos los metodos o atributos publicos definidas en la clase.
    // Sin los obejtos no podemos usar ninguno de los miembros de la clase
    // Sinatxis de los objetos:
    // Clase nombreDeLaClase = Clase();
  
int main ()
{    
    Persona estudiante = Persona(); // Creando un obejto de la clase Persona
    Animal pajaro = Animal(); // Creando obejto de la clase Animal
    pajaro.mostrarMensaje(); // Utilizamos el metodo public de la clase Animal
    // establcerNombre es una funcion no miembro, es decir que no pertenece a la clase
    establecerNombre(pajaro, "Joel"); // Invocamos asi la fucnion porque es una fucnion indeendiente(global)
    system("pause");
    return 0;
}

// 4.- Formas diferentes para declarar los metodos
    // Aqui solo vamos a definir los metodos dentro de la clase y vamos a realizar el 
    // procedimiento fuera de la clase 
    // Sintaxis:
    // tipoDeRetorno nombreDeClase::NombreDelMetodoQueUsaste(tipoDeDato nombreDelParametro)

class Celular
{
public:
    // Declaramos los metodos que vamos a usar
    void encenderPantalla();
    void mostrarUsuario();
    void reiniciarPantalla(string); // Cuando usemos parametros solo especificamos el tipo de dato
private:
    string usuario = "prohacker123";
};

void Celular::encenderPantalla()
{
    cout << "¡¡¡ Bienvenido a movistar !!!" << endl;
}

void Celular::mostrarUsuario()
{
    // Podemos usar el atributo usurio porque Los metodos entan declarados dentro de la Clase
    cout << "Iniciaste con el usuario: " << usuario << endl;
}

void Celular::reiniciarPantalla(string decision) // Aqui ya colocamos que nombre tiene el parametro
{
    cout << "Quieres apagar la pantalla ?: " << decision << endl;
}

/*
int main()
{
    Celular xiaomi = Celular(); // Creando objeto
    // Usando los metodos de la clase Celular
    xiaomi.encenderPantalla();
    xiaomi.mostrarUsuario();
    xiaomi.reiniciarPantalla("si");
    system("pause");
    return 0;
}
*/