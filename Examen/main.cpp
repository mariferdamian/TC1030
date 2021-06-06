#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "Punto3D.h"
#include "Pixel.h"

int main(){
    vector<Punto*> vecPuntos;
    Punto *objPuntos;
    

    objPuntos = new Punto(1,2);
    vecPuntos.push_back(objPuntos);
    
    objPuntos = new Punto3D(1,2,2);
    vecPuntos.push_back(objPuntos);

    objPuntos = new Punto3D(1,2,5);
    vecPuntos.push_back(objPuntos);

    objPuntos = new Pixel(2,4,"FFCCCC");
    vecPuntos.push_back(objPuntos);

    objPuntos = new Pixel(2,4,"FFCCCF");
    vecPuntos.push_back(objPuntos);

    


    for (int i = 0; i<5; i++){
        cout<<vecPuntos[i] -> mostrar()<<endl;
    }
    return 0;
}
