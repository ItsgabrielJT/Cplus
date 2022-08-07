#include <iostream>
#include <iomanip>
using namespace std;

// 1.- Definicion de constructores
    // Estas estan automaticamente creados cuadno creamos un obejeto
    // Nos ayudan a inicializar nuestros atributos de forma automatica cuadno se ejecuta el programa
    // Cuando creamos nuestro constructor deja de funcionar el constructor por defecto 
    // Cuando usemos constructores es obligatoria incializar todas nuestros atributos
    // Son parecidos a la sintaxis de los metodos 
    // Sinatxis de los constructores:
    // nombreDeClase(){ }

class Persona
{
public: 
    // Creamos este constructor para que entindas como es un construcotr por defecto, ya que este no hace falta
    // que lo creemos nostros mismos, debido a que la propia clase ya lo crea y permanece oculto de nosostros
    /*
    Persona() // Este es el contructor que por dfecto se crea en la clase 
    {

    }
    */

    // Creacion de nuestro propio constructor
    // Usamos explicit solo cuando vamos a poner un parametro en el constructor, si ponemos mas de dos ya no
    // vamos a usar esta palabra clave.
    // Buena parctica de progamacion, Anteponer un guion bajo en el parametro nos permite diferenciar
    // el atrivuto de la clase y el parametro que definimos en el constructor.
    explicit Persona(string _nombre): // Siempre pasamos como parametro un valor para incializar el atributo
        nombre(_nombre) // De esta forma decimos que lo que me den por parametro se guarde en el atributo nombre
    {

    }

    void mostarMensaje() {
        cout << "Este es mi nombre: " << nombre << endl;
    }

private:
    string nombre;
};
/*
int main()
{
    // Como ya mencionamos antes tenemos que pasar un argumento dentro del parentesis para que nop salga error
    // Al crear nuestro propio constrcutor, el constructor por defecto deja de funcionar 
    //Persona maestro = Persona(); // Nos marca error por lo anterior ya mencionado

    // Forma en la que se usa nuestro constructor creado
    Persona maestro = Persona("Joel"); // desdde este punto, el constructor se inicia 
    // "Joel" va a ser el valor con el que se incialize mi atributo nombre 
    maestro.mostarMensaje();
    system("pause");
    return 0;
}
*/
// 2.- Constructores con mas de dos parametros

class Animal
{
public:
    Animal(string _nombre, string _raza, int _peso): // despues de lo dos puntos iniclizamos los atributos
        nombre(_nombre),
        raza(_raza),
        peso(_peso)
    {
        // Aqui colocamos metodos inicializadores
        setNombre(_nombre);        
    }

    void mostarDatos() {
        cout << "Raza: " << raza << endl << "Nombre: " << nombre << endl << "Peso: " << peso << endl;
    }

    void setNombre(string _nombre) {
        if (_nombre == "") 
            throw invalid_argument("El campo esta vacio");    
        else
            nombre = _nombre;
    }

private:
    string nombre;
    string raza;
    int peso;
};
/*
int main()
{
    Animal mamifero = Animal("Leon", "Felina", 234); // creando obejto y usando el construcrpt
    mamifero.mostarDatos();
    system("pause")
    return 0;
}
*/
// 3.- Formas de crar los constructores
    // 3.1- declarando solo lo principal del constructor

class Colegio
{
public:
    Colegio(string, string, int); // Declracion del metodos constructor
    explicit Colegio(string curso);
    void mostrarDatos();
    void establlecerCurso(string nombre_curso);

private:
    string curso;
    string maestro;
    int aulas;
};

// Cuando queremos inicialixar los valorew con todos los parametros
Colegio::Colegio(string _curso, string _maestro, int _aulas) {
    // Dieferente forma de escribir la asigancion de los parametros haqcia los atributos
    curso = _curso; // Eso es lo mismo que esto curso(_curso)
    maestro = _maestro;
    aulas = _aulas;
}

// Cuando que remos inicialiar los valores pero solo con un parametro
Colegio::Colegio(string _curso):
    maestro("Mateo"),
    aulas(12)
{
    establlecerCurso(_curso);
}

