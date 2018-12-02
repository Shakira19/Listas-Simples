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
		bool buscar(int);
		void insertarFinal();
		void insertarPosicion();
		int tamanioLista();
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

int ListaDoble::tamanioLista(){
	int cont = 0;
	Nodo *aux = new Nodo();
	aux = primero;
	while(aux != NULL){
		cont++;
		aux = aux->getSig();
	}
	return cont;
}

void ListaDoble::insertarPosicion(){
	int dato, pos;
	pos = leerDato((char *)"Ingrese una posicion: ");
	if(vacio()){
		Nodo *aux = new Nodo(NULL,dato,NULL);
		primero = aux;
		ultimo = aux;
	}else{
		if(pos == 1){
			insertarInicio();
		}else if(pos == (tamanioLista() + 1)){
			insertarFinal();
		}else if(pos > 1 && pos < (tamanioLista() + 1)){
			dato = leerDato((char *)"Ingrese un dato: ");
			Nodo *temp = new Nodo(NULL,dato,NULL);
			Nodo *aux = new Nodo();
			aux = primero;
			for(int i=1; i<pos;i++){
				aux = aux->getSig();
			}
			temp->setSig(aux->getSig());
			temp->setanterior(aux);
			aux->setanterior(temp);
			aux->setSig(temp);
		}
		else{
			cout<<"Error, posicion invalida"<<endl;
		}
	}
}

bool ListaDoble::buscar(int dato){
	Nodo *aux = new Nodo();
	aux=primero;
	while(aux!=NULL){
		if(aux->getDato()==dato){
			return true;
		}
		aux=aux->getSig();
	}
	return false;
}

void ListaDoble::mostrar(){
	Nodo * aux = new Nodo();
	aux = primero;
	if(aux != NULL){
		cout<<"Lista:";
		do{
			cout<<aux->getDato()<<"->";
			aux = aux->getSig();
			}while(aux != NULL);
			cout<< "NULL" <<endl;
	}else
	cout<<"NULL"<<endl;
}
