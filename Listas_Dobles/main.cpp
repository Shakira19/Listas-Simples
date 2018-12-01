#include "ListaDoble.h"

int main(){
	int op;
	ListaDoble *listaDoble = new ListaDoble();
	do{
		listaDoble->insertarInicio();
		cout << "Ingrese 1 para salir" << endl;
		cin >> op;
	} while (op != 1);
	listaDoble->mostrar();
	return 0;
}
