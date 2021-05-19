#include <iostream>

using namespace std;

class Persona{
public:
    string getNombre();
    int getEdad();



protected:
    string nombre;
    int edad;

};

string Persona::getNombre(){
    return nombre;

}

int Persona::getEdad(){
    return edad;

}

class Estudiante: public Persona {

public:
    Estudiante();
    Estudiante(string, int, string);
    string getCarrera();
    void setCarrera();
    void muestraDatos();

private:
    string carrera;

};

Estudiante::Estudiante() : Persona(){
    nombre = "nada";
    edad = 0;
    carrera = "ninguna";
};

/*Estudiante::Estudiante(string n, int e, string c) : Persona(n,e) {
    nombre = n;
    edad = e;
    carrera = c;
};
*/

string Estudiante::getCarrera(){
    return carrera;
};
void Estudiante::muestraDatos(){
    cout<<"Nombre  Edad  Carrera"<<endl;
    cout<< nombre <<"\t"<< edad << "\t"<< carrera<<endl;
}

int main(){

    return 0;
}