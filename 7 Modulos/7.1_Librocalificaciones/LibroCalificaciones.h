#include <string>

// Incluyen solo los prototipos de los metodos y atributos
// EN los encabezados el compilador ignora el nombre de los parametros

class LibroCalificaciones
{
public:
    void setNombre(std::string);
    std::string getNombre() const;
    void mostarCurso() const;

private:
    std::string nombre_curso;
};