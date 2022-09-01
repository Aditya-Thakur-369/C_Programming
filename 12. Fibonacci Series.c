#include<stdio.h>
main(){
	int i,n;
	int num1=0 , num2=1;
	int num3 = num1 + num2;
    printf("Enter Any Number : ");
    scanf("%d",&n);
    for(i = 3; i <= n; ++i){
    	printf("Fibonacci Series : %d, %d ",num1,num2);
    	printf(" : %d\n",num3);
    	num1 = num2;
    	num2 = num3;
    	num3 = num1 + num2;
	}
	return 0;
}