void Colegio::establlecerCurso(string nombre_curso) {
    if (nombre_curso.size() <= 20) {
        curso = nombre_curso;
    } else {
        curso = nombre_curso.substr(0,25);
    }
}


void Colegio::mostrarDatos() {
    cout << "Nombre del curso: " << curso << endl 
            << "Docente asignado: " << maestro << endl 
                << "Numero de curso: " << aulas << endl;
}

/*
int main()
{
    // Disttinta forma de crear un objeto con constructor 
    // Es lo mismo que esto: Colegio consejoProvicnial = Colegio("3ro A", "Lic. Vallejo", 23)
    Colegio consejoProvincial("3ro A", "Lic. Vallejo", 23);
    consejoProvincial.mostrarDatos();
    system("pause");
    return 0;
}
*/

// 4.- Constructores con argumentos predeterminados
// Esos parametro snos aseguran que si aun asi no recibamaos valores en la llamada al construcutor
// De todas maneras se inicilizan los datos

class Tiempo
{
public:
// Se declara explicit debido a que puede llamarse con un argumento
    explicit Tiempo (int h = 0, int m = 0, int s = 0) {
        hora = h;
        minuto = m;
        segundo = s;
    }

    unsigned int getHora() const {
        return hora;
    }

    unsigned int getMinuto() const {
        return minuto;
    }

    unsigned int getSegundo() const {
        return segundo;
    }

    // imprime el Tiempo en formato estándar (HH:MM:SS AM o PM)
    void imprimirEstandar() const
    {
        cout << ( ( getHora() == 0 || getHora() == 12 ) ? 12 : getHora() % 12 )
            << ":" << setfill( '0' ) << setw( 2 ) << getMinuto()
            << ":" << setw( 2 ) << getSegundo() << ( hora < 12 ? " AM" : " PM" );
    }

    // imprime el Tiempo en formato universal (HH:MM:SS)
    void imprimirUniversal() const
    {
        cout << setfill( '0' ) << setw( 2 ) << getHora() << ":"
            << setw( 2 ) << getMinuto() << ":" << setw( 2 ) << getSegundo();
    }

private:
    unsigned int hora;
    unsigned int minuto;
    unsigned int segundo;
};

int main()
{
    Tiempo t1; // valor predeterminado en todos los argumentos    
    Tiempo t2( 2 ); // se especifica hora; valores predeterminados para minuto y segundo
    Tiempo t3( 21, 34 ); // se especifican hora y minuto; valor predeterminado para segundo
    Tiempo t4( 12, 25, 42 ); // se especifican hora, minuto y segundo

    // Caracteriticas de C++ 11 
    // Las anteriore lineas ta,bien se puende escribir omo la forma de abajo
    // Podemos usar inicializadores de listas porque nos permiten inicializar cualquier varibale
    // Si usamos esos inicializadores es preferoble no usar el igual
    
    Tiempo t2{ 2 }; // se especifica la hora; valores predeterminados para minuto y segundo
    Tiempo t3{ 21, 34 }; // se especifican hora y minuto; valor predeterminado para segundo
    Tiempo t4{ 12, 25, 42 }; // se especifican hora, minuto y segundo

    cout << "Se construyo con:\n\nt1: todos los argumentos predeterminados\n ";
    t1.imprimirUniversal(); // 00:00:00
    cout << "\n ";
    t1.imprimirEstandar(); // 12:00:00 AM
    cout << "\n\nt2: se especifico hora; minuto y segundo predeterminados\n ";
    t2.imprimirUniversal(); // 02:00:00
    cout << "\n ";
    t2.imprimirEstandar(); // 2:00:00 AM
    cout << "\n\nt3: se especificaron hora y minuto; segundo predeterminado\n ";
    t3.imprimirUniversal(); // 21:34:00
    cout << "\n ";
    t3.imprimirEstandar(); // 9:34:00 PM
    cout << "\n\nt4: se especificaron hora, minuto y segundo\n ";
    t4.imprimirUniversal(); // 12:25:42
    cout << "\n ";
    t4.imprimirEstandar(); // 12:25:42 PM
}