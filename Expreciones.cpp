
#include<iostream>
#include<math.h>

using namespace std;

int Exprecion01();
int Exprecion02();
int Exprecion03();
int Exprecion04();
int IntercambioValores();
int PromedioAlumnos();
double MediPonderada();
int HallarHipotenusa();
int CalculaValor();
int CalculaEcuacion();

int main(){
	
	CalculaEcuacion();
	
	return 0;
}

//Ejercicio 1: Escriba la siguiente exprecion como exprecion en c++: 1).- a/b+1
//Solucion 01
int Exprecion01(){
	double a, b, result = 0;
	cout<<"Digite el valor de A: "; cin>>a;
	cout<<"Digite el valor de B: "; cin>>b;
	
	result = (a / b) + 1;
	cout.precision(2);
	cout<<"El resultado es: "<<result;
}


//Ejercicio 2: Escriba la siguient exprecion matematica como exprecion 
// de c++ 2).- (a+b)/(c+d)
//Solucion 02
int Exprecion02(){
	double a, b, c,d, result=0;
	cout<<"Digite el valor de A: "; cin>>a;
	cout<<"Digite el valor de B: "; cin>>b;
	cout<<"Digite el valor de C: "; cin>>c;
	cout<<"Digite el valor de D: "; cin>>d;
	
	result = (a + b)/(c + d);
	cout<<"El resultado es: "<<result;
}

//Ejercicio 3: Escriba la siguient exprecion matematica como exprecion
// de c++ 3).- (a + (b/c)) / (d (e / f))
//Solucion 03
int Exprecion03(){
	double a, b, c, d, e,f, result=0;
	cout<<"Digite el valor de A: "; cin>>a;
	cout<<"Digite el valor de B: "; cin>>b;
	cout<<"Digite el valor de C: "; cin>>c;
	cout<<"Digite el valor de D: "; cin>>d;
	cout<<"Digite el valor de E: "; cin>>e;
	cout<<"Digite el valor de F: "; cin>>f;
	
	result = (a + (b / c)) / (d + (e / f));
	cout<<"El resultado es: "<<result;
}

//Ejercicio 4: Escriba la siguient exprecion matematica como exprecion
// de c++ 4).- a + (b/(c-d))
//Solucion 04
int Exprecion04(){
	double a, b, c, d, result=0;
	cout<<"Digite el valor de A: "; cin>>a;
	cout<<"Digite el valor de B: "; cin>>b;
	cout<<"Digite el valor de C: "; cin>>c;
	cout<<"Digite el valor de D: "; cin>>d;
	
	result = a +(b / (c -d));
	cout<<"El resultado es: "<<result<<endl;
}

//Ejercicio 5: Escriba un fragmento de programa que intercambie los valores
// de las variables
//Solucion 05
int IntercambioValores(){
	int x, y, aux;
	cout<<"Digite el valor de X: "; cin>>x;
	cout<<"Digite el valor de Y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"El nuevo valor de y es: "<<y;
}

/*Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos
y calcule la nota final media de los cuatro alumons*/
//Solucion 06
int PromedioAlumnos(){
	double alum01, alum02, alum03, alum04, promedio=0;
	cout<<"Ingrese la nota del primer alumno: "; cin>>alum01;
	cout<<"Ingrese la nota del segundo alumno: "; cin>>alum02;
	cout<<"Ingrese la nota del tercer alumno: "; cin>>alum03;
	cout<<"Ingrese la nota del cuarto alumno: "; cin>>alum04;
	
	promedio = (alum01 + alum02 + alum03 + alum04) / 4;
	cout<<"La media de las notas es: "<<promedio<<endl;
}

/*Ejercicio 7: La calificación final de un estudiante es la media ponderada de 
tres notas: la nota de prácticas que cuenta un 30% del total, la nota teórica 
que cuenta un 60% y la nota de participación que cuenta el 10% restante. 
Escriba un programa que lea de la entrada estándar las tres notas de un alumno 
y escriba en la salida estándar su nota final.*/
//Solucion 07

double MediPonderada(){
	double practica, teorica, participacion, ponderado;
	cout<<"Digite la nota de practica "; cin>>practica;
	cout<<"Digite la nota teorica "; cin>>teorica;
	cout<<"Digite la bota de participacion "; cin>>participacion;
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	ponderado = practica + teorica + participacion;
	cout<<"La nota final es "<<ponderado;
}


/*Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos catetos 
de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/
//Solucion 08
int HallarHipotenusa(){
	int catetoAdiacente, catetoOpuesto, Hipotenusa;
	cout<<"Ingrese el cateto adiacente "; cin>>catetoAdiacente;
	cout<<"Ingrese el cateto opuesto "; cin>>catetoOpuesto;
	Hipotenusa = sqrt(pow(catetoAdiacente,2) + pow(catetoOpuesto,2));
	cout<<"La hipotenusa de tu triangulo es "<<Hipotenusa<<endl;
}

/*Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente 
función para unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/
//Solucion 09
int CalculaValor(){
	double x, y, result=0;
	cout<<"Ingrese valor de x "; cin>>x;
	cout<<"Ingrese valor de y "; cin>>y;
	result = sqrt(x)/(pow(y,2) - 1);
	cout<<"El resultado es: "<<result<<endl;
}

/*Ejercicio 10: Escriba un programa que calcule las soluciones de una 
ecuación de segundo grado de la forma ax^2 + bx + c = 0, teniendo en 
cuenta que: (-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)*/
//Solucion 10
int CalculaEcuacion(){
	float a, b, c, result1=0, result2=0;
	cout<<"Ingrese el valor de A: "; cin>>a;
	cout<<"Ingrese el valor de B: "; cin>>b;
	cout<<"Ingrese el valor de C: "; cin>>c;
	
	result1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	result2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<"\nEl primer resultado es: "<<result1<<endl;
	cout<<"El segundo resultado es: "<<result2;
}



