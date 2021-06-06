#include "Punto.h"



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
    string valX = to_string(getValueX());
    string valY = to_string(getValueY());
    
    string coordenadas = "Coodenadas del punto x: " + valX + " y: "+ valY + " color: "+color;
    return coordenadas;
}
