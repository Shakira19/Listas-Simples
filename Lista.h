//UNIVERSIDAD DE LAS FUERZAS ARMADAS-ESPE
//AUTORES:Cofre,Molina,Quimbita,Parra,Pupiales,Vizuete,Romero,Moreno,Castro,Yandun,Casanova,Yepez,Avila,Guevara,Altamirano,Salazar
//Fecha de Creacion:23/11/2018						Feha de Modificacion:28/11/2018
//Problema:Realizar un programa con listas simples(insertar inicio, insertar fin, eliminar, buscar, mostrar)
#include "Nodo.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
class Lista{
	private:
		Nodo *primero;
	public:
		Lista();
		bool vacio();
		void insertarInicio();
		void mostrar();
		int leerDato(char *);
};

Lista::Lista(){
	primero = NULL;
}

bool Lista::vacio(){
	if(primero == NULL)
		return true;
	else
		return false;
}

int Lista::leerDato(char *msg){
	int valor;
	cout << msg;
	cin >> valor;
	return valor;
}

void Lista::insertarInicio(){
	int dato;
	char *msg = (char*) "Ingrese el dato del nodo: ";
	dato = leerDato(msg);
	if(vacio()){
		primero = new Nodo(dato, NULL);
	}else{
		Nodo *aux = new Nodo();
		aux->setDato(dato);
		aux->setSig(primero);
		Nodo *aux2 = new Nodo(dato, aux->getSig());
		primero = aux;
	}
}

void Lista::mostrar(){
	Nodo *aux = new Nodo();
	aux = primero;
	if(!vacio()){
		while(aux != NULL){
			cout << "Dato: " << aux->getDato() << endl;
			aux = aux->getSig();
		}
	} else {
		cout << "Lista vacia" << endl;
	}
		
}
