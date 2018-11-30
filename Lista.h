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
		Nodo *primero,*ultimo;
	public:
		Lista();
		bool vacio();
		void insertarInicio();
		void mostrar();
		int leerDato(char *);
		bool buscarNodo(int dato);
		void insertarFin();
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
void Lista::insertarFin(){
	int dato;
	char *msg = (char*) "Ingrese el dato del nodo: ";
	dato = leerDato(msg);
	
		
	//SEGUNDA VERSION(Optima, se ahorra un nodo menos comparado a la primera version)
	//------------------------------------------------------------------------------
	if(vacio()){
		primero = new Nodo(dato, NULL);
		ultimo=primero;
	
	}
	else{
		Nodo *aux=new Nodo();
		aux->setSig(NULL);
		ultimo->setSig(aux);
		aux->setDato(dato);
		ultimo=aux;
	}
	//------------------------------------------------------------------
	//PRIMERA VERSION(se requiere de un nodo adicional)
	/*else{
		Nodo *aux1 = new Nodo();
		aux1=primero;
		Nodo *aux2=new Nodo();
		
		while((aux1)!=NULL){
			aux2=aux1;
			aux1=aux1->getSig();
		}
		Nodo *aux3=new Nodo(dato,NULL);
		aux2->setSig(aux3);
		
	}*/
	//--------------------------------------------------------------------
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

bool Lista::buscarNodo(int dato){
	Nodo *aux = new Nodo();
	aux = primero;
	if(primero != NULL){
		while(aux != NULL){
			if(aux->getDato() == dato)
				return true;			
			aux = aux->getSig();
		}
		return false;	
	}else
		return false;
}
