#include <iostream>
#include <ctime>

using namespace std;

class Vendedor{
    public:
        Vendedor();
        Vendedor(string clave, string nombre);
        void setVend(string clave, string nombre);
        string getVend() {return Cve_Vendedor;}
        string getNombre() {return Nombre;}
    private:
        string Cve_Vendedor;
        string Nombre;
};

Vendedor::Vendedor(){
    Cve_Vendedor = "vacante";
    Nombre = "nadie";

};

Vendedor::Vendedor(string clave, string nombre){
    Cve_Vendedor = clave;
    Nombre = nombre;

};


class Inventario{
    public:
        Inventario();
        Inventario(string clavei, string descripcion, double precio);
        void setInv(string clavei, string descripcion, double precio);
        string getArt() {return Cve_Articulo;}
        string getDesc() {return Descripcion;}
        double getPre(){return Precio;}
    private:
        string Cve_Articulo;
        string Descripcion;
        double Precio;
};

Inventario::Inventario(){
    Cve_Articulo = "ninguno";
    Descripcion = "nohay";
    Precio = 0.0;
};

Inventario::Inventario(string clavei, string descripcion, double precio){
    Cve_Articulo = clavei;
    Descripcion = descripcion;
    Precio = precio;
};


/*
class Cliente{
    private:
    string Cve_Cliente;
    string Nombre;
};

class Factura{
    private:
        string NoFactura;
        string Cve_Vendedor;
        string Cve_Articulo;
        int Cantidad;
};
*/

int main() {
    Vendedor v1;
    Vendedor v2("a20","Rodrigo");


    cout<<v1.getVend()<<"  ...  "<<v1.getNombre()<<"\n";
    cout<<v2.getVend()<<"  ...  "<<v2.getNombre()<<"\n";


    Inventario i1;
    Inventario i2("i321","Piñon Cremallera", 25.00);
    
    cout<<i1.getArt()<<"/"<<i1.getDesc()<<"/"<<i1.getPre()<<"\n";
    cout<<i2.getArt()<<"/"<<i2.getDesc()<<"/"<<i2.getPre()<<"\n";

    return 0;
};