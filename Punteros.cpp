#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

//varibles
int numCalif, *calif;
int *elemento, *vector;

// varible de tipo puntero de punteros
int **puntero_matriz;

//structura
struct persona{
	char nombre[50];
	int edad;
}persona, *puntero_persona = &persona;

struct alumno{
	char nombre[50];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

//estructura anidadas
struct ciclista{
	char nombre[50];
}ciclista, *puntero_ciclista = &ciclista;

struct TiempoEtapa{
	struct ciclista;
	int hora;
	int minuto;
	int segundo;
}etapa[3], *puntero_etapa = etapa;

//metodos, protopipos de funcion
int declarandoPuntero();
int parImpar();
int numeroPrimo();
void correspondeciaArrayPuntero();
int ArrayPares();
int MenorElemento();
void deleteNewBytes();
void intercambio(float *, float *);
void MaximoElemento();
int ArregloDinamicoOrdenamiento();
int ArregloDinamicoBusqueda();
int ContarVocalesNombre();
int ContarVocalesTexto();
int PunteroMatriz();
int SumaMatrices();
int MatrizTranspuestaPuntero();
void PedirDatos();
void MejorPromedio();

// puntero de structuras anidadas
void pedirDatosCiclista();
void calcularTiempo(TiempoEtapa *);

int main(){
	
	pedirDatosCiclista();
	calcularTiempo(puntero_etapa);
	
	getch();
	return 0;
}

// declaracion de punteros
int declarandoPuntero(){
	int num=20;
	int *dir_num;
	
	dir_num = &num;
	
	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"Direccion de memoria: "<<dir_num<<endl;
	
}

/*Ejercicio 1: Comprobar si un número es par o impar, 
y señalar la posición de memoria donde se está guardando 
el número. Con punteros.*/
int parImpar(){
	int numero, *dir_num;
	cout<<"Digite un numero: "; cin>>numero;
	dir_num = &numero;
	if(*dir_num%2==0)
		cout<<"El numero "<<*dir_num<<" es par"<<endl;
	else
		cout<<"El numero "<<*dir_num<<" es impar"<<endl;
	
	cout<<"Direccion de memoria es: "<<dir_num;
}


/*Ejercicio 2: Determinar si un número es primo o no; con 
puteros y además indicar en que posición de memoria se guardo el número.*/
int numeroPrimo(){
	int numero, *dir_numero,i, div=0;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	dir_numero = &numero;
	i = numero;
	do{
		if(*dir_numero%i==0){
			div++;
		}
		i--;
	}while(i>0);
	
	(div==2) ? cout<<"Es primo"<<endl : cout<<"No es primo"<<endl;
	cout<<"Direccion de memoria: "<<dir_numero;
}

//corespondencia entre arrays y punteros
void correspondeciaArrayPuntero(){
	int numero[] = {1,2,3,4,5};
	int *dir_numeros;
	
	dir_numeros = numero;
	for(int i;i<5;i++){
		cout<<"Posecion ["<<i<<"]: "<<*dir_numeros++
		<<" Direccion memoria: "<<dir_numeros++<<endl;
	}
}

/*Ejercicio 3: Rellenar un array de 10 números, posteriormente 
utilizando punteros indicar cuales son números 
pares y su posición en memoria. */
int ArrayPares(){
	int numero[10], *dir_numero;
	for(int i=0;i<10;i++){
		cout<<"Digite un numero: ";
		cin>>numero[i];
	}
	
	dir_numero = numero;
	
	for(int k=0;k<10;k++){
		if(*dir_numero%2==0){
			cout<<"Numero "<<*dir_numero<<" es par"<<endl;
			cout<<"Direccion de memoria: "<<dir_numero<<endl;
		}
		dir_numero++;
	}
}

/*Ejercicio 4: Rellenar un arreglo con n números, 
posteriormente utilizando punteros determinar el 
menor elemento del vector.*/
int MenorElemento(){
	int n, menor=0, *dir_vector;
	cout<<"Ingrese el tamaño de vector: "; cin>>n;
	int vector[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese numer: "; cin>>vector[i];
	}
	menor = vector[0];
	dir_vector = vector;
	for(int k=0;k<n;k++){
		(menor>*dir_vector) ? menor = *dir_vector : menor;
		dir_vector++;
	}
	cout<<"El numero menor es: "<<menor<<endl;
}

/*Asignacion dinamica de arreglos
new => reserva el numero de bytes solicitados
delete => libera el bloque de bytes solicitados anteriormente
ejemplo: pedir al suaurio N calificaciones y almacenarlos
en un arreglo dinamico */
void deleteNewBytes(){
	cout<<"Digite el numero de notas: ";
	cin>>numCalif;
	
	calif = new int[numCalif];
	for(int i=0;i<numCalif;i++){
		cout<<"Ingrese la nota["<<i+1<<"]: ";
		cin>>calif[i];
	}
	
	cout<<"\n---Mostrando las notas del usuario---"<<endl;
	for(int i=0; i<numCalif;i++){
		cout<<*calif<<endl;
		calif++;
	}
	delete[] calif;
}

//Transmicion de direcciones
//ejemplo: Intercambiar el valor de 2 variables.
void intercambio(float *num_uno, float *num_dos){
	float aux;
	aux = *num_uno;
	
	cout<<"Primer valor: "<<*num_uno<<endl;
	cout<<"Segundo valor: "<<*num_dos<<endl;
	
	*num_uno = *num_dos;
	*num_dos = aux;
	
	cout<<"El nuevo valor Primer numero: "<<*num_uno<<endl;
	cout<<"El nuevo valor segundo numero: "<<*num_dos<<endl;
}

//Hallar el maximo elemento de un arreglo.
void MaximoElemento(){
	const int nElements = 5;
	int numero[nElements] = {3,5,2,8,1};
	int max = 0, *dirVector;
	dirVector = numero;
	
	for(int i=0;i<nElements;i++){
		if(*(dirVector+i)>max){
			max = *(dirVector+i);
		}
	}
	
	cout<<"El mayor elemento del vector es: "<<max;
}

/*Ejercicio 5: Pedir al usuario N números, almacenarlos en un 
arreglo dinámico posteriormente ordenar los números en orden 
ascendente y mostrarlos en pantalla. 
NOTA: Utilizar cualquier método de ordenamiento. */
int ArregloDinamicoOrdenamiento(){
	int t, pos, aux=0;
	cout<<"Digite un numero: "; cin>>t;
	
	elemento = new int[t];
	for(int i=0;i<t;i++){
		cout<<"Ingrese un numero: ";
		cin>>*(elemento+i);
	}
	
	for(int j=0;j<t;j++){
		pos=j;
		for(int i=j+1;i<t;i++){
			if(*(elemento+i)<*(elemento+pos)) pos=i;
		}
		aux = *(elemento+j);
		*(elemento+j) = *(elemento+pos);
		*(elemento+pos) = aux;
	}
	
	for(int k=0;k<t;k++){
		cout<<*elemento<<endl;
		elemento++;
	}
	
	delete(elemento);
}

/*Ejercicio 6: Hacer una función para almacenar N números en un 
arreglo dinámico, posteriormente en otra función buscar
un número en particular. 
NOTA: Puedes utilizar cualquier método de
búsqueda(Secuencial o Binaria)*/
int ArregloDinamicoBusqueda(){
	int t, busqueda, pos=0;
	bool band = false;
	cout<<"Ingrese tamaño de arreglo: "; cin>>t;
	vector = new int[t];
	for(int i=0; i<t;i++){
		cout<<"Numero ["<<i<<"]: "; cin>>*(vector+i);
	}
	
	cout<<"Ingrese numero a buscar: "; cin>>busqueda;
	
	while((pos<t)&&(band != true)){
		if(vector[pos] == busqueda) band=true;
		pos++;
	}
	
	(band != false) ? cout<<"Numero encontrado" : cout<<"Numero no encontrado";
	
}

/*
Ejercicio 7: Pedir su nombre al usuario y devolver el 
número de vocales que hay. 
NOTA: Recuerda que debes utilizar punteros.*/
int ContarVocalesNombre(){
	char nombre[30], *caracteres;
	int vocales=0;
	cout<<"Digite su nombre: ";
	cin.getline(nombre,30,'\n');
	strupr(nombre);
	//nombre en nulo es '\0'
	caracteres = nombre;
	while(*caracteres){
		switch(*caracteres){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': vocales++;
		}
		caracteres++;
	}
	cout<<"Numero de vocales: "<<vocales;
}

/*Ejercicio 8: Pedir una cadena de caracteres (string) 
al usuario, e indicar cuantas veces aparece la vocal 
a,e,i,o,u; en la cadena de caracteres.
NOTA: Usar punteros.*/
int ContarVocalesTexto(){
	char texto[100], *cadena;
	int a=0,e=0,i=0,o=0,u=0;
	cout<<"Ingrese un texto: ";
	cin.getline(texto,100,'\n');
	strupr(texto);
	cadena = texto;
	while(*cadena){
		switch(*cadena){
			case 'A': a++; break;
			case 'E': e++; break;
			case 'I': i++; break;
			case 'O': o++; break;
			case 'U': u++; break;
		}
		cadena++;
	}
	
	cout<<"Total A: "<<a<<endl;
	cout<<"Total E: "<<e<<endl;
	cout<<"Total I: "<<i<<endl;
	cout<<"Total O: "<<o<<endl;
	cout<<"Total U: "<<u<<endl;
}

/*Matrices dinamicas
ejemplo: Rellenas una matriz de NxM y mostrar
su contenido
	**puntero_matriz -> *puntero_fila -> [int][int][int]
						*puntero_fila -> [int][int][int]
						*puntero_fila -> [int][int][int]
*/
int PunteroMatriz(){
	int nFilas, nColumnas;
	cout<<"Digite numero de filas: ";
	cin>>nFilas;
	cout<<"Digite numero de columnas: ";
	cin>>nColumnas;
	puntero_matriz = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz[i] = new int[nColumnas];
		for(int j=0;j<nColumnas;j++){
			cout<<"Ingrese numero: ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}
	
	for(int k=0;k<nFilas;k++){
		for(int x=0;x<nColumnas;x++){
			cout<<*(*(puntero_matriz+k)+x)<<" ";
		}
		cout<<endl;
	}
	
	delete(puntero_matriz);
}

/*Ejercicio 9: Realice un programa que calcule 
la suma de dos matrices dinámicas.*/
int SumaMatrices(){
	int **puntero_matriz1, **puntero_matriz2,
	nFilas, nColumnas;
	cout<<"Digite numero filas: "; cin>>nFilas;
	cout<<"Digite numero columnas: "; cin>>nColumnas;
	
	puntero_matriz1 = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz1[i] = new int[nColumnas];
		for(int j=0;j<nColumnas;j++){
			cout<<"Digite un numero: ";
			cin>>*(*(puntero_matriz1+i)+j);
		}
	}
	
	cout<<"---Segunda matriz---"<<endl;
	puntero_matriz2 = new int*[nFilas];
	for(int k=0;k<nFilas;k++){
		puntero_matriz2[k] = new int[nColumnas];
		for(int x=0;x<nFilas;x++){
			cout<<"Digite un numero: ";
			cin>>*(*(puntero_matriz2+k)+x);
		}
	}
	
	//suma de matrices
	for(int it=0;it<nFilas;it++){
		for(int j=0;j<nColumnas;j++){
			*(*(puntero_matriz1+it)+j) += *(*(puntero_matriz2+it)+j);
		}
	}
	
	//impimir valores
	for(int im=0;im<nFilas;im++){
		for(int jp=0;jp<nColumnas;jp++){
			cout<<*(*(puntero_matriz1+im)+jp)<<" ";
		}
		cout<<endl;
	}
	
	//elimina memoria reservada
	delete(puntero_matriz1);
	delete(puntero_matriz2);
}

/*Ejercicio 10: Realice un programa que lea una 
matriz dinámica de NxM y cree su matriz traspuesta. 
Nota: La matriz traspuesta es aquella en la que la 
columna i era la fila i de la matriz original. */
int MatrizTranspuestaPuntero(){
	int **matriz_transpuesta, **matriz, nFilas, nColumnas;
	cout<<"Digite numero filas: "; cin>>nFilas;
	cout<<"Digite numero columnas: "; cin>>nColumnas;
	matriz = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		matriz[i] = new int[nColumnas];
		for(int j=0;j<nColumnas;j++){
			cout<<"Digite un numero: "; cin>>*(*(matriz+i)+j);
		}
	}
	
