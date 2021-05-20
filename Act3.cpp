#include <iostream>
using namespace std;
#include <ctime>
#include <vector>
#include <string>

class Persona {
    public:
        string getNombre();
        int getEdad();
    protected:
        string nombre;
        int edad;

};
string Persona::getNombre(){
    return nombre;
};
int Persona::getEdad(){
    return edad;
};

//Estudiante

class Estudiante: public Persona {
    public:
    Estudiante();
    Estudiante(string, int, string);
    string getCarrera();
    string setCarrera();
    void muestraDatos();

    private:
    string carrera;
};

Estudiante::Estudiante():Persona(){
    nombre = "nadie";
    edad = 1;
    carrera = "nini";
};

string Estudiante::getCarrera(){
    return carrera;
};

void Estudiante::setCarrera(int c){
    cin>>c>>
    c=carrera;
    
};

void Estudiante:: muestraDatos(){
    cout<< "Nombre  Edad   Carrera "<<endl;
    cout<< nombre <<"\t"<<  edad <<"\t"<<   carrera <<endl;
}

//Maestro
class Maestro: public Persona {
    public:
    Maestro();
    Maestro(string, int, string);
    string getCarrera();
    void muestraDatos();

    private:
    string carrera;
};

int main(){
    return 0;
}