//UNIVERSIDAD DE LAS FUERZAS ARMADAS-ESPE
//AUTORES:Cofre,Molina,Quimbita,Parra,Pupiales,Vizuete,Romero,Moreno,Castro,Yandun,Casanova,Yepez,Avila,Guevara,Altamirano,Salazar
//Fecha de Creacion:23/11/2018						Feha de Modificacion:28/11/2018
//Problema:Realizar un programa con listas simples(insertar inicio, insertar fin, eliminar, buscar, mostrar)
#include <iostream>
#include "Lista.h"

using namespace std;

int main(){
	int op;
	Lista *lista = new Lista();
	do{
		lista->insertarFin();
		cout << "Ingrese 1 para salir" << endl;
		cin >> op;
	} while (op != 1);
	lista->mostrar();
	return 0;
}
