#include <iostream>
#include "Lista.h"

using namespace std;

int main(){
	int op;
	Lista *lista = new Lista();
	do{
		lista->insertarInicio();
		cout << "Ingrese 1 para salir" << endl;
		cin >> op;
	} while (op != 1);
	lista->mostrar();
	return 0;
}
