#include<iostream>
#include "Nodo.h"
using namespace std;

class ListaDoble{
	private:
		Nodo *primero, *ultimo;
	public:
		ListaDoble();
		bool vacio();
		void insertarInicio();
		void insertarFinal();
		void buscar();
		void mostrar();
		void eliminar();
		int leerDato(char *);
};

ListaDoble::ListaDoble(){
	primero = NULL;
	ultimo = NULL;
};

int ListaDoble::leerDato(char *msg){
	int dato;
	cout<<endl<<msg;
	cin>>dato;
	return dato;
}

bool ListaDoble::vacio(){
	if(primero == NULL){
		return true;
	}else{
		return false;
	}
}

void ListaDoble::insertarInicio(){
	int dato;
	dato = leerDato((char *)"Ingrese un dato: ");
	if(vacio()){
		Nodo * aux = new Nodo(NULL,dato,NULL);
		primero = aux;
		ultimo = aux;
	}else{
		Nodo * aux = new Nodo(NULL,dato,ultimo);
		ultimo->setSig(aux);
		ultimo = aux;
	}
}

void ListaDoble::insertarFinal(){
	int dato;
	dato = leerDato((char *)"Ingrese un dato: ");
	if(vacio()){
		Nodo * aux = new Nodo(NULL,dato,NULL);
		ultimo = aux;
		primero = aux;
	}else{
		Nodo * aux = new Nodo(primero,dato,NULL);
		primero->setanterior(aux);
		primero = aux;
	}
}

void ListaDoble::mostrar(){
	Nodo * aux = new Nodo();
	aux = primero;
	if(primero != NULL){
		cout<<"Lista:";
		do{
			cout<<primero->getDato()<<"->";
			primero = primero->getSig();
			}while(primero != NULL);
			cout<< "NULL" <<endl;
	}else
	cout<<"NULL"<<endl;
}

	

	


