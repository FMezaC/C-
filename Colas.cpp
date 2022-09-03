// Insertar elementos en una cola

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

struct Caracter{
	char dato;
	Caracter *siguiente;
};

struct Clientes{
	string dato;
	Clientes *siguiente;
};

void InsertarCola(Nodo *&, Nodo *&, int);
void PedirDatoCola();
void suprimirCola(Nodo *&, Nodo *&, int &);

void menu();
void InsertarCaracterCola(Caracter *&, Caracter *&, char);
void EliminarCaracterCola(Caracter *&, Caracter *&, char &);
void ListarCaracterCola(Caracter *&, char &);

void OrdenClientesCola();
void InsertarClientesOrden(Clientes *&, Clientes *&, string);
void ListarClientesOrden(Clientes *&, string &);
void EliminarClientesOrden(Clientes *&, Clientes *&, string &);

int main(){
	
	OrdenClientesCola();
	
	getch();
	return 0;
}

void PedirDatoCola(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	char con[1];
	
	//Añade elementos a la cola
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		InsertarCola(frente, fin, dato);
		cout<<"\nDesea ingresar otro numero? (y/n): ";
		cin.ignore();
		cin>>con;
	}while( strcmp(con,"y") == 0  || strcmp(con, "Y") == 0);
	
	//Elimina elementos de la cola
	while(frente != NULL){
		suprimirCola(frente, fin, dato);
		cout<<"Dato eliminado: "<<dato<<endl;
	}
}

void InsertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(frente == NULL) frente = nuevo_nodo;
	else fin->siguiente = nuevo_nodo;
	
	fin = nuevo_nodo;
	
	cout<<"El elemento "<<n<<" se inserto correctamente.";
}

void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente->dato;
	Nodo *aux = frente;
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	
	delete aux;
}

/*Ejercicio 1: Hacer un programa en C++, utilizando 
Colas que contenga el siguiente menú: 

 1. Insertar un caracter a una cola
 2. Mostrar todos los elementos de la cola
 3. Salir */
void menu(){
	Caracter *frente = NULL;
	Caracter *fin = NULL;
	int opc;
	char dato, continua[1];
	
	cout<<"---Bienvenidos al Menu---"<< endl;
	cout<<"1. Insertar un caracter a una cola"<< endl;
	cout<<"2. Mostrar todos los elementos de la cola"<< endl;
	cout<<"3. Eliminar caracter"<<endl;
	cout<<"4. Salir"<<endl;
	
	do{
		cout<<"Ingrese una opcion: ";
		cin>>opc;
		switch(opc){
			case 1: 
				cout<<"Ingrese un caracter: ";
				cin>>dato;
				InsertarCaracterCola(frente, fin, dato);
				break;
			case 2:
				cout<<"---Listado de caracteres---"<<endl;
				ListarCaracterCola(frente, dato);
				break;
			case 3:
				EliminarCaracterCola(frente, fin, dato);
				break;
			case 4: 
				exit(-1); 
				break;
		}
		
		cout<<"\nDesea continuar? (y/n): ";
		cin>>continua;
	}while(strcmp(continua, "y") == 0 || strcmp(continua, "Y") == 0);
}

void InsertarCaracterCola(Caracter *&frente, Caracter *&fin, char c){
	Caracter *nuevo_nodo = new Caracter();
	nuevo_nodo->dato = c;
	nuevo_nodo->siguiente = NULL;
	
	if(frente == NULL) frente = nuevo_nodo;
	else fin->siguiente = nuevo_nodo;
	
	fin = nuevo_nodo;
	
	cout<<"El caracter "<< c <<" Insertado correctamente";
}

void ListarCaracterCola(Caracter *&frente, char &c){
	c = frente->dato;
	Caracter *aux = frente;
	
	while(aux != NULL){
		cout<<" "<< aux->dato;
		aux = aux->siguiente;
	}
}

void EliminarCaracterCola(Caracter *&frente, Caracter *&fin, char &c){
	c = frente->dato;
	Caracter *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else frente = frente->siguiente;
	
	delete aux;
	cout<<"El caracter "<< c <<" fue eliminado";
}

/*Ejercicio 2: Hacer un programa que guarde datos de 
clientes de un banco, los almacene en cola, y por 
ultimo muestre los clientes en el orden correcto.*/
void OrdenClientesCola(){
	Clientes *frente = NULL;
	Clientes *fin = NULL;
	string name;
	int opc;
	char cont[1];
	
	cout<<"---Bienvenidos a 'Mi Banco'---"<< endl;
	cout<<"1. Ingresar cliente"<< endl;
	cout<<"2. Listar cliente" << endl;
	cout<<"3. Eliminar"<< endl;
	cout<<"4. Salir"<< endl;
	do{
		cout<<"Digite una opcion: ";
		cin>>opc;
		//cin.ignore();
		switch(opc){
			case 1:
				cout<<"Ingrese nombre cliente: ";
				cin >> name;
				InsertarClientesOrden(frente, fin, name);
				break;
			case 2:
				cout<<"---Lista de clientes--"<< endl;
				ListarClientesOrden(frente, name);
				break;
			case 3:
				cout<<"---Eliminado cliente de cola---"<<endl;
				EliminarClientesOrden(frente, fin, name);
				break;
			case 4:
				exit(-1);
				break;
		}
		cout<<"\nDesea continuar? (y/n): ";
		cin>>cont;
	}while(strcmp(cont, "y") ==0 || strcmp(cont, "Y") ==0);
}

void InsertarClientesOrden(Clientes *&frente, Clientes *&fin, string name){
	Clientes *nuevo_nodo = new Clientes();
	nuevo_nodo->dato = name;
	nuevo_nodo->siguiente = NULL;
	
	if(frente != NULL) fin->siguiente = nuevo_nodo;
	else frente = nuevo_nodo;
	
	fin = nuevo_nodo;
	cout<<"El cliente "<<name <<" ya se encuentra en la cola";
}

void ListarClientesOrden(Clientes *&frente, string &name){
	name = frente->dato;
	Clientes *aux = frente;
	
	while(aux != NULL){
		cout<<" "<< aux->dato;
		aux = aux->siguiente;
	}
	
}

void EliminarClientesOrden(Clientes *&frente, Clientes *&fin, string &name){
	name = frente->dato;
	Clientes *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else frente = frente->siguiente;
	
	delete aux;
	cout<<"El cliente "<< name <<" fue eliminado";
}

