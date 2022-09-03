#include<iostream>
#include<conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

struct MayorMenor{
	int dato;
	MayorMenor *next;
};

int LlamarListasEnlazadas();
void InsertarLista(Nodo *&, int);
void MostrarLista(Nodo *);
void BuscarElemento(Nodo *, int);
void EliminarElemento(Nodo *&, int);
void EliminarLista(Nodo *&lista, int &);

int main(){
	
	LlamarListasEnlazadas();
	
	getch();
	return 0;
}

int LlamarListasEnlazadas(){
	Nodo *lista = NULL;
	int dato, opc;
	
	do{
		cout<<"\t.::MENU::."<< endl;
		cout<<"1. Ingresar."<< endl;
		cout<<"2. Mostrar."<< endl;
		cout<<"3. Buscar."<<endl;
		cout<<"4. Eliminar."<<endl;
		cout<<"5. Vaciar."<<endl;
		cout<<"6. Salir."<<endl;
		
		cout<<"Ingrese opcion: ";
		cin>> opc;
		switch(opc){
			case 1:
				cout<<"Digite un numero: ";
				cin>>dato;
				InsertarLista(lista, dato);
				break;
			case 2:
				MostrarLista(lista);
				cout<< endl;
				system("pause");
				break;
			case 3:
				cout<<"Digite un numero: ";
				cin>> dato;
				BuscarElemento(lista, dato);
				cout<< endl;
				system("pause");
				break;
			case 4:
				cout<<"Digite un numero: ";
				cin>> dato;
				EliminarElemento(lista, dato);
				cout<< endl;
				system("pause");
				break;
			case 5:
				while(lista != NULL){
					EliminarLista(lista, dato);
					cout<<"Eliminado: " <<dato << endl;
				}
				cout<< endl;
				system("pause");
				break;
			case 6:
				exit(-1);
				break;
		}
		system("cls");
	}while(opc != 6);
	
}

void InsertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	cout<<"Elemento "<< n <<" insertardo correctamente"<< endl;
}

void MostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	while(actual != NULL ){
		cout<< actual->dato << " ";
		actual = actual->siguiente;
	}
}

void BuscarElemento(Nodo *lista, int n){
	Nodo *actual = new Nodo();
	actual = lista;
	bool bandera = false;
	
	while((actual != NULL) && (actual->dato <= n)){
		if(actual->dato == n){
			bandera = true;
			break;
		}
		actual = actual->siguiente;
	}
	
	if(bandera){
		cout<<"El elemento "<< n <<" Si existe.";
	}
	else{
		cout<<"El elemento "<< n <<" No existe.";
	}
}

void EliminarElemento(Nodo *&lista, int n){
	if(lista != NULL){
		Nodo *aux;
		Nodo *anterior = NULL;
		
		aux = lista;
		
		while((aux != NULL) && (aux->dato != n)){
			anterior = aux;
			aux = aux->siguiente;
		}
		
		if(aux == NULL){
			cout<<"El elemento no existe";
		}
		else if(anterior == NULL){
			lista = lista->siguiente;
			delete aux;
		}
		else{
			anterior->siguiente = aux->siguiente;
			delete(aux);
		}
		
	}
	
}

void EliminarLista(Nodo *&lista, int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
}

/* Ejercicio 1: Crear una lista que almacene "n" números 
 * enteros  y calcular el menor y mayor de ellos.
 */
int llamaMenorMayor(){
	MayorMenor nodo;
	int dato, n;
	cout<<"Ingrese numero de elementos";
	cin >> n;
	
	while(n-->0){
		cout<<"Ingrese un numero: ";
		//llamar al cargar lista
	}
	
}



/* Ejercicio 2: Crear una lista que almacene "n" números 
 * reales  y calcular su suma y promedio.
 */
