#include <iostream>
using namespace std;

/*
tipo operator operador (parámetros)
(
    Instrucciones
)
*/

class Numero {
    public:
        double x, y;
};

Numero operator+ (const Numero &p,const Numero &q);


int main(){
    Numero a, b, c, r;
    a.x= 1;
    b.x= 3;
    c.x= 1;
    
    a.y= 2;
    b.y= 4;
    c.y= 2;

    r = a + b + c ;
    cout <<"El resultado de la suma x es: "<< r.x << ", y resultado de la suma y es:"<< r.y<< endl;
    return 0;

}

Numero operator+ (const Numero &p,const Numero &q){
    Numero r;
    r.x= p.x + q.x;
    r.y= p.y + q.y;
    return r;
}