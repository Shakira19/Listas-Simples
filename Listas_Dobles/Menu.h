#include <windows.h>
#include <stdio.h>
#include <conio.h>

void SetColorA(int color,int colorf);
void TextColor(int color);
void Gotoxy1(int x,int y);
void imprimir(int x,int y, const char *txt);
struct OPC
	{
		int id;
		char name[128];
	};
	

class MENU
{   
	 
	public :
       MENU();
       void ingresarOp(const char *txt, int index);
       int imprimirMenu(int x,int y);
    
    private:
		int COLOR,COLORB;
		int con;
		OPC Opc[10];
		int OPC_SEL;   
};

void Gotoxy1(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
void imprimir(int x,int y,const char *txt){   
	Gotoxy1(x,y);
	printf("%s",txt);
}

void SetColorA(int color,int colorf){
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color | colorf | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY );
}



void SetColorC(int color,int colorf){
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color | colorf);
}


void TextColor(int color)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
}

//**************CLASE MENU ********************

MENU::MENU()
{
	con=0;
	COLOR=15;
	COLORB=21;
	OPC_SEL=1;
}

void MENU::ingresarOp(const char *txt, int index)
{
	Opc[index].id=index;
	sprintf(Opc[index].name,"%s",txt);
	con=con+1;
}

int MENU::imprimirMenu(int x,int y)
{   

	int tecla;
	int columna;
	while(tecla!=13) 
	{
		columna = y;
	for(int i=1;i<con+1;i++){
	    SetColorA(10,COLORB);			
		if(OPC_SEL==i)
		{   
			SetColorA(14,4);
		}
		Gotoxy1(x,columna);
		printf("%s",Opc[i].name);
		columna=columna+2;
	  }
      SetColorC(15,4);
      
      tecla=_getch();  
      
	  switch ( tecla ) 
	  {     case 72://Izquierda 72-Arriba
	            OPC_SEL=OPC_SEL-1;
	            if(OPC_SEL<1)
	               {OPC_SEL=con;}
	  			break;
		    case 80://Derecha 80-Abajo
	            OPC_SEL=OPC_SEL+1;
	            if(OPC_SEL>con)
	               {OPC_SEL=1;}
	  			break;
	  } 
      
	}
	
	return OPC_SEL;
}
