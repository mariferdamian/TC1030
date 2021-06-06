#ifndef Punto_h
#define Punto_h


class Punto {
private:
    int x;
    int y;

public:
    Punto();
    Punto(int, int);
    virtual string mostrar();

    int getValueX();
    int getValueY();
};

Punto::Punto(){
    x = 0;
    y = 0;
}

Punto::Punto(int valX, int valY) {
    x = valX;
    y = valY;
}

string Punto::mostrar() {  // VIRTUAL only in declaration
    string valX = to_string(x);
    string valY = to_string(y);
    string coordenadas = "Coodenadas del punto x: " + valX + " y: "+ valY;
    return coordenadas;
}

int Punto::getValueX() {
    return x;
}
int Punto::getValueY() {
    return y;
}


#endif