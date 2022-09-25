#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

Data::Data(string nombre, string marca){
    this->nombreVehiculo = nombre;
    this->marca = marca;
}

Data::Data(){
    this->nombreVehiculo = "Sin nombre";
    this->marca = "Sin marca";
}

string Data::getNombreVehiculo(){
    return this->nombreVehiculo;
}

string Data::verVehiculo(){
    string verDato = "Vehiculo : " + this->nombreVehiculo + ", de marca " + this->marca;
    return verDato;
}
