#include<stdio.h>
int Factorial();
main(){
	Factorial(5);
}
int Factorial(int n){
	int i;
	unsigned long long fact = 1;
	if(n<0){
		printf("ERROR PLEASE ENTER A POSITIVE INTEGER ");
	}
	else{
		for(i = 1;i<=n;++i){
			fact = fact * i;
		}
		printf("Factorial of %d = %llu",n,fact);
	}
}