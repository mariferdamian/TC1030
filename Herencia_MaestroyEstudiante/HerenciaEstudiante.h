
#include "HerenciaPersona.h"

class Estudiante: public Persona{
    public:
        Estudiante(string, int, string);
        string getCarrera();
        void setCarrera(string);
        void muestraDatos();
    private:
        string carrera;
};
void Estudiante::muestraDatos(){
    cout<<"Nombre\t"<<nombre<<"\tEdad\t"<<edad<<"\tCarrera\t"<<carrera<<endl;
}
void Estudiante::setCarrera(string carrera_){
    carrera=carrera_;
}
string Estudiante::getCarrera(){
    return carrera;
}
Estudiante::Estudiante(string nombre_, int edad_,string carrera_ ):Persona(nombre_,  edad_){
    carrera=carrera_;
}
