#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include"Lista.h"

using namespace std;

int main(){
	
	int opc=0,dato;
	Lista *l = new Lista();
	do{
		cout<<"Listas Dobles Circulares"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Buscar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Imprimir"<<endl;
		cout<<"5. Salir"<<endl;
		cin>>opc;
		/*while(opc<48 || opc>52){
			opc=getch();
		}
		opc=opc-48;*/
		switch (opc){
			case 1: system("cls") ;
			
				do{
					l->insertarCola();
					cout<<"Presione 0 para salir"<<endl;
					cin>>dato;
				}while(dato!=0);
				
				break;
			case 2: system("cls") ;
			
				break;
			case 3: system("cls") ;
				break;
			case 4: system("cls") ;
					l->mostrar();
				break;
			case 5: system("cls") ;
				cout<<"Gracias"<<endl;
				system("pause");
				break;				
		}
	}while(opc!=5);
	return 0;
}
