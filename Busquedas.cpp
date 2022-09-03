#include<iostream>
#include<conio.h>

using namespace std;

int busquedaSecuencial();
int busquedaBinaria();

int main(){
	
	busquedaSecuencial();
	
	getch();
	return 0;
}

//busqueda secuencial
int busquedaSecuencial(){
	int numero[] = {14,11,15,13,12};
	int i=0, dato=15;
	bool band=false;
	
	while((band != true) && (i<5)){
		if(numero[i] == dato) band = true;
		i++;
	}
	if(band != false){
		cout<<"El numero ha sido encontrado";
	}
	else{
		cout<<"El numero no ha sido encontrado";
	}
}

//busqueda binaria
int busquedaBinaria(){
	int numero[] = {1,2,3,4,5};
	int inf=0, sup=5, mitad, dato=3;
	bool band = false;
	
	while(inf<= sup){
		mitad = (inf + sup)/2;
		if(numero[mitad]==dato){
			band = true;
			break;
		}
		if(numero[mitad]>dato){
			sup = mitad + 1;
		}
		else{
			inf = mitad -1;
		}
		cout<<"bucle: "<<mitad;
	}
	
	if(band != false){
		cout<<"El numero ha sido encontrado en la posesion: "<<mitad;
	}
	else{
		cout<<"El numero no ha sido encontrado";
	}
}

