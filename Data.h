#include <iostream>
#include <string>
#pragma once
using namespace std;

class Data{
    private:
        string nombreVehiculo;
        string marca;
    public:
        //Contructor de objeto
        Data(string nombre, string marca);

        //Constructor para instanciar
        Data();

        //Obtener el nombre del vehiculo
        string getNombreVehiculo();

        //Literalmente el vehiculo
        string verVehiculo();
};