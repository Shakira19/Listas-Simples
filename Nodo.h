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
