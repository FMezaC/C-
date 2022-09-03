#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n, dato;
    cin >>n;
    vector<int> numero;
    for(int i=0; i<n;i++){
    	cin>>dato;
        numero.push_back(dato);
    }
    
    int aux, pos;
    for(int j=0; j<numero.size(); j++){
        pos=j;
        aux = numero[j];
        while ((pos >0 ) && (numero[pos-1] > aux)) {
            numero[pos] = numero[pos-1];
            pos--;
        }
        numero[pos] = aux;
    }
    
    for(int x=0;x<numero.size();x++){
		cout<<numero[x]<<" ";
	}
    
    return 0;
}

