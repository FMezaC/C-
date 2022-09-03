
#include<iostream>
using namespace std;

void Operaciones();
int MostraPrecio();
int IngresarDatosUsuario();

int main(){
	
	Operaciones();
	return 0;
}

/*1. escribe un proigrama quer lea de la entrada standar dos numeros y muestre
e la salida estandar su suma, resta, multiplicacion y divicion */
//Solucion 01
void Operaciones(){
	int numero01, numero02;
	cout<<"Ingrese dos numeros"<<endl;
	cout<<"Digite primer numero: ";
	cin>>numero01;
	cout<<"\nDigite segundo numero: ";
	cin>>numero02;
	int suma = numero01 + numero02;
	int resta = numero01 - numero02;
	int multiplica = numero01 * numero02;
	int divicion = numero01 / numero02;
	
	cout<<suma<<endl;
	cout<<resta<<endl;
	cout<<multiplica<<endl;
	cout<<divicion;
}

/*2. escribe un programa que lea de la entrada estandar el precio de un producto y muestre
en la salida estandar el precio del producto al aplicarle el IVA*/
//Solucion 02
int MostraPrecio(){
	double precio =0;
	cout<<"Ingrese precio:";
	cin>>precio;
	int iva = precio + (precio * 18) / 100;
	cout<<"precio producto es: "<<iva;
}

/*3. Realize un programa que lea la entrada standar los siguentes datoa
	de una persona:
		Edad: dato de tipo entero
		Sexo: dato de tipo caracter
		Altura: dato de tipo real
	Tras leer los datos, el programa debe mostrar en la salida estandar.*/
//Solucion 03
int IngresarDatosUsuario(){
	int edad =0;
	char genero[1] = "";
	double altura = 0.0;
	cout<<"---Ingrese los siguientes datos solicitados---"<<endl;
	cout<<"Ingrese su Edad: ";
	cin>>edad;
	cout<<"Ingrese su genero: ";
	cin>> genero;
	cout<<"Ingrese su altura: ";
	cin>>altura;
	cout<<"Su esdad es "<<edad<<", su genero es "<<genero<<" y su altura es "<<altura;
}

