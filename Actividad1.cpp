#include <iostream>
#include <ctime>

using namespace std;

class Vendedor{
    public:
        string Cve_Vendedor;
        string Nombre;
};

class Inventario{
    public:
        string Cve_Articulo;
        string Descripcion;
        double Precio;
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

void GeneraFactura(int contadorFactura, Factura arreglof[], Vendedor v1, Inventario i2, int Cant){

    Factura f1;
    f1.Cve_Vendedor = v1.Cve_Vendedor;
    f1.Cve_Articulo = i2.Cve_Articulo;
    f1.Cantidad = Cant;
    f1.NoFactura = "F" + GETDATE();
    arreglof[contadorFactura] = f1;
};


int main() {

    Vendedor arreglov[2];
    Inventario arregloi[2];
    Factura arreglof[5];

    Vendedor v1 = {"v100","Don Julio"};
    Vendedor v2 = {"v200","Dona Esperanza"};

    arreglov[0]=v1;
    arreglov[1]=v2;

    Inventario i1 = {"i500","Tornillo sin Fin",10.00};
    Inventario i2 = {"i100","Piñon Cremallera",10.00};
    Inventario i3 = {"i700","Angulo de Ackerman",10.00};

    arregloi[0]=i1;
    arregloi[1]=i2;
    arregloi[2]=i3;

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
};