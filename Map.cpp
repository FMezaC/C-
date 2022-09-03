#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void mapAgenda();
void mapCapitales();

int main() {
    
    mapCapitales();
    
    return 0;
}

void mapAgenda(){
	/* Enter your code here. Read input from STDIN. 
	Print output to STDOUT */   
    int n;
    string nombre;
    long numero;
	cin >> n;
	cin.ignore();
	map < string, long > PhoneBook;
	
    for(int i=0;i<n;i++){
    	cin >> nombre;
    	cin >> numero;
    	PhoneBook[nombre] = numero;
	}
    
    while(cin >> nombre){
    	if(PhoneBook.find(nombre) != PhoneBook.end()){
    		cout << nombre << "=" << PhoneBook.find(nombre)->second << endl;
		}
		else{
			cout << "Not found" << endl;
		}
	}
}


void mapCapitales(){
	int n;
	string pais, capital;
	cout << "Ingrese numero de paises: ";
	cin >> n;
	cin.ignore();
	map < string, string > Capitales;
	for(int i=0; i<n; i++){
		cout << "Ingrese pais: ";
		cin >> pais;
		cout << "Ingrese capital: ";
		cin >> capital;
		Capitales[pais] = capital;
	}
	
	while(cin >> pais){
		if(Capitales.find(pais) != Capitales.end()){
			cout << pais << "=" << Capitales.find(pais)->second << endl;	
		}
		else{
			cout << "No encontrado" << endl;
		}
	}
}
