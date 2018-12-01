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
		void setanterior(Nodo *);
		Nodo * getSig();
		int getDato();
		Nodo * getanterior();
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
void Nodo::setanterior(Nodo *ult){
	anterior=ult;
}
void Nodo::setDato(int d){
	dato=d;
}
Nodo * Nodo::getSig(){
	return siguiente;
}
Nodo * Nodo::getanterior(){
	return anterior;
}
int Nodo::getDato(){
	return dato;
}

