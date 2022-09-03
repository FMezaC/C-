#include<iostream>
#include<conio.h>

using namespace std;

int metodoBurbuja();
int metodoInsercio();
int metodoSeleccion();

int main(){
	
	metodoSeleccion();
	
	getch();
	return 0;
}

//metodo burbuja
int metodoBurbuja(){
	int numero[] = {14,11,15,13,12};
	int aux=0;
	for(int i=0;i<5;i++){
		for(int x=0;x<5;x++){
			if((numero[x]>numero[x+1]) && ((x+1)<5)){
				aux = numero[x];
				numero[x] = numero[x+1];
				numero[x+1] = aux;
			}
		}
	}
	
	cout<<"N [";
	for(int j=0;j<5;j++){
		cout<<numero[j]<<" ";
	}
	cout<<"]";
}

//ordenamiento por insercion
int metodoInsercio(){
	int numero[] = {14,11,15,13,12};
	int pos, aux;
	for(int i=0;i<5;i++){
		pos=i;
		aux = numero[i];
		while((pos>0) && (numero[pos-1]>aux)){
			numero[pos] = numero[pos-1];
			pos--;
		}
		numero[pos] = aux;
	}
	
	cout<<"N => [";
	for(int x=0;x<5;x++){
		cout<<numero[x]<<" ";
	}
	cout<<"]";
}

//Ordenamiento por seleccion
int metodoSeleccion(){
	int numero[] = {14,11,15,13,12};
	int min, aux;
	for(int i=0; i<5;i++){
		min = i;
		for(int x= i+1;x<5;x++){
			if(numero[x]<numero[min]){
				min = x;
			}
		}
		aux = numero[i];
		numero[i] = numero[min];
		numero[min] = aux;
	}
	
	cout<<"N => [";
	for(int y=0;y<5;y++){
		cout<<numero[y]<<" ";
	}
	cout<<"]";
}

