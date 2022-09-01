#include <stdio.h>
main(){
	int num1,num2,num3;
	printf("Enter First number : ");
	scanf("%d",&num1);
	printf("Enter Second number : ");
	scanf("%d",&num2);
	printf("Enter Third number : ");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		printf("First number is greater ");
	}
	else if(num2>num1 && num2>num3){
		printf("Second number is greater ");
	}
	else{
		printf("Third number is greater ");
	}	
}