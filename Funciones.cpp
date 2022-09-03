#include<iostream>
#include<conio.h>

using namespace std;

//plantillas de funcion
template <class tipoD>
void mostrarAbs(tipoD numero);

int pasoPorMemoria(int&);
int CuadradoVector(int vector[], int);
int factorialRecursiva(int);

int main(){
	
	//usando las plantillas
	int num1 = 4;
	float num2 = 56.67;
	double num3 = -1.23;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	//pasando valor por memoria
	pasoPorMemoria(num1);
	cout<<"El nuevo valor del entero es: "<<num1<<endl;
	
	//funcion con parametro de tipo vector
	int vect [] = {1,2,3,4,5};
	const int tam = 5;
	CuadradoVector(vect, tam);
	cout<<endl;
	
	//recursividad
	int fact = 3;
	cout<<"El factorial es: "<<factorialRecursiva(fact);
	
	getch();
	return 0;
}

template <class tipoD>
void mostrarAbs(tipoD numero){
	
	if(numero<0){
		numero *= -1;
	}
	
	cout<<"El valor absoluto del valor es: "<<numero<<endl;
}

int pasoPorMemoria(int& num){
	cout<<"El numero es: "<<num<<endl;
	num=85;
}

int CuadradoVector(int vector[], int tam){
	for(int i=0; i<tam; i++){
		vector[i] *= vector[i];
	}
	
	cout<<"Arr^2 => [";
	for(int x=0;x<tam;x++){
		cout<<vector[x]<<" ";
	}
	cout<<"]";
}

/*Realiza una función que tome como parámetros
 un vector de enteros y su tamaño e imprima un vector con los 
 elementos impares del vector recibido.*/
 
 //Recursividad
 int factorialRecursiva(int n){
 	if(n==0){
 		n=1;
	 }
	 else{
	 	n = n * factorialRecursiva(n-1);
	 }
	 return n;
 }
 
