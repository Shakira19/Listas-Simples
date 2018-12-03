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
		void eliminar(); //ELimina al inicio, final o entre :)
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
		primero->setAnterior(aux);
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
			temp->setAnterior(aux);
			aux->setAnterior(temp);
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
		cout<<"Lista:\n";
		do{
			cout<<aux->getDato()<<"->";
			aux = aux->getSig();
			}while(aux != NULL);
			cout<< "NULL" <<endl;
	}else
	cout<<"NULL"<<endl;
}
void ListaDoble::eliminar(){ 
	Nodo *actual = new Nodo();
	actual = primero;
	Nodo *anterior = new Nodo();
	anterior = NULL;
	bool encontrado=false;
	int nodoBuscado = 0;
	cout<<"Ingrese el dato que desea eliminar: "; cin>>nodoBuscado;
	if(primero != NULL){
		while(actual != NULL && encontrado != true){
			
			if(actual->getDato() == nodoBuscado){
				
				if(actual == primero){ //elimina al inicio
					primero = primero->getSig();
					primero->setAnterior(NULL);
				}else if(actual == ultimo){ //elimina al final
					anterior->setSig(NULL) ;
					ultimo = anterior;
				}else{ //elimina entre
					anterior->setSig(actual->getSig())  ;
					actual->getSig() == anterior;
				}
				cout<<" * DATO "<< nodoBuscado <<" ELIMINADO *"<<endl;
				encontrado = true;
			}
			anterior = actual;
			actual = actual->getSig();
		}
		if(!encontrado){
			cout<<"\nDato no encontrado"<<endl;
		}
	}else{
		cout<<"\nLa Lista esta vacia"<<endl;
	}
}









