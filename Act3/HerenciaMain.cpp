#include <iostream>
using namespace std;

#include "HerenciaEstudiante.h"
#include "HerenciaMaestro.h"

int main(){
    Persona persona1("DefaultName", 10);
    persona1.mostrarPersona();
    Estudiante e1("NombreDefault", 10, "CarreraDefault");
    e1.setCarrera("hdjshdj");
    e1.muestraDatos();
    Maestro m1("NombreDefault", 11, "DeptoDefault");
    m1.setDepto("xd");
    m1.muestraDatos();
    
    return 0;
}