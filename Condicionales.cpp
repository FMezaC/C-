//Sentecia de condicionales simples y multibles 
// if else and switch() case
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int CondicionalMultiple();
int DeterminarNumMayor();
int MayorAbsoluto();
int DeterminaPar();
int numeroPositivo();
int IdentificarMinuscula();
int IdentificarCaracter();
int RangoEdad();
int buscaSimilar();
int buscaMesIngresado();
int numeroRomanos();
int CajeroAutomatico();
int menuOpciones();

int main(){
	
	menuOpciones();
	
	getch();
	return 0;
}

int CondicionalMultiple(){
	int numero;
	
	cout<<"Ingrese numero de una mascota"; 
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"Mascota es gato"; break;
		case 2: cout<<"Mascota es perro"; break;
		case 3: cout<<"Mascota es igual a hamster"; break;
		default: cout<<"Mascota no se encuentra registado"; break;
	}
}

/* Ejercicio 1: Escriba un programa que lea dos números y 
determine cuál de ellos es el mayor.*/
//Solucion 01
int DeterminarNumMayor(){
	double num1, num2;
	cout<<"Ingrese dos numeros: "<<endl;
	cin>>num1>>num2;
	if(num1>num2){
		cout<<"El numero "<<num1<<" Es mayor que el numero "<<num2;
	}
	else if(num1 == num2){
		cout<<"Los numeros son iguales";
	}
	else{
		cout<<"El numero "<<num2<<" Es mayor que el numero "<<num1;
	}
}

/*Ejercicio 2: Escriba un programa que lea tres números y 
determine cuál de ellos es el mayor.*/
//Solucion 02

int MayorAbsoluto(){
	int a, b, c, mayor=0;
	cout<<"Ingrese tres numeros: "; 
	cin>>a>>b>>c;
	if(a>b || a==b){
		mayor=a;
		if(mayor<c)
			mayor = c;
	}
	else if(b>a){
		mayor=b;
		if(mayor<c)
			mayor=c;
	}
	cout<<"El numero mayor es: "<<mayor;
}

/*Ejercicio 3: Realice un programa que lea un valor entero y 
determine si se trata de un número par o impar.*/
//Solucion 03

int DeterminaPar(){
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	if(num%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
}

/*Ejercicio 4: Comprobar si un número digitado por el 
usuario es positivo o negativo.*/
int numeroPositivo(){
	int num;
	cout<<"Digite un numero: ";
	cin>>num;
	if(num!=0){
		if(num<0){
			cout<<"El numero es negativo";
		}
		else{
			cout<<"El numero es positivo";
		}
	}
	else{
		cout<<"El numero es cero";
	}
}

/*Ejercicio 5: Escriba un programa que lea de la entrada estándar 
un carácter e indique en la salida estándar si el carácter es una 
vocal minúscula o no.*/
int IdentificarMinuscula(){
	char caracter;
	cout<<"Digite un caracter: ";
	cin>>caracter;
	
	switch(caracter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula"; break;
		default: cout<<"No es una voval minuscula"; break;
	}
}


/*Ejercicio 6: Escriba un programa que lea de la entrada estándar 
un carácter e indique en la salida estándar si el carácter es una 
vocal minúscula, es una vocal mayúscula o no es una vocal.*/
int IdentificarCaracter(){
	char letra;
	cout<<"Digite un caracter: ";
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula"; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Es una vocal mayuscula"; break;
		default: cout<<"No es una voval"; break;
	}
}

/*Ejercicio 7: Escriba un programa que solicite una edad (un entero) e indique 
en la salida estándar si la edad introducida está en el rango [18-25].*/
int RangoEdad(){
	int edad;
	cout<<"Ingrese edad: ";
	cin>>edad;
	
	if(edad>=18 && edad<=25){
		cout<<"Su edad esta dentro del rango";
	}
	else{
		cout<<"Su edad no esta en el rango";
	}
}

