#include <iostream>
#include <string>
#include "Data.h"
#pragma once
using namespace std;

class Dictionary{
    private:
        Data* data;
        string key;
        Dictionary* cabecera;
    public:

        //Contructor de direccion de la cabeza de la lista
        Dictionary(){
            this->cabecera = NULL;
        }

        //Contructor del nodo 
        Dictionary(string key, Data* data, Dictionary* next);

        // Direccion del siguiente del nodo
        Dictionary* next;

        //Agregar dato a la lista
        void push(Dictionary* nodo);

        //Imprime los datos de una lista
        void imprimirDato();

        //Organiza el objeto para imprimir
        void show();

        //Agregar dato a la sublista
        void add(string key, Data* data);

        //Traer datos de una misma llave
        void get(string key);

        Data* agregarNuevoNodo();

};