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
		cout<<"1. Agregar Cola"<<endl;
		cout<<"2. Agregar Inicio"<<endl;
		cout<<"3. Agregar Entre"<<endl;
		cout<<"4. Buscar"<<endl;
		cout<<"5. Eliminar Inicio"<<endl;
		cout<<"6. Eliminar Medio"<<endl;
		cout<<"7. Eliminar Fin"<<endl;
		cout<<"8. Imprimir"<<endl;
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
				do{
					l->insertarInicio();
					cout<<"Presione 0 para salir"<<endl;
					cin>>dato;
				}while(dato!=0);
				break;
			case 3: 
				system("cls") ;
				do{
					l->insertarEntre();
					cout<<"Presione 0 para salir"<<endl;
					cin>>dato;
				}while(dato!=0);
				break;	
			case 4: 
				system("cls") ;
				
				break;		
			case 5: 
				system("cls") ;
				cout << "Lista:" << endl;
				l->mostrar();
				l->eliminarInicio();
				cout<< "\nPrimer elemento eliminado con exito...\n"<<endl;
				l->mostrar();
				system("pause");
				break;
			case 6: 
				system("cls") ;
				break;
			case 7: 
				system("cls") ;
				cout << "Lista:" << endl;
				l->mostrar();
				l->eliminarFin();
				cout<< "\nUltimo elemento eliminado con exito... \n"<<endl;
				l->mostrar();
				system("pause");
				break;
			case 8: 
				system("cls") ;
				l->mostrar();
				system("pause");
				break;
			case 0: 
				system("cls") ;
				cout<<"Gracias"<<endl;
				system("pause");
				break;				
		}
	}while(opc!=7);
	return 0;
}
