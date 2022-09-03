#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

using namespace std;
int RellenarUnaMatriz();
int diagonalPrincipal();
int CopearMatrices();
int AleatorioMatriz();
int MatrizTranzpuesta();
int sumaMatrices();
int matrizSimetrica();
int ProductoMatrices();

int main(){
	
	ProductoMatrices();
	
	getch();
	return 0;
}

/*Ejercicio 1: Hacer un programa para rellenar una matriz 
pidiendo al usuario el número de filas y columnas, Posteriormente 
mostrar la matriz en pantalla.*/
int RellenarUnaMatriz(){
	int filas, columnas;
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	int matriz[filas][columnas];
	
	for(int i=0;i<filas;i++){
		for(int k=0;k<columnas;k++){
			cout<<"Digite un numero ["<<i<<"]["<<k<<"]: ";
			cin>>matriz[i][k];
		}
	}
	
	for(int i=0;i<filas;i++){
		for(int k=0;k<columnas;k++){
			cout<<matriz[i][k]<<" ";
		}
		cout<<endl;
	}
}

/*Ejercicio 2: Realiza un programa que defina una matriz de 3x3 
y escriba un ciclo para que muestre la diagonal principal de la matriz.*/
int diagonalPrincipal(){
	int matriz[3][3] = {{1,2,5},{1,3,4},{9,3,4}};
	cout<<"Diagonal principal de la matriz es: "<<endl;
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			if(i==k){
				cout<<matriz[i][k]<<" ";
			}
		}
		cout<<endl;
	}
}

/*Ejercicio 3: Hacer una matriz de tipo entera de 2 * 2, 
llenarla de números y luego copiar todo su contenido 
hacia otra matriz. */
int CopearMatrices(){
	int matriz[2][2] = {{1,2},{3,4}};
	int copia[2][2];
	for(int i=0;i<2;i++){
		for(int k=0;k<2;k++){
			copia[i][k]=matriz[i][k];
			cout<<copia[i][k]<<" ";
		}
		cout<<endl;
	}
}

/*Ejercicio 4:  Hacer una matriz preguntando al usuario 
el numero de filas y columnas,llenarla de números aleatorios, 
copiar el contenido a otra matriz y por último mostrarla en pantalla.*/
int AleatorioMatriz(){
	int filas, columnas;
	cout<<"Ingrese el numero de filas: "; cin>>filas;
	cout<<"Ingrese el numero de columnas: "; cin>>columnas;
	int matriz[filas][columnas];
	srand(time(NULL)); //aleatorio
	for(int i=0;i<filas;i++){
		for(int x=0;x<columnas;x++){
			matriz[i][x] = 1 + rand()%(100);
			cout<<matriz[i][x]<<" ";
		}
		cout<<endl;
	}
}

/*Ejercicio 5: Realice un programa que lea una matriz de 3x3 
y cree su matriz traspuesta. La matriz traspuesta es aquella 
en la que la columna i era la fila i de la matriz original.*/
int MatrizTranzpuesta(){
	int matriz[3][3] = {{20,21,74},{75,2,18},{55,35,13}};
	int transpuesta[3][3];
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			transpuesta[i][k] = matriz[k][i];
			cout<<transpuesta[i][k]<<" ";
		}
		cout<<endl;
	}
}

/*Ejercicio 6: Realice un programa que calcule la suma de 
dos matrices cuadradas de 3x3.*/
int sumaMatrices(){
	int vector1[3][3] = {{2,1,7},{5,2,8},{5,3,1}};
	int vector2[3][3] = {{20,21,74},{75,2,18},{55,35,13}};
	int sumaMatriz[3][3];
	cout<<"---Suma de matriz---"<<endl;
	for(int i=0;i<3;i++){
		for(int x=0;x<3;x++){
			sumaMatriz[i][x]= vector1[i][x] + vector2[i][x];
			cout<<sumaMatriz[i][x]<<" ";
		}
		cout<<endl;
	}
}

/*Ejercicio 7: Desarrollar un programa que determine si una 
matriz es simétrica o no. Una matriz es simétrica si es 
cuadrada y si es igual a su matriz transpuesta.*/
int matrizSimetrica(){
	int filas, columnas;
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	int matriz[filas][columnas];
	int contador=0;
	for(int i=0; i<filas; i++){
		for(int x=0; x<columnas; x++){
			cout<<"Matriz ["<<i<<"]["<<x<<"]: ";
			cin>>matriz[i][x];
		}
	}
	if(filas == columnas){
		for(int z=0;z<filas;z++){
			for(int y=0; y<columnas; y++){
				if(matriz[z][y] == matriz[y][z]){
					contador++;
				}
			}
		}
		if(contador == (filas * columnas)){
			cout<<"La matriz es simetrica";
		}
		else{
			cout<<"La matriz no es simetrica";
		}
	}
	else{
		cout<<"La matriz no es simetrica";
	}
}

/*Ejercicio 8: Realice un programa que calcule el producto 
de dos matrices cuadradas de 3x3. */
int ProductoMatrices(){
	int vector1[3][3] = {{2,0,1},{3,0,0},{5,1,1}};
	int vector2[3][3] = {{1,0,1},{1,2,1},{1,1,0}};
	int matriz[3][3];
	cout<<"Producto de dos matrices cuadradas"<<endl;
	for(int i=0; i<3; i++){
		for(int x=0; x<3; x++){
			int suma=0;
			for(int r=0; r<3; r++){
				suma += (vector1[i][r]* vector2[r][x]);
				matriz[i][x] = suma;
			}
			cout<<matriz[i][x]<<" ";
		}
		cout<<endl;
	}
}

