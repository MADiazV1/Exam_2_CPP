#include <iostream>
#include <string>
#include "Dictionary.h"
#include "Data.h"
using namespace std;

int main(){

    string keyCarro = "CARRO";
    string keyMoto = "MOTO";
    Dictionary* lista = new Dictionary();

    Data* carro1 = new Data("Fortuner", "Toyota");
    Data* carro2 = new Data("Mazda3", "Mazda");
    Data* carro3 = new Data("Clio", "Renol");
    Data* moto1 = new Data("Scrambler", "BMW");
    Data* moto2 = new Data("DesertX", "Ducati");
    Data* moto3 = new Data("YZ125", "Yamaha");

    lista->push(new Dictionary(keyCarro, carro1, NULL));
    lista->push(new Dictionary(keyMoto, moto1, NULL));
    lista->push(new Dictionary(keyCarro, carro2, NULL));
    lista->push(new Dictionary(keyCarro, carro3, NULL));
    lista->push(new Dictionary(keyMoto, moto2, NULL));
    lista->push(new Dictionary(keyMoto, moto3, NULL));


    bool mainMenu = true;
    while(mainMenu){
        cout << "Elija un valor" << endl;
        cout << "1. Mostrar lista de objetos" << endl;
        cout << "2. Agregar un objeto en la cola" << endl;
        cout << "3. Buscar elementos" << endl;
        cout << "0. Salir" << endl;
        cout << "-----------------------------------------------------------" << endl;
        int selectionMenu;

        cin >> selectionMenu;

        switch (selectionMenu){
            case 0:{
                cout << "Adios y gracias :)" << endl;
                cout << "-----------------------------------------------------------" << endl;
                mainMenu = false;
                break;
            }
            case 1: {
                lista->show();
                cout << "-----------------------------------------------------------" << endl;
                break;
            }

            case 2:{
                cout << "1. Carro" << endl;
                cout << "2. Moto" << endl;
                cout << "Ingrese el tipo de vehiculo (nro)" << endl;
                int valorVehiculo;
                cin >> valorVehiculo;
                
                string keyNuevoVehiculo;

                if(valorVehiculo == 1){
                    keyNuevoVehiculo = "CARRO";
                }else if(valorVehiculo == 2){
                    keyNuevoVehiculo = "MOTO";
                }else{
                    cout << "Valor errado" << endl;
                }
                
                Data* nuevoVehiculoAdd = lista->agregarNuevoNodo();
                lista->add(keyNuevoVehiculo, nuevoVehiculoAdd);
                cout << "Vehiculo agregado con exito" << endl;
                lista->show();
                cout << "-----------------------------------------------------------" << endl;
                break;
            }

            case 3:{
                cout << "1. Carro" << endl;
                cout << "2. Moto" << endl;
                cout << "Ingrese el tipo de vehiculos que desea ver (nro)" << endl;
                int valorVehiculo;
                cin >> valorVehiculo;
                
                string keyNuevoVehiculo;

                if(valorVehiculo == 1){
                    keyNuevoVehiculo = "CARRO";
                }else if(valorVehiculo == 2){
                    keyNuevoVehiculo = "MOTO";
                }else{
                    cout << "Valor errado" << endl;
                }
                lista->get(keyNuevoVehiculo);
                cout << "-----------------------------------------------------------" << endl;
                break;
            }

            default:{
                cout << "Sorry papi, yo no soy tu mami" << endl;
                cout << "-----------------------------------------------------------" << endl;
                break;
            }    
        }
    }

    return 0;
}
