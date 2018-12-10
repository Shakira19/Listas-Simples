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
		void insertarInicio();
		void insertarEntre();
		int tamanioLista();
		void insertarFin();
		void buscar();
		void eliminarInicio();
		void eliminarFin();
		void mostrar();
		int leerDato(char *);
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
}*/



int Lista::leerDato(char *msg){
	int dato;
	cout<<endl<<msg;
	cin>>dato;
	return dato;
}

void Lista::insertarInicio(){
		 int dato;
         cout<<"Ingrese un valor: ";
	   	 cin>>dato;
	   	 Nodo *nuevo=new Nodo(dato,NULL,NULL);
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
		 	primero=nuevo;
				   }
	}
	
int Lista::tamanioLista(){
	int cont = 0;
	Nodo *aux = new Nodo();
	aux = primero;
	while(aux != NULL){
		cont++;
		aux = aux->getSiguiente();
	}
	return cont;
}
	
	void Lista::insertarEntre(){
		int dato, pos;
		pos = leerDato((char *)"Ingrese una posicion: ");
		if(primero==NULL){
			Nodo *nuevo = new Nodo(dato,NULL,NULL);
			primero = nuevo;
			ultimo = nuevo;
			cout<<"creando nodo..."<<endl;
		}else{
			
			if(pos == 1){
				insertarInicio();
			}
			if(pos == (tamanioLista() + 1)){
				insertarCola();
			}
			if(pos > 1 && pos < (tamanioLista() + 1))
			{
				dato = leerDato((char *)"Ingrese un dato: ");
				Nodo *temp = new Nodo(dato,NULL,NULL);
				Nodo *nuevo = new Nodo();
				nuevo = primero;
				for(int i=1; i<pos;i++){
					nuevo = nuevo->getSiguiente();
				}
				temp->setSiguiente(nuevo->getSiguiente());
				temp->setAnterior(nuevo);
				nuevo->setAnterior(temp);
				nuevo->setSiguiente(temp);
			}
			
			else{
				cout<<"Error, posicion invalida"<<endl;
			}
		}
		
	}
	
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
