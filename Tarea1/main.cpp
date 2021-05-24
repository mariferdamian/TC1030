#include <iostream>
#include <string>
#include "Cap.h"
#include "Thor.h"
#include "Ironman.h"

using namespace std;

int main(){
    Cap c(1);
    c.setLevel(10);
    cout<<c.getTraje()<<endl;
    c.run();
    c.jump();
    c.lanzarEscudo();
    Thor t(1);
    t.setLevel(10);
    cout<<t.getTraje()<<endl;
    t.run();
    t.jump();
    t.lanzarMartillo();
    Ironman I(1);
    I.setLevel(10);
    cout<<I.getTraje()<<endl;
    I.run();
    I.jump();
    I.volar();
    return 0;
}