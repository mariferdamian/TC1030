#include "Punto.h"



//Punto
class Punto3D:public Punto {
private:
    int z;
public:
    Punto3D();
    Punto3D(int,int,int);
    string mostrar();
};

Punto3D::Punto3D(){
   z = 0;
}

Punto3D::Punto3D(int valX, int valY, int valZ):Punto(valX, valY){
   z = valZ;
}

string Punto3D::mostrar(){
    string valX = to_string(getValueX());
    string valY = to_string(getValueY());
    string valZ = to_string(z);
    
    string coordenadas = "Coodenadas del punto x: " + valX + " y: "+ valY + " z: "+ valZ;
    return coordenadas;
}
