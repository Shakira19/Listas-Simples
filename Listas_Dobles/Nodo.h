class Nodo{
	private:
		Nodo * siguiente;
		int dato;
		Nodo * anterior;
	public:
		Nodo();
		Nodo(Nodo *,int,Nodo *);
		void setSig(Nodo *);
		void setDato(int);
		void setAnterior(Nodo *);
		Nodo * getSig();
		int getDato();
		Nodo * getAnterior();
		~Nodo();
};

Nodo::Nodo(){
}

Nodo::Nodo(Nodo *sig,int d,Nodo *ult){
	siguiente=sig;
	dato=d;
	anterior=ult;
}
void Nodo::setSig(Nodo *sig){
	siguiente=sig;
}
void Nodo::setAnterior(Nodo *ult){
	anterior=ult;
}
void Nodo::setDato(int d){
	dato=d;
}
Nodo * Nodo::getSig(){
	return siguiente;
}
Nodo * Nodo::getAnterior(){
	return anterior;
}
int Nodo::getDato(){
	return dato;
}

