#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

struct numero{
	int dato;
	numero *siguiente;
};

void agregarPila(nodo *&, int);
void llamarPila();
void sacarPila(nodo *&, int &);

void AgregarNumeroPila();

int main(){
	
	AgregarNumeroPila();
	
	getch();
	return 0;
}

//98

void llamarPila(){
	nodo *pila = NULL;
	int n1, n2;
	cout<<"Digite un numero: "; cin>>n1;
	agregarPila(pila, n1);
	cout<<"Digite otro numero: "; cin>>n2;
	agregarPila(pila, n2);
	
	cout<<"\nSacando los elementos de la pila: ";
	int dato;
	while(pila != NULL){
		sacarPila(pila, dato);
		(pila != NULL) ? cout<<dato<<" , " : cout<<dato<<".";
	}
}

void agregarPila(nodo *&pila, int n){
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout<<"El elemento "<<n<<" agregado corectamente"<<endl;
}

void sacarPila(nodo *&pila, int &n){
	nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}

/*Ejercicio 1: Hacer un programa para agregar 
números enteros a una pila, hasta que el usuario 
lo decida, después mostrar todos los números 
introducidos en la pila. */
void AgregarNumeroPila(){
	int tPila, num, dato;
	numero *pila = NULL;
	cout<<"Ingrese tamaño pila: "; cin>>tPila;
	for(int i=0;i<tPila;i++){
		cout<<"Digite un numero: "; cin>>num;
		numero *nuevo_nodo = new numero();
		nuevo_nodo->dato = num;
		nuevo_nodo->siguiente = pila;
		pila = nuevo_nodo;
		cout<<"El elemento "<<num<<" se agergo correctamente."<<endl;
	}
	
	while(pila != NULL){
		numero *aux = pila;
		num = aux->dato;
		pila = aux->siguiente;
		(pila != NULL) ? cout<<dato<<" , " : cout<<dato<<".";
		delete(aux);
	}
	
}

/*Ejercicio 2: Hacer un programa en C++, utilizando 
Pilas que contenga el siguiente menu: 

 1. Insertar un caracter a la pila
 2. Mostrar todos los elementos de la pila
 3. Salir
************************/

