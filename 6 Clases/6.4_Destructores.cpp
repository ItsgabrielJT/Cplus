#include<iostream>
using namespace std;

// 1.- Destructores
// Lo sdestuctors no especificn parametros o valores de retorno
// No libera la memoria del objeto sino que la reutiliza para nuevos obejtos
// Los destructores se llaman cuando termina main

class CrearYDestruir
{
public:
    // Constructor
    CrearYDestruir( int ID, string cadenaMensaje)
        : idObjeto( ID ), mensaje( cadenaMensaje )
    {
        cout << "El constructor del objeto " << idObjeto << " se ejecuta " << mensaje << endl;
    }

    // Destructor
    ~CrearYDestruir() {
        // imprime nueva línea para ciertos objetos; mejora la legibilidad
        cout << ( idObjeto == 1 || idObjeto == 6 ? "\n" : "" );
        cout << "El destructor del objeto " << idObjeto << " se ejecuta " << mensaje << endl;
    }
private:
    int idObjeto; // número de ID para el objeto
    string mensaje; // mensaje que describe al objeto
};

void crear( void ); // prototipo

CrearYDestruir primero( 1, "(global antes de main)" ); // objeto global

int main()
{
    cout << "\nFUNCION MAIN: EMPIEZA LA EJECUCION" << endl;
    CrearYDestruir segundo( 2, "(local automatic in main)");
    static CrearYDestruir tercero( 3, "(local static en main)");

    crear(); // llama a la función para crear objetos
    
    cout << "\nFUNCION MAIN: CONTINUA LA EJECUCION" << endl;
    CrearYDestruir cuarto( 4, "(local automatico en main)" );
    cout << "\nFUNCION MAIN: TERMINA LA EJECUCION" << endl;
}

// función para crear objetos
void crear( void )
{
    cout << "\nFUNCION CREAR: EMPIEZA LA EJECUCION" << endl;
    CrearYDestruir quinto( 5, "(local automatico en crear)" );
    static CrearYDestruir sexto( 6, "(local static en crear)" );
    CrearYDestruir septimo( 7, "(local automatico en crear)" );
    cout << "\nFUNCION CREAR: TERMINA LA EJECUCION" << endl;
}