/*Ejercicio 8: Escribe un programa que lea de la entrada estándar tres números. 
Después debe leer un cuarto número e indicar si el número coincide con alguno 
de los introducidos con anterioridad.*/
int buscaSimilar(){
	int list[3], num;
	string msj="Numero no coencide con ninguno";
	cout<<"Ingrese 3 numeros: "<<endl;
	for(int i=0;i<3;i++){
		cin>>list[i];
	}
	cout<<"Ingrese numero a buscar";
	cin>>num;
	for(int j=0;j<3;j++){
		if(num==list[j]){
			msj= "El numero buscado si existe";
		}
	}
	cout<<msj;
}

/*Ejercicio 9: Cambiar un número entero con el mismo valor pero en romanos.*/
int numeroRomanos(){
	int numero, unidad, decena, centena, millar;
	cout<<"Ingrese numero a convertir: ";
	cin>>numero;
	
	unidad = numero%10; numero /=10;
	decena = numero%10; numero/=10;
	centena = numero%10; numero/=10;
	millar = numero%10; numero/=10;
	
	switch(millar){
		case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM"; break;
	}
	
	switch(centena){
		case 1: cout<<"C"; break;
		case 2: cout<<"CC"; break;
		case 3: cout<<"CCC"; break;
		case 4: cout<<"CD"; break;
		case 5: cout<<"D"; break;
		case 6: cout<<"DC"; break;
		case 7: cout<<"DCC"; break;
		case 8: cout<<"DCCC"; break;
		case 9: cout<<"CM"; break;
	}
	
	switch(decena){
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXXX"; break;
		case 9: cout<<"XC"; break;
	}
	
	switch(unidad){
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IX"; break;
	}
}

/*Ejercicio 10: Mostrar los meses del año, pidiéndole al usuario un número 
entre (1-12), y mostrar el mes al que corresponde.*/
int buscaMesIngresado(){
	int mes;
	cout<<"Ingrese el mes en numero: ";
	cin>>mes;
	
	switch(mes){
		case 1: cout<<"Enero"; break;
		case 2: cout<<"Febrero"; break;
		case 3: cout<<"Marzo"; break;
		case 4: cout<<"Abril"; break;
		case 5: cout<<"Mayo"; break;
		case 6: cout<<"Junio"; break;
		case 7: cout<<"Julio"; break;
		case 8: cout<<"Agosto"; break;
		case 9: cout<<"Septiembre"; break;
		case 10: cout<<"Octubre"; break;
		case 11: cout<<"Noviembre"; break;
		case 12: cout<<"Diciembre"; break;
		default: cout<<"No es un mes valido";
	}
}

/*Ejercicio 11: Hacer un programa que simule un cajero automático 
con un saldo inicial de 1000 Dólares.*/
int CajeroAutomatico(){
	int pasw = 0, ingreso, retiro, opc;
	double saldo = 1000;
	
	cout<<"Ingrese contraseña: ";
	cin>>pasw;
	if(pasw==123){
		cout<<"1. Ingresar dinera a cuenta"<<endl;
		cout<<"2. Retirar dinero de cuenta"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Ingresa a la opcion: "; 
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Ingrese monto a ingresar: "; cin>>ingreso;
				saldo+=ingreso;
				cout<<"Nuevo saldo "<<saldo;
				break;
			case 2:
				cout<<"Ingrese monto a retirar: "; cin>>retiro;
				if(retiro <=saldo){
					saldo -=retiro;
					cout<<"Nuevo saldo es "<<saldo;
				}
				else{
					cout<<"Saldo insuficiente";
				}
				break;
			case 3: break;
		}
	}
	else{
		cout<<"Contraseña incorrecta";
	}
}

/*Ejercicio 12: Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.*/
  
int menuOpciones(){
	int opc, numero;
	double result;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opc;
	switch(opc){
		case 1: 
			cout<<"\nIngrese un numero: "; cin>>numero;
			result = pow(numero, 3);
			cout<<"El cubo del numero "<<numero<<" es "<<result;
			break;
		case 2:
			cout<<"\Ingrese un numero: "; cin>>numero;
			if(numero%2==0){
				cout<<"Numero es par";
			}
			else{
				cout<<"Numero es impar";
			}
			break;
		case 3: break;
	}
}
  

