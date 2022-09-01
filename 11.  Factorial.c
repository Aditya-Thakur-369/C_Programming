#include<stdio.h>
main(){
	int n,i;
	unsigned long long fact = 1;
	printf("Enter any positive Integer : ");
	scanf("%d",&n);
	if(n<0){
		printf("ERROR PLEASE ENTER A POSITIVE INTEGER ");
	}
	else{
		for(i = 1;i<=n;++i){
			fact = fact * i;
		}
		printf("Factorial of %d = %llu",n,fact);
	}
	return 0;
}