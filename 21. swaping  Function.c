#include<stdio.h>
int swaping();
main(){
	int a = 12 , b = 25 ;
	printf("Original Values are --> %d and %d \n",a,b);
	swaping( a , b );
    
}
int swaping(int a , int b){
	int temp;
	temp = a ;
	a = b ; 
	b = temp ;
	printf("The swaped Values are --> %d and %d ",a,b);
}