	//transpuesta
	cout<<"---Matriz Transpuesta---"<<endl;
	matriz_transpuesta = new int*[nFilas];
	for(int it=0;it<nFilas;it++){
		matriz_transpuesta[it] = new int[nColumnas];
		for(int jk=0;jk<nColumnas;jk++){
			*(*(matriz_transpuesta+it)+jk) = *(*(matriz+jk)+it);
			cout<<*(*(matriz_transpuesta+it)+jk)<<" ";
		}
		cout<<endl;
	}
}

//Punteros a structura
void PedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(puntero_persona->nombre, 50, '\n');
	cout<<"Digite su edad: ";
	cin>>puntero_persona->edad;
	
	//mostrar
	cout<<"Su nombre es: "<<puntero_persona->nombre<<endl;
	cout<<"Su edad es: "<<puntero_persona->edad<<endl;
}


/*Ejercicio 11: Hacer una estructura llamada alumno, 
en la cual se tendrán los siguientes Campos: Nombre, 
edad, promedio, pedir datos al usuario para 3 alumnos, 
comprobar cuál de los 3 tiene el mejor promedio y posteriormente 
imprimir los datos del alumno.
NOTA: Usar punteros a estructura*/
void MejorPromedio(){
	float maxProm=0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		cout<<"Digite nombre del alumno "<<i+1<<": ";
		cin.getline((puntero_alumno+i)->nombre, 50, '\n');
		cout<<"Digite la edad del alumno "<<i+1<<": ";
		cin>>(puntero_alumno+i)->edad;
		cout<<"Digite el promedio del alumno "<<i+1<<": ";
		cin>>(puntero_alumno+i)->promedio;
		if(maxProm<(puntero_alumno+i)->promedio){
			maxProm = (puntero_alumno+i)->promedio;
			pos = i;
		}
		cout<<endl;
		fflush(stdin);
	}
	
	cout<<"---Alumno con mayor promedio---"<<endl;
	cout<<"Alumno: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
	
}

