//UNIVERSIDAD DE LAS FUERZAS ARMADAS-ESPE
//AUTORES:Cofre,Molina,Quimbita,Parra,Pupiales,Vizuete,Romero,Moreno,Castro,Yandun,Casanova,Yepez,Avila,Guevara,Altamirano,Salazar
//Fecha de Creacion:23/11/2018						Feha de Modificacion:28/11/2018
//Problema:Realizar un programa con listas simples(insertar inicio, insertar fin, eliminar, buscar, mostrar)
class Nodo{
	private:
		int dato;
		Nodo *sig;
	public:
		Nodo (){
		}
		Nodo (int a, Nodo *_sig){
			dato = a;
			sig = _sig;
		}
		~Nodo(){
			//delete [] sig;
		}
		int getDato(){
			return dato;
		}
		Nodo * getSig(){
			return sig;
		}
		void setDato(int _d){
			dato = _d;
		}
		void setSig(Nodo *s){
			sig = s;
		}
};
