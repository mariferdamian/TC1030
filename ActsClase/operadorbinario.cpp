#include <iostream>
using namespace std;


class Operacion {
    private:
        int operand;
    public:
        Operacion();
        Operacion(int);

        void display();

        Operacion operator+(const Operacion &op1){
            Operacion opera;
            opera.operand = this -> operand + op1.operand;
            return opera;
        }
        
        
};

Operacion::Operacion(){
    operand = 0;
}
Operacion::Operacion(int op){
    operand = op;
}
 void Operacion::display(){
            cout<< "El operador es: "<<operand<<endl;
        }



int main(){
    Operacion var1(10);
    Operacion var2(20);
    Operacion var3(0);
    var3 = var1 + var2;
    var3.display();
    return 0;

}

