#include <iostream>
using namespace std;
#include <ctime>
#include <vector>

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
        string nombre;  
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

void generaFactura(int contadorFactura, vector<Factura> arreglof[],vector<Vendedor> v1, vector<Inventario> i2, int cant){
 
    Factura f1;
    f1.cve_vendedor = v1.cve_vendedor;
    f1.cve_articulo = i2.cve_articulo;
    f1.cantidad = cant;
    f1.noFactura = "F" + GETDATE();
    arreglof[1] = f1; 

};
/*
void agregarVendedor(vector<Vendedor>arreglov[]){
    string nombre;
    string cve_vendedor;
    cout << "Ingresa nombre del vendedor ";
    cin >> nombre;
    cout << "Ingresa clave del vendedor ";
    cin >> cve_vendedor;
    string v = nombre + ","+ cve_vendedor;
    arreglov.push_back(v);
};
*/


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
int main(){
    vector<Vendedor> arreglov;
    vector<Inventario> arregloi;
    vector <Factura> arreglof;
    

    // variable v1 y v2
    Vendedor v1 = {"v100","Don Julio Estrella"};
    Vendedor v2 = {"v101","Doña Esperanza Luna"};
    arreglov.push_back(v1);
    arreglov.push_back(v2);

    // variable i1 y i2
    Inventario i1 = {"i500","Tornillo sin fin",10.0};
    Inventario i2 = {"i600","Piñón Cremallera",10.0};
    Inventario i3 = {"i700","Angulo de Ackerman",10.0};
    arregloi.push_back(i1);
    arregloi.push_back(i2);
    arregloi.push_back(i3);
    arregloi=agregarArticulo(arregloi);
    int contadorFactura = 0;
    generaFactura(contadorFactura, arreglof, v1, i2, 32);

    string nombreArticulo;
    // imprimimos todas las facturas
    cout << "Facturas Generadas "<< endl;
    cout << "No" <<"\t\t"<<"Vendedor"<<"\t"<<"Articulo"<<endl;

    for (int j=0; j<=contadorFactura; j++){
        for (int k=0;k<arregloi.size();k++){
            if (arreglof[j].cve_articulo == arregloi[k].cve_articulo)
                nombreArticulo = arregloi[k].descripcion;
        }
        cout <<arreglof[j].noFactura<<"\t"
            <<arreglov[j].cve_vendedor<<"\t\t"
            <<arregloi[j].cve_articulo<<"\t"
            <<nombreArticulo<<endl;

    }
    
    return 0;
};
