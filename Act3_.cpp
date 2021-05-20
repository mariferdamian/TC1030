#include <iostream>
using namespace std;
class Persona{
    public:
        Persona(string, int);
        string getNombre();
        int getEdad();
        void mostrarPersona();
        void setNombre(string);
        void setEdad(int);
    protected:
        string nombre;
        int edad; 

};
void Persona::setNombre(string nombre_){
    nombre= nombre_;
}
void Persona::setEdad(int edad_){
    edad= edad_;
}
void Persona::mostrarPersona(){
    cout<<"Nombre\t"<<nombre<<"\t Edad\t"<<edad<<endl;
}
string Persona::getNombre(){
    return nombre;
}
int Persona::getEdad(){
    return edad;
}
Persona::Persona(string nombre_, int edad_){
    nombre=nombre_;
    edad=edad_;
}
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

//Maestro
class Maestro: public Persona{
    public:
        Maestro(string, int, string);
        string getDepto();
        void setDepto(string);
        void muestraDatos();
    private:
        string Depto;
};
void Maestro::muestraDatos(){
    cout<<"Nombre\t"<<nombre<<"\tEdad\t"<<edad<<"\tDepto\t"<<Depto<<endl;
}
void Maestro::setDepto(string Depto_){
    Depto=Depto_;
}
string Maestro::getDepto(){
    return Depto;
}
Maestro::Maestro(string nombre_, int edad_,string Depto_ ):Persona(nombre_,  edad_){
    Depto=Depto_;
}


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