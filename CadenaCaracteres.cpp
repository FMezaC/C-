#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int tipoEntrada();
int cadenaStrlen();
int VerificarLongitud();
int copearCadena();
int comparaCadenas();
int MayorAlfabeticamente();
int ConcatenarCadena();
int Saludo();
int InvertirCadena();
int polindroma();
int Mayusculas();
int Minusculas();
int PrimeraLetra();
int CadenaEnteros();
int ContarVocal();

int main(){
	
	ContarVocal();
	
	getch();
	return 0;
}

int tipoEntrada(){
	char palabra[] = "Federico";
	char deletreado[] = {'f','e','d','e','r','i','c','o'};
	char nombre[20];
	
	//gets(varible)
	cin.getline(nombre, 20, '\n');
}

//longitud de un cadena de caracteres - funcion strlen()
int cadenaStrlen(){
	char palabra[] = "Hola mundo";
	int longitud = 0;
	longitud = strlen(palabra);
	cout<<"El numero de elementos de la cadena es: "<<longitud;
}

/* Hacer un programa que pida al usuario que digite una cadena
de caracteres, luego verificar la longitud de la cadena,
y si esta supera a 10 caracteres mostrarla en la
pantalla, caso contrario no mostrarla.*/
int VerificarLongitud(){
	char palabra[15];
	cout<<"Ingrese una palabra: "; gets(palabra);
	int longitud=0;
	longitud = strlen(palabra);
	if(longitud > 10){
		cout<<palabra<<endl;
	}
}

/* copear el contenido del valor de una variable*/
int copearCadena(){
	char nombre[] = "Federico";
	char copia[20];
	strcpy(copia,nombre);
	cout<<copia<<endl;
}

//comparar cadenas - funcion strcmp()
int comparaCadenas(){
	char palabra[] = "Avion";
	char palabra1[] = "Becerro";
	
	/* != distinto
	** == igual
	** > mayor alfabeticamente
	** < menor alfabeticamente
	** 0 es false y el 1 es true
	*/
	
	if(strcmp(palabra,palabra1)!=0){
		cout<<"Las cadenas son diferentes";
	}
}

/*Pedir al usuario que digite dos cadenas de caracteres,
e indicar si ambas cadenas son iguales, en caso de no
serlo, indicar cual es mayor alfabeticamente.*/
int MayorAlfabeticamente(){
	char cadena[20], cadena2[20];
	cout<<"Ingrese el primer texto: ";
	gets(cadena);
	cout<<"Ingrese el segundo texto: ";
	gets(cadena2);
	
	if(strcmp(cadena,cadena2)==0){
		cout<<"Ambas cadenas son iguales";
	}
	else{
		if(strcmp(cadena,cadena2) >0){
			cout<<"El texto '"<<cadena<<"' es mayor alfabeticamente";
		}
		else{
			cout<<"El texto '"<<cadena2<<"' es mayor alfabeticamente";
		}
	}
}

//Añadir o concatenar una cadena con otra - funcion strcat()
int ConcatenarCadena(){
	char cade1[] = "Esto es una cadena";
	char cade2[] = "de ejemplo";
	char cade3[30];
	strcat(cade1, cade2);
}

/* Crea una cadena que tenga la siguiente frase
'Hola quetal', luego cree otra cadena para preguntarle 
al usuario su nombre, luego añadir el nombre al final de la
primera cadena y mostrar el mensaje completo*/
int Saludo(){
	char saludo[] = "Hola que tal ";
	char nombre[30];
	cout<<"Ingrese su nombre: ";
	cin.getline(nombre, 30,'\n');
	cout<<strcat(saludo,nombre);
}

//Invertir una cadena - funcion strrev()
int InvertirCadena(){
	char cadena[] = "Federico";
	strrev(cadena);
	cout<<cadena<<endl;
}

/*Hacer un programa que determine si una
palabra es polindroma o no*/
int polindroma(){
	char cadena[] = "reconocer";
	char reversa[20];
	strcpy(cadena,reversa);
	strrev(reversa);
	if(strcmp(cadena,reversa)==0){
		cout<<"La palabra "<<cadena<<" es polindroma";
	}
	else{
		cout<<"La cadena no es polindroma";
	}
}

//Pasa una palabra a MAYUSCULAS - funcion strupr()
int Mayusculas(){
	char cadena[] = "programador";
	strupr(cadena);
	cout<<cadena<<endl;
}

//Pasar una palabra a minuscula - funcion strlwr()
int Minusculas(){
	char cadena[] = "PROGRAMADOR";
	strlwr(cadena);
	cout<<cadena<<endl;
}

/*Ingrese nombre de usuario en mayuscula, si
su nombre comienza por la letra a, convertir su
nombre a minuscula, caso contrario invertir.*/
int PrimeraLetra(){
	char cadena[] = "AEROPUERTO";
	if(strncmp(cadena,"A",1)==0){
		cout<<strlwr(cadena)<<endl;
	}
	else{
		cout<<strrev(cadena)<<endl;
	}
}

//Transformar una cadena a numeros - funcion atoi, atof
int CadenaEnteros(){
	char cadena[] = "1234";
	int numero;
	char decimal[] = "123.456";
	float flotante;
	numero = atoi(cadena);
	flotante = atof(decimal);
	cout<<numero<<endl;
	cout<<flotante<<endl;
}

/*Realice un programa que lea una cadena de caracteres de 
la entrada estándar y muestre en la salida estándar cuántas 
ocurrencias de cada vocal existen en la cadena.*/
int ContarVocal(){
	char frase[] = "Tu actitud, no tu aptitud, determinara tu altitud";
	int v_a=0, v_e=0, v_i=0, v_o=0, v_u=0;
	
	for(int i=0;i<strlen(frase);i++){
		switch(frase[i]){
			case 'a': v_a++; break;
			case 'e': v_e++; break;
			case 'i': v_i++; break;
			case 'o': v_o++; break;
			case 'u': v_u++; break;
			default: break;
		}
	}
	
	cout<<"Vocal a: "<<v_a<<endl;
	cout<<"Vocal e: "<<v_e<<endl;
	cout<<"Vocal i: "<<v_i<<endl;
	cout<<"Vocal o: "<<v_o<<endl;
	cout<<"Vocal u: "<<v_u<<endl;
}

