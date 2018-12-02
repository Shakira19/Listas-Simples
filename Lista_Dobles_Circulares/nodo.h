class Nodo{
	private:
		int dato;
		Nodo *siguiente;
		Nodo *anterior;
	public:	
	Nodo(){
		
	}
	Nodo(int _dato, Nodo *_sig,Nodo *_ant){
		dato= _dato;
		siguiente = _sig;
		anterior = _ant;
	}
	~Nodo(){
	}	
	int getDato(){
		return dato;
	}
	Nodo *getSiguiente(){
		return siguiente;
	}
	Nodo *getAnterior(){
		return anterior;
	}
	void setDato(int _d){
		dato=_d;
	}
	void setSiguiente(Nodo *_sig){
		siguiente=_sig;
	}
	void setAnterior(Nodo *_ant){
		anterior = _ant;
	}
};
