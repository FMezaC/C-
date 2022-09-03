#include<iostream>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

int bucleWhile();
int bucledoWile();
int bucleFor();
int TablaMultiplicar();
int LecturaNumeros();
int SumaEnteros();
int TemperaturaAmbiental();
int SumaValoresIntroducidos();
long potenciaXY();
int sumaValores();
long SumarNnumeros();
int hallarFactorial();
long SumaFactorial();
int SumarElevacion();
int SumRestParImpar();
int sumaFibonacci();
int AlumnosAprobados();
int AdivinarNumero();
int descomposicionFactores();

int main(){
	
	descomposicionFactores();
	
	getch();
	return 0;
}

int bucleWhile(){
	//primero piensa luego actua
	int i=10, j=0;
	while(i>=0){
		cout<<i<<endl;
		i--;
	}
	
	while(j<=10){
		cout<<j<<endl;
		j++;
	}
}

int bucledoWile(){
	// primero actua y luego piensa
	int i=0;
	do{
		cout<<i<<endl;
		i++;
	}while(i<=10);
}

int bucleFor(){
	
	for(int i; i<=10; i++){
		cout<<i<<endl;
	}
}


/*Ejercicio 1: Realice un programa que solicite de la entrada 
estándar un entero del 1 al 10 y muestre en la salida estándar 
su tabla de multiplicar.*/
int TablaMultiplicar(){
	int numero;
	do{
		cout<<"Digite un numero: "; cin>>numero;
	}while(numero<1 || numero>10);
	
	for(int i=1; i<=12; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
}

/*Ejercicio 2: Realice un programa que lea de la entrada estándar 
números hasta que se introduzca un cero. En ese momento el programa 
debe terminar y mostrar en la salida estándar el número de valores 
mayores que cero leídos.*/
int LecturaNumeros(){
	int numero, contador;
	
	do{
		cout<<"Ingrese un numero: ";
		cin>>numero;
		if(numero>0){
			contador++;
		}
	}while(numero!=0);
	cout<<"Total de numeros mayor que cero es: "<<contador;
}

/*Ejercicios 3: Realice un programa que calcule y muestre en la salida 
estándar la suma de los cuadrados de los 10 primeros 
enteros mayores que cero.*/
int SumaEnteros(){
	int suma=0;
	for(int i=1;i<=10;i++){
		suma +=pow(i,2);
	}
	cout<<"La suma de los cudrados es: "<<suma<<endl;
}

/*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura 
exterior, leyéndola durante un período de 24 horas. Es decir, 
debe leer 6 temperaturas. Calcule la temperatura media del día, 
la temperatura más alta y la más baja.*/
int TemperaturaAmbiental(){
	float temp[6], total, media, baja=0, alta=0;
	cout<<"Ingrese las temperaturas ambientales: "<<endl;
	for(int i=0;i<6;i++){
		cin>>temp[i];
		total += temp[i];
		
		if(alta<temp[i]){
			alta = temp[i];
		}
		if(baja!=0){
			if(baja>temp[i])
				baja=temp[i];
		}
		else{
			baja =temp[i];
		}
	}
	
	media = total / 6;
	cout<<"Media de temperatura es: "<<media<<endl;
	cout<<"Temperatura mas baja es: "<<baja<<endl;
	cout<<"Temperatura mas alta es: "<<alta<<endl;
}

/*Ejercicio 5: Escriba un programa que lea valores 
enteros hasta que se introduzca un valor en el rango 
[20-30] o se introduzca el valor 0. El programa 
debe entregar la suma de los valores mayores 
a 0 introducidos.*/
int SumaValoresIntroducidos(){
	int suma, numero;
	do{
		cout<<"Ingrese un numero: ";
		cin>>numero;
		if(numero>0){
			suma+=numero;
		}
	}while((numero<20 || numero>30) && (numero !=0));
	cout<<"La suma de los numeros ingresados es: "<<suma;
}

/*Ejercicio 6: Escriba un programa que calcule x^y, 
donde tanto x como y son enteros positivos, sin 
utilizar la función pow.*/
long potenciaXY(){
	long x, y, potencia=1;
	cout<<"Ingrese el valor de x: "; cin>>x;
	cout<<"\nIngrese el valor de y: "; cin>>y;
	while(y>0){
		potencia *= x;
		y--;
	}
	cout<<"La potencia de "<<x<<"^"<<y<<" es igual a: "<<potencia;
}

/*Ejercicio 7: Escriba un programa que calcule 
el valor de: 1+2+3+...+n */
int sumaValores(){
	int n, suma=0;
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		suma+=i;
	}
	cout<<"La suma total es: "<<suma;
}

/*Ejercicio 8: Escriba un programa que calcule 
el valor de: 1+3+5+...+2n-1*/
long SumarNnumeros(){
	long n, suma=0;
	cout<<"Digite el numero de elementos a sumar: ";
	cin>>n;
	for(int i=1;i<=2*n-1;i++){
		suma +=i;
	}
	cout<<"La suma de los elementos es: "<<suma<<endl;
}

