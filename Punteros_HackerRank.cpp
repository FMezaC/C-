// importante el namespace y el iostream
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/*The function is declared with a void return type, so 
there is no value to return. Modify the values in 
memory so that  contains their sum and  contains 
their absoluted difference.
	*a' = |a+b|
	*b' = |a-b|
	
	-> input
		-> 4
		-> 5
	-> output
		-> 9
		-> 1
*/
void update(int *a,int *b) {
    // Complete this function
    int sum=0, rest=0;
	 sum = *a+*b;
	 rest = (*a-*b >0) ? *a - *b : -(*a -*b);
	 *a=sum;
	 *b=rest;
}

