#include<iostream>
#include<conio.h>
#include"Lista.h"

using namespace std;

int main(){
	int opc=0,dato;
	Lista *l = new Lista();
	do{
		system("cls");
		cout<<"Listas Dobles Circulares"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Buscar"<<endl;
		cout<<"3. Eliminar Inicio"<<endl;
		cout<<"4. Eliminar Medio"<<endl;
		cout<<"5. Eliminar Fin"<<endl;
		cout<<"6. Imprimir"<<endl;
		cout<<"7. Salir"<<endl;
		cin>>opc;
		switch (opc){
			case 1: 
				system("cls");
				do{
					l->insertarCola();
					cout<<"Presione 0 para salir"<<endl;
					cin>>dato;
				}while(dato!=0);
				break;
			case 2: 
				system("cls") ;
				break;
			case 3: 
				system("cls") ;
				cout << "Lista:" << endl;
				l->mostrar();
				l->eliminarInicio();
				cout<< "\nPrimer elemento eliminado con exito...\n"<<endl;
				l->mostrar();
				system("pause");
				break;
			case 4: 
				system("cls") ;
				break;
			case 5: 
				system("cls") ;
				cout << "Lista:" << endl;
				l->mostrar();
				l->eliminarFin();
				cout<< "\nUltimo elemento eliminado con exito... \n"<<endl;
				l->mostrar();
				system("pause");
				break;
			case 6: 
				system("cls") ;
				l->mostrar();
				system("pause");
				break;
			case 7: 
				system("cls") ;
				cout<<"Gracias"<<endl;
				system("pause");
				break;				
		}
	}while(opc!=7);
	return 0;
}
