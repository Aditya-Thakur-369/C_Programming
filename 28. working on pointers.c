#include<stdio.h>
main(){
	int p;
	int *num;
	p = 5 ;
	num = p ;
	printf(" Values of P  : %d \n",p);
	printf("The Address Of P is : %d \n",&p);
	printf(" Values of : %d \n",num);
	printf("The Address of num is : %d ",&num);
	
}