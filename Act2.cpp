#include <iostream>
using namespace std;
#include <ctime>
#include <vector>
#include <string>


class Vendedor {
    public:
     Vendedor();
     Vendedor(string clave, string nombreVendedor){
        cve_vendedor = clave;
        nombre = nombreVendedor;
     };
     void setVend(string clave, string nombre);
     string getVend(){return cve_vendedor;};
     string getNombre(){return nombre;};

    private:
        string cve_vendedor;
        string nombre;

};


Vendedor::Vendedor(string clave, string nombre) {
    cve_vendedor = clave;
    nombre = nombre;
};

int main(){
  Vendedor v1;
  Vendedor v2 ("v100","kiubo");

  cout<<v1.getVend()<<" - "<<v1.getNombre()<<"\n"<<endl;
  cout<<v2.getVend()<<" - "<<v2.getNombre()<<"\n"<<endl;
  
  return 0;
};