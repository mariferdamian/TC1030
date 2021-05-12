#include <iostream>
using namespace std;
#include <ctime>


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

void generaFactura(int contadorFactura, Factura arreglof[],Vendedor v1, Inventario i2, int cant){
 
    Factura f1;
    f1.cve_vendedor = v1.cve_vendedor;
    f1.cve_articulo = i2.cve_articulo;
    f1.cantidad = cant;
    f1.noFactura = "F" + GETDATE();
    arreglof[1] = f1; 

};


int main(){
    Vendedor arreglov[4];
    Inventario arregloi[4];
    Factura arreglof[5];
    
    // variable v1 y v2
    Vendedor v1 = {"v100","Don Julio Estrella"};
    Vendedor v2 = {"v100","Doña Esperanza Luna"};
    arreglov[0]= v1;
    arreglov[1]= v2;

    // variable i1 y i2
    Inventario i1 = {"i500","Tornillo sin fin",10.0};
    Inventario i2 = {"i600","Piñón Cremallera",10.0};
    Inventario i3 = {"i700","Angulo de Ackerman",10.0};
    arregloi[0] = i1;
    arregloi[1] = i2;
    arregloi[2] = i3;
    
    int contadorFactura = 0;
    generaFactura(contadorFactura, arreglof, v1, i2, 32);

    string nombreArticulo;
    // imprimimos todas las facturas
    cout << "Facturas Generadas "<< endl;
    cout << "No" <<"\t\t"<<"Vendedor"<<"\t"<<"Articulo"<<endl;

    for (int j=0; j<=contadorFactura; j++){
        for (int k=0;k<sizeof(arregloi)/sizeof(arregloi[0]);k++){
            if (arreglof[j].cve_articulo == arregloi[k].cve_articulo)
                nombreArticulo = arregloi[k].descripcion;
        }
        cout <<arreglof[1].noFactura<<"\t"
            <<arreglov[0].cve_vendedor<<"\t\t"
            <<arregloi[0].cve_articulo<<"\t"
            <<nombreArticulo<<endl;

    }

    return 0;
};
