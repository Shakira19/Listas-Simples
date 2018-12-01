#include "nodo.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *ultimo;
		
	public:
		Lista();
		//bool vacio();
		//int leerDato(char *);
		void insertarCola();
		void insertarEntre();
		void insertarFin();
		void buscar();
		void eliminar();	
		void mostrar();
};

Lista::Lista(){
	primero = NULL;
	ultimo = NULL;
}

/*bool Lista::vacio(){
	if(primero==NULL&&ultimo==NULL){
		return true;
	}else{
		return false;
		
	}
}

int Lista::leerDato(char *msg){
	int valor;
	cout<<msg;
	cin >> valor;
	return valor;
}
*/



void Lista::insertarCola(){
	int dato;
	Nodo *nuevo = new Nodo(dato,NULL,NULL);
	
	cout<<"Ingrese un valor: ";
	cin>>dato;
	if(primero==NULL&&ultimo==NULL){
		primero=nuevo;
		ultimo=nuevo;
		primero->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}else{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(primero);
		nuevo->setSiguiente(primero);
		primero->setAnterior(nuevo);
		ultimo=nuevo;
		
	}
	/*
	if(vacio()){
		primero = new Nodo(dato,NULL);
	}else{
		Nodo *aux = new Nodo();
		aux->setDato(dato);
		aux->setSig(primero);
		Nodo *aux2 = new Nodo(dato, aux->getSig());
		primero =aux;
	}*/

}

void Lista::mostrar(){
	Nodo *aux = new Nodo(0,NULL,NULL);
	aux=primero;
	if(primero==NULL){
		while(aux != NULL){
			cout << "Dato: " << aux->getDato() << endl;
			aux = aux->getSiguiente();
		}
	} else {
		cout << "Lista vacia" << endl;
	}
}


