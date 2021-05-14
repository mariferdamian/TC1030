#include <iostream>
using namespace std;
#include <ctime>
#include <vector>
#include <string>


class Vendedor {
    public:
     Vendedor();
     Vendedor(string clave, string nombreVendedor){
         cve_vendedor=clave;
         nombre=nombreVendedor;
     };
     void setVend(string clave, string nombre);
     string getVend(){return cve_vendedor;};
     string getNombre(){return nombre;};

    private:
        string cve_vendedor;
        string nombre;

};
class Cliente {
    public:
     Cliente();
     Cliente(string clave, string nombreCliente){
         cve_Cliente=clave;
         nombre=nombreCliente;
     };
     void setCliente(string clave, string nombre);
     string getCliente(){return cve_Cliente;};
     string getNombre(){return nombre;};

    private:
        string cve_Cliente;
        string nombre;

};
class Inventario {
    public:
     Inventario();
     Inventario(string clave, string nombreInventario, string des, double p){
         cve_Inventario=clave;
         nombre=nombreInventario;
         descripcion=des;
         precio=p;
     };
     void setInventario(string clave, string nombre);
     string getInventario(){return cve_Inventario;};
     string getNombre(){return nombre;};
     string getDescripcion(){return descripcion;};
     double getPrecio(){return precio;};
        
    private:
        string cve_Inventario;
        string nombre;
        string descripcion;
        double precio;

};




int main(){
  Vendedor v1("hola", "hola");
  Vendedor v2("v100","kiubo");
  Inventario c1("il", "il", "de", 50);
  cout<<c1.getInventario()<<" - "<<c1.getNombre()<<c1.getDescripcion()<<c1.getPrecio()<<"\n";
  cout<<v2.getVend()<<" - "<<v2.getNombre();
  
  return 0;
};