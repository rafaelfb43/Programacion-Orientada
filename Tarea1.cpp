#include <iostream>
#include <ctime>

using namespace std;

class Vendedor{
    private:
        string Cve_Vendedor;
        string Nombre;
    public:
        void SetVendedor(string CLAVE){
            Cve_Vendedor = CLAVE;
        }
        void SetNombre(string CLAVE2){
            Nombre = CLAVE2;
        }
};

class Inventario{
    private:
        string Cve_Articulo;
        double price;
    public:
        string Descripcion;
        void SetArticulo(string CLAVE3, double precio){
            Cve_Articulo = CLAVE3;
            price = precio;
        }
        
};

class Cliente{
    public:
    string Cve_Cliente;
    string Nombre;
};

class Factura{
    public:
        string NoFactura;
        string Cve_Vendedor;
        string Cve_Articulo;
        int Cantidad;
};

string GETDATE(){
    char out[14];
    std::time_t t=std::time(NULL);
    std::strftime(out, sizeof(out), "%Y%m%d%H%S", std::localtime(&t));
    return out;
};

int main() {

    Vendedor arreglov[2];
    Inventario arregloi[2];
    Factura arreglof[5];

    Vendedor v1;
    Vendedor v2;

    v1.SetVendedor("v450");
    v2.SetVendedor("v320");

    v1.SetNombre("Don Julio");
    v2.SetNombre("Juan Pedro");

    arreglov[0]=v1;
    arreglov[1]=v2;

    Inventario i1;
    Inventario i2;
    Inventario i3;

    i1.SetArticulo("Tornillo sin Fin", 10.00);
    i2.SetArticulo("Piñon Cremallera", 20.00);
    i3.SetArticulo("Angulo Anckerman", 30.00);

    arregloi[0]=i1;
    arregloi[1]=i2;
    arregloi[2]=i3;

/*
    int contadorFactura = 0; 
    GeneraFactura(contadorFactura, arreglof, v1, i2, 32);


    cout << "Facturas Generadas "<< endl;
    cout << "No" <<"\t\t"<<"Vendedor"<<"\t"<<"Articulo"<<endl;
    string nombreArticulo;
    for (int j=0; j<=contadorFactura; j++){
        for (int k=0;k<sizeof(arregloi)/sizeof(arregloi[0]);k++){
            if (arreglof[j].Cve_Articulo == arregloi[k].Cve_Articulo)
                nombreArticulo = arregloi[k].Descripcion;
        }
        cout <<arreglof[j].NoFactura<<"\t"
            <<arreglof[j].Cve_Vendedor<<"\t\t"
            <<arreglof[j].Cve_Articulo<<"\t"
            <<nombreArticulo<<endl;

    }
    return 0;
*/
};