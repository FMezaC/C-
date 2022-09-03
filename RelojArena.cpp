#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int max=0, suma;
	int matriz[][6] = {{1,1,1,0,0,0},{0,1,0,0,0,0},{1,1,1,0,0,0},
	{0,0,2,4,4,0},{0,0,0,2,0,0},{0,0,1,2,4,0}};
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			suma =0;
			suma += matriz[i][j]+matriz[i][j+1]+matriz[i][j+2];
			suma += matriz[i+1][j+1];
			suma += matriz[i+2][j]+matriz[i+2][j+1]+matriz[i+2][j+2];
			//cout <<"Suma: " << suma << endl;
			if(suma > max || i == 0 && j == 0) max = suma;
		}
		//(suma > max) ? max = suma : max;
	}
	
	cout << max;
	
	getch();
	return 0;
}

