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
		void eliminarInicio();
		void eliminarFin();
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
	cout<<"Ingrese un valor: ";
	cin>>dato;
	Nodo *nuevo = new Nodo(dato,NULL,NULL);
	if(primero==NULL&&ultimo==NULL){
		primero=nuevo;
		ultimo=nuevo;
		primero->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}else{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		nuevo->setSiguiente(primero);
		primero->setAnterior(nuevo);
		ultimo=nuevo;	
	}
}

void Lista::mostrar(){
	Nodo *aux = new Nodo();
	aux=primero;
	if(primero!=NULL){
		do{
			cout << "Dato: " << aux->getDato() << endl;
			aux = aux->getSiguiente();
		} while(aux != primero);
	} else {
		cout << "Lista vacia" << endl;
	}
}

void Lista::eliminarInicio(){
	Nodo * aux = new Nodo();
	aux = primero;
	primero->~Nodo();
	primero = aux->getSiguiente();
	primero->setAnterior(aux->getAnterior());
	ultimo->setSiguiente(primero);
}

void Lista::eliminarFin(){
	Nodo * aux = new Nodo();
	aux = ultimo;
	ultimo->~Nodo();
	ultimo = aux->getAnterior();
	ultimo->setSiguiente(aux->getSiguiente());
	primero->setAnterior(ultimo);
}
