#include<stdio.h>
int addsum();
main(){
	addsum( 20 , 20 );
	
}
int addsum(int a ,int  b){
	int c;
	c = a + b ;
	printf("The Addition Of %d and %d Is %d ",a,b,c);
}