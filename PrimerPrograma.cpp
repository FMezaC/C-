//Primer programa en c++
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

int nombreNumero();
int ForLoopCase();
int push_backCase();

int main(){
	
	
	
	return 0;
}


/* Dado un entero positivo [n] si 
n <= 9 imprima el nombre del numero en ingles
si no escriba que s mayor*/
int nombreNumero(){
	int n;
	cout<<"Ingrese un numero: "; cin>>n;
	
	switch(n){
		case 1: cout<<"one"; break;
		case 2: cout<<"two"; break;
		case 3: cout<<"three"; break;
		case 4: cout<<"for"; break;
		case 5: cout<<"five"; break;
		case 6: cout<<"six"; break;
		case 7: cout<<"seven"; break;
		case 8: cout<<"eight"; break;
		case 9: cout<<"nine"; break;
		default: cout<<"graither then 9"; break;
	}
}

/*leer dos enteros positivos a y b para cada intervalo
inclusivo n[a-b] si n[a-b] es mayor a 9 entoncen
escriba par o impar segun coresponda*/
int ForLoopCase(){
	int a, b;
	string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		//cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
		if(i<=9){
			cout<<c[i]<<endl;
		}
		if(i>9){
			if(i%2==0)
				cout<<"even"<<endl;
			else
				cout<<"odd"<<endl;
		}
	}
}

//la funcion push_back cumple la funcion de colocar un valor 
//al final de un arreglo
int push_backCase(){
	int n, q, tam, valor, which, index;
	cin>>n>>q;
	vector< vector<int> > nvec;
	for(int i=0;i<n;i++){
		cin>>tam;
		vector<int> ivec;
		for(int j=0;j<tam;j++){
			cin>>valor;
			ivec.push_back(valor);
		}
		nvec.push_back(ivec);
	}
	
	for(int k=0;k<q;k++){
		cin>>which>>index;
		cout<<nvec[which][index]<<endl;
	}
}