/*Ejercicio 12: Defina una estructura que indique el 
tiempo empleado por un ciclista en recorrer una etapa. 
La estructura debe tener tres campos: horas, minutos y segundos.  
Escriba un programa que dado 3 etapas calcule el tiempo 
total empleado en correr todas
las etapas.
NOTA: Usar punteros.*/
void pedirDatosCiclista(){
	cout<<"Digite nombre ciclista: ";
	cin.getline(puntero_ciclista->nombre, 50, '\n');
	cout<<"Digite los tiempos empleados"<<endl;
	for(int i=0;i<3;i++){
		cout<<"Datos de la etapa ["<<i+1<<"]"<<endl;
		cout<<"Horas: "; cin>>(puntero_etapa+i)->hora;
		cout<<"Minutos: "; cin>>(puntero_etapa+i)->minuto;
		if((puntero_etapa+i)->minuto >= 60){
			(puntero_etapa+i)->hora++;
			(puntero_etapa+i)->minuto -= 60;
		} 
		cout<<"Segundos: "; cin>>(puntero_etapa+i)->segundo;
		if((puntero_etapa+i)->segundo >= 60){
			(puntero_etapa+i)->minuto++;
			(puntero_etapa+i)->segundo -= 60;
		}
	}
}

void calcularTiempo(TiempoEtapa *puntero_etapa){
	int tHoras=0, tMinutos=0, tSegundos=0;
	for(int i=0;i<3;i++){
		tHoras += (puntero_etapa+i)->hora;
		tMinutos += (puntero_etapa+i)->minuto;
		if(tMinutos >= 60){
			tHoras++;
			tMinutos -=60;
		}
		tSegundos += (puntero_etapa+i)->segundo;
		if(tSegundos >= 60){
			tMinutos++;
			tSegundos -= 60;
		}
	}
	cout<<endl<<"***Score de ciclista***"<<endl;
	cout<<"Cliclista: "<<*puntero_ciclista->nombre<<endl;
	cout<<"Horas: "<<tHoras<<endl;
	cout<<"Minutos: "<<tMinutos<<endl;
	cout<<"Segundo: "<<tSegundos<<endl;
}

