#include "ListaDoble.h"
#include"Menu.h"

int main(){
	int op,dato;
	ListaDoble *listaDoble = new ListaDoble();
	do{
		MENU menu;
		system("cls");
		menu.ingresarOp("Agregar",1);
		menu.ingresarOp("Buscar",2);
		menu.ingresarOp("Eliminar",3);
		menu.ingresarOp("Mostrar",4);
		menu.ingresarOp("Salir",5);
		op=menu.imprimirMenu(5,3);
		switch(op){
			case 1:{
				cout<<endl;
				listaDoble->insertarInicio();		
				break;
			}
			case 2:{
				cout<<endl;
				if(listaDoble->buscar(dato = listaDoble->leerDato((char *)"Ingrese un que desea buscar dato: "))){
					cout<<"Se encontro el dato "<<dato<<endl;
				}else{
					cout<<"Dato no encontrado "<<dato<<endl;
				}
				system("pause");
				break;
			}
			case 3:{
				cout<<endl;

				break;
			}
			case 4:{
				cout<<endl;
				listaDoble->mostrar();
				cout<<endl;	
				system("Pause");	
				break;
			}
		}
				
	}while(op!=5);	
	return 0;
}
