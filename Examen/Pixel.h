#include "Punto.h"

#include <string>
using namespace std;

//Punto
class Pixel:public Punto {
private:
    string color;
public:
    Pixel();
    Pixel(int,int, string);
    string mostrar();
};

Pixel::Pixel(){
   color = "";
}

Pixel::Pixel(int valX, int valY, string valColor):Punto(valX, valY){
   color = valColor;
   
}
string Pixel::mostrar(){
    string valX = stoi(getValueX());
    string valY = stoi(getValueY());
    string valColor = color;
    cout<<"Coodenadas del punto x: "<<valX<<" y: "<<valY<<endl;
    string coordenadas = "Coodenadas del punto x: " + valX + " y: "+ valY + " color: "<<valColor;
    return coordenadas;
}
