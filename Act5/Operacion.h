#ifndef Operacion_h
#define Operacion_h

class Operacion {
    public:
    int valor1;
    int valor2;
    int resultado;
    void setValor1(int);
    void setValor2();
    void mostrarResultado(int);

};

void Operacion::setValor1(int valor1_){
    valor1 = valor1_;
};

void Operacion::setValor2(int valor2_){
    valor2 = valor2_;
};

void Operacion::mostrarResultado(){
    cout<<"Valor 1 \t"<<valor1<<"\t Valor 2 \t"<<valor2<<"\t Resultado \t"<<resultado<<endl;
}


