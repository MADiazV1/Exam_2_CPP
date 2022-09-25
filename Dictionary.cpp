#include <iostream>
#include <string>
#include "Data.h"
#include "Dictionary.h"
using namespace std;

Dictionary::Dictionary(string key, Data* data, Dictionary* next){
    this->key = key;
    this->data = data;
    this->next = next;
}

void Dictionary::push(Dictionary* nodo){ 
    nodo->next = this->cabecera;
    this->cabecera = nodo;    
}

void Dictionary::imprimirDato(){
    cout << "[" << this->data->verVehiculo() << "]->" << this->key << endl;
}

void Dictionary::show(){
    Dictionary* aux = this->cabecera;
    while(aux){
        aux->imprimirDato();
        aux = aux->next;
    }
}

void Dictionary::add(string key, Data* data){
    Dictionary* nuevoNodo = new Dictionary(key, data, NULL);
    this->push(nuevoNodo);
}

//Profe, si el objetivo era retornar todos los nodos que tuvieran la misma llave, con un "return Data*" como que queda muy complicado
void Dictionary::get(string key){
    Dictionary* nodo = this->cabecera;
    do{
        if(nodo->key == key){
            cout << nodo->data->verVehiculo() << endl;
        }
        nodo = nodo->next;
    }while(nodo != NULL);

}

Data* Dictionary::agregarNuevoNodo(){
    
    string nuevaMarca;
    string nuevoNombre;

    cout << "Ingrese el modelo" << endl;
    cin >> nuevoNombre;

    cout << "Ingrese la marca" << endl;
    cin >> nuevaMarca;

    Data* nuevoVehiculo = new Data(nuevoNombre, nuevaMarca);
    return nuevoVehiculo;
}
