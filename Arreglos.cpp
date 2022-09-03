#include<iostream>
#include<conio.h>

using namespace std;

int vectorNumero();
int MultiplicaVector();
int IndiceAsociado();
int VectorInverso();
int mayorVector();
int EquivalenteSuma();
int UnirVector();
int MultiplicarArreglo();

int main(){
	
	MultiplicarArreglo();
	
	getch();
	return 0;
}

/*Ejercicio 1: Escribe un programa que defina un 
vector de números y calcule la suma de sus elementos.*/
int vectorNumero(){
	int numeros[] = {1,2,3,4,5};
	int suma=0;
	
	for(int i=0;i<5;i++){
		suma += numeros[i];
	}
	cout<<"La suma de los elementos del vector son: "<<suma<<endl;
}

/*Ejercicio 2: Escribe un programa que defina un vector de números 
y calcule la multiplicación acumulada de sus elementos.*/
int MultiplicaVector(){
	int numero[] = {2,4,6,8};
	int result=1; 
	for(int i=0;i<4;i++){
		result *= numero[i];
	}
	cout<<"La multiplicacion del vector es: "<<result<<endl;
}

/*Ejercicio 3: Escribe un programa que lea de la entrada estándar 
un vector de números y muestre en la salida estándar los números 
del vector con sus índices asociados.*/
int IndiceAsociado(){
	int n;
	cout<<"Digite numero de elementos del vector: ";
	cin>>n;
	int numero[n];
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>numero[i];
	}
	
	for(int j=0;j<n;j++){
		cout<<j<<" -> "<<numero[j]<<endl;
	}
}

/*Ejercicio 4: Escribe un programa que defina un vector de números 
y muestre en la salida estándar el vector en orden inverso—del 
último al primer elemento.*/
int VectorInverso(){
	int numero[] = {9,12,7,3,5};
	cout<<"---Vector invertido---"<<endl;
	cout<<"Vector = [";
	for(int i=4;i>=0;i--){
		cout<<numero[i]<<" ";
	}
	cout<<"]";
}

/*Ejercicio 5: Desarrolle un programa que lea de la entrada 
estándar un vector de enteros y determine el mayor 
elemento del vector.*/
int mayorVector(){
	int n, mayor=0;
	cout<<"Ingrese el numero de lementos: "; cin>>n;
	int numeros[n];
	for(int i=0;i<n;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i];
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	cout<<"El numero mayor es: "<<mayor;
}

/*Ejercicio 6: Escribe un programa que defina un vector de 
números y calcule si existe algún número en el vector cuyo 
valor equivale a la suma del resto de números del vector.*/
int EquivalenteSuma(){
	int vector[] = {3,1,6,2};
	int aux, n=4, it=4, numero=0;
	while(it>0){
		int suma=0;
		aux = vector[n-1];
		for(int i=n;i>0;i--){
			vector[i]=vector[i-1];
		}
		vector[0]=aux;
		
		for(int x=0;x<n;x++){
			if(x>0){
				suma +=vector[x];
			}
		}
		if(suma == vector[0]){
			numero = vector[0];
		}
		it--;
	}
	
	if(numero != 0){
		cout<<"El numero "<<numero<<" equivale la suma al resto del vector";
	}
	else{
		cout<<"No hay ningun numero que sea equivalente al resto del vector";
	}
}

/*Ejercicio 7: Realiza un programa que defina dos vectores de caracteres 
y después almacene el contenido de ambos vectores en un nuevo vector, 
situando en primer lugar los elementos del primer vector seguido por 
los elementos del segundo vector. Muestre el contenido del nuevo vector 
en la salida estándar.*/
int UnirVector(){
	char letras1[] = {'a','b','c','d','e'};
	char letras2[] = {'f','g','h','i','j'};
	char newVector[10];
	
	for(int i=0;i<5;i++){
		newVector[i] = letras1[i];
		newVector[i+5] = letras2[i];
	}
	
	for(int j=0;j<10;j++){
		cout<<newVector[j]<<" ";
	}
}


/*Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, 
los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.*/
int MultiplicarArreglo(){
	int arreglo[] = {5,8,3,9,4};
	int arrTemp[5];
	for(int i=0;i<5;i++){
		arrTemp[i] = arreglo[i] * 2;
	}
	
	for(int x=0;x<5;x++){
		cout<<arrTemp[x]<<" ";
	}
}

