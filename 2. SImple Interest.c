#include<stdio.h>
main(){
	int simple_interest , p , t , r ;
	printf("Enter your p : ");
	scanf("%d",&p);
	printf("Enter your t : ");
	scanf("%d",&t);
	printf("Enter your r : ");
	scanf("%d",&r);
	simple_interest = (p*t*r)/100;
	printf("The simple interest of %d %d %d is %d",p,t,r,simple_interest);
}