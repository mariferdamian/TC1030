#include <iostream>
using namespace std;
#include <ctime>
#include <vector>
#include <string>



class Vendedor {
     public:
        string cve_vendedor;
        string nombre;

};


class Inventario {
     public:
        string cve_articulo;
        string descripcion;
        double precio;
};

class Cliente {
        string cve_cliente;
        string nombrec;  
};

class Factura{
    public:
        string noFactura;
        string cve_cliente;
        string cve_vendedor;
        string cve_articulo;
        int cantidad;
};

string GETDATE(){
    char out[14];
    std::time_t t=std::time(NULL);
    std::strftime(out, sizeof(out), "%Y%m%d%H%S", std::localtime(&t));
    return out;
}

vector<Factura> generaFactura(int contadorFactura, vector<Factura> arreglof,Vendedor v1, Inventario i2, int cant){
 
    Factura f1;
   
    f1.cve_vendedor = v1.cve_vendedor;
    f1.cve_articulo = i2.cve_articulo;
    f1.cantidad = cant;
    f1.noFactura = "F" + GETDATE();
    arreglof.push_back(f1); 
    return arreglof;
};



vector<Inventario> agregarArticulo(vector<Inventario> arregloi){
    Inventario articulo;
    cout<<"Ingrese la clave del articulo"<<endl;
    cin>>articulo.cve_articulo;
    cout<<"Ingrese la descripción"<<endl;
    cin>>articulo.descripcion;
    cout<<"Ingrese el precio"<<endl;
    cin>>articulo.precio;
    arregloi.push_back(articulo);
    return arregloi;
}

vector <Vendedor> agregarVendedor(vector<Vendedor>arreglov){
    Vendedor vendedor;
    cout << "Ingresa nombre del vendedor "<<endl;
    cin >> vendedor.nombre;
    cout << "Ingresa clave del vendedor "<<endl;
    vendedor.cve_vendedor = "v10"+ to_string(arreglov.size());
    cout << vendedor.cve_vendedor <<endl;
    arreglov.push_back(vendedor);
    return arreglov;
};

int main(){
    vector<Vendedor> arreglov;
    vector <Inventario> arregloi;
    vector<Factura> arreglof;
    
    // variable v1 y v2
    Vendedor v1 = {"v100","Don Julio Estrella"};
    Vendedor v2 = {"v101","Doña Esperanza Luna"};
    arreglov.push_back(v1);
    arreglov.push_back(v2);
    arreglov = agregarVendedor(arreglov);
    
    // variable i1 y i2
    
    Inventario i1 = {"i500","Tornillo sin fin",10.0};
    Inventario i2 = {"i600","Piñón Cremallera",10.0};
    Inventario i3 = {"i700","Angulo de Ackerman",10.0};
    arregloi.push_back(i1);
    arregloi.push_back(i2);
    arregloi.push_back(i3);
    arregloi=agregarArticulo(arregloi);
    int contadorFactura = 0;
    arreglof =generaFactura(contadorFactura, arreglof, v1, i2, 32);
    
    string nombreArticulo;
    // imprimimos todas las facturas
    cout << "Facturas Generadas "<< endl;
    cout << "No\t\tVendedor\tArticulo\tDescripción"<<endl;
    
    for (int j=0; j<=contadorFactura; j++){
        for (int k=0;k<arregloi.size();k++){
            if (arreglof[j].cve_articulo == arregloi[k].cve_articulo)
                nombreArticulo = arregloi[k].descripcion;
        }
        cout <<arreglof[j].noFactura<<"\t"
            <<arreglof[j].cve_vendedor<<"\t\t"
            <<arreglof[j].cve_articulo<<"\t\t"
            <<nombreArticulo<<endl;

    }

    return 0;
};