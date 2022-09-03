#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

//Estructura basicas en c++;
struct Persona{
	char nombre[20];
	int edad;
}persona;

//estructuras anidadas
struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[30];
	struct 	info_direccion dir_empleado;
	float salario;
}empleados[2];

//solucion 01
struct corredor{
	char nombre[30];
	int edad;
	char genero[10];
	char club[50];
}c1;

//metodos
int estructuraSimple();
int estructuraAnidada();
int CategoriaCorredor();

//metodo principal
int main(){
	
	CategoriaCorredor();
	
	getch();
	return 0;
}


int estructuraSimple(){
	//estructura simple
	cout<<"Digite nombre: ";
	cin.getline(persona.nombre,20,'\n');
	cout<<"nombre: "<<persona.nombre;
}

int estructuraAnidada(){
	//estructuras anidadas
	for(int i=0;i<2;i++){
		fflush(stdin);//vaciar el buffer
		cout<<"Digite su nombre: ";
		cin.getline(empleados[i].nombre, 30,'\n');
		cout<<"Direccion su nombre: ";
		cin.getline(empleados[i].dir_empleado.direccion, 20,'\n');
		cout<<"Digite su salario: ";
		cin>>empleados[i].salario;
		cout<<endl;
	}
}

/*Ejercicio 1: Hacer una estructura llamada corredor, en la cual se tendrán 
los siguientes campos: Nombre, edad, sexo, club, pedir datos al usuario 
para un corredor, y asignarle una categoría de competición:
- Juvenil menor o = 18 años
- Señor menor o = 40 años
- Veterano mayor a 40 años
Posteriormente imprimir todos los datos del corredor, 
incluida su categoría de competición.*/
int CategoriaCorredor(){
	char categoria[20];
	cout<<"Nombre: ";
	cin.getline(c1.nombre,30,'\n');
	cout<<"edad: ";
	cin>>c1.edad;
	fflush(stdin);
	cout<<"Sexo: ";
	cin.getline(c1.genero,10,'\n');
	cout<<"Club: ";
	cin.getline(c1.club,50,'\n');
	if(c1.edad<=18){
		strcpy(categoria, "Juvenil");
	}
	else if(c1.edad<=40){
		strcpy(categoria, "Senior");
	}
	else{
		strcpy(categoria, "Veterano");
	}
	
	//imprimire solo la categoria;
	cout<<"Categoria: "<<categoria<<endl;
}

/*Ejercicio 2: Realizar un programa que lea un arreglo de estructuras 
los datos de N empleados de la empresa y que imprima los datos del 
empleado con mayor y menor salario.*/
//Usar paso de paramretro de tipo estructura