/*Ejercicio 9: Escriba un programa que calcule
 el valor de: 1*2*3*...*n (factorial)*/
 int hallarFactorial(){
 	int n, factorial = 1;
 	cout<<"Digite un numero: ";
 	cin>>n;
 	for(int i=1;i<=n;i++){
 		factorial *=i;
	 }
	 cout<<"El factorial del numero es: "<<factorial;
 }

/*Ejercicio 10: Escriba un programa que calcule 
el valor de: 1!+2!+3!+...+n! (suma de factoriales).*/
long SumaFactorial(){
	long suma, n;
	cout<<"Digite un numero: ";
	cin>>n;
	while(n>0){
		long factorial=1;
		for(int i=1;i<=n;i++){
			factorial*=i;
		}
		suma+=factorial;
		n--;
	}
	cout<<"La suma de factorial es: "<<suma<<endl;
}

/*Ejercicio 11: Escriba un programa que calcule el 
valor de: 2^1+2^2+2^3+...+2^n   */
int SumarElevacion(){
	int sumar=0, exponente=0, n;
	cout<<"Digite el numero de elementos a sumar: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		exponente=pow(2,i);
		sumar += exponente;
	}
	cout<<"Numero de suma total es: "<<sumar;
}

/*Ejercicio 12: Hacer un programa que calcule el resultado 
de la siguiente expresion: 1-2+3-4+5-6...n    */
int SumRestParImpar(){
	int n, suma=0, par=0, impar=0, negativo=0;
	cout<<"Digite el numero de elementos a sumar: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			negativo = i * -1;
			par += negativo;
		}
		else{
			impar += i;
		}
	}
	suma = par + impar;
	cout<<"La suma de los elementos es: "<<suma<<endl;
}

/*Ejercicio 13: Hacer un que realice la serie 
fibonacci -- 1 1 2 3 5 8 13...n    */
int sumaFibonacci(){
	int n, x=1, y=0, z=1;
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	do{
		cout<<z<<" ";
		z = x+y;
		y = x;
		x = z;
		n--;
	}while(n>0);
}

/*Ejercicio 14: En una clase de 5 alumnos se han realizado 
tres exámenes y se requiere determinar el número de: 
 a) Alumnos que aprobaron todos los exámenes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron únicamente el último examen.*/
 int AlumnosAprobados(){
 	float nota1=0, nota2=0, nota3=0, apTodos=0, apUno=0, apFinal=0;
 	cout<<"-----Bienvenidos al aula vitual-----"<<endl;
 	for(int i=0;i<5;i++){
 		cout<<"Alumno numero: 0"<<i+1<<endl;
 		cout<<"Ingrese la primera nota: "; cin>>nota1;
 		cout<<"Ingrese la segunda nota: "; cin>>nota2;
 		cout<<"Ingrese la tercera nota: "; cin>>nota3;
 		
 		if((nota1>10.5)&&(nota2>10.5)&&(nota3>10.5)){
 			apTodos++;
		 }
		 
		 if((nota1>10.5)||(nota2>10.5)||(nota3>10.5)){
		 	apUno++;
		 }
		 
		 if(nota3>10.5){
		 	apFinal++;
		 }
	 }
	 cout<<"\nAprobado todos los examenes: "<<apTodos;
	 cout<<"\nAprobado al menos un exmane: "<<apUno;
	 cout<<"\nAprobado solo el ultimo: "<<apFinal;
 }
 
 /*Ejercicio 15: Realice un programa que solicite al usuario que 
 piense un número entero entre el 1 y el 100. El programa debe 
 generar un numero aleatorio en ese mismo rango[1-100],e indicarle 
 al usuario si el numero que dígito es menor o mayor al numero 
 aleatorio, así hasta que lo adivine. y por ultimo mostrarle el 
 numero de intentos que le llevo.*/
 int AdivinarNumero(){
 	int numero, aleatorio, contador=0;
 	
 	srand(time(NULL)); //aleatorio
 	aleatorio = 1 + rand()%(100);
 	
 	do{
 		cout<<"Digite un numero: "; cin>>numero;
 		if(numero>aleatorio){
 			cout<<"Digite un numero menor: "<<endl;
		 }
		 else if(numero<aleatorio){
		 	cout<<"Digite un numero mayor: "<<endl;
		 }
		 contador++;
	 }while(numero != aleatorio);
	 cout<<"Numero de intentos: "<<contador<<endl;
 }

/*Ejercicio 16: Realice un programa que calcule la descomposición 
en factores primos de un número entero.
Por ejemplo: 20 = 2*2*5. */
int descomposicionFactores(){
	int n, f=2;
	cout<<"Ingrese un numero: "; cin>>n;
	while(n>1){
		if(n%f==0){
			cout<<f<<endl;
			n=n/f;
		}
		else
			f++;
	}
}


