#include<stdio.h>
main(){
	float num1,num2,c;
	int operation;
	printf("Enter First number : ");
	scanf("%f",&num1);
	printf("Enter Second number : ");
	scanf("%f",&num2);
	printf("Enter your choice : 1 (Addition) 2 (Multiplication) 3 (Divisin) 4 (Subtraction) ");
	scanf("%d",&operation);
	switch(operation){
		case 1: c = num1 + num2;
		printf("The sum of %f and %f is %f",num1,num2,c);
		break;
		case 2: c = num1 * num2;
		printf("The multiplication of %f and %f is %f",num1,num2,c);
		break;
		case 3: c = num1 / num2; 
		printf("The division of %f and %f is %f",num1,num2,c);
		break;
		case 4: c = num1 - num2;
		printf("The subtraction of %f and %f is %f",num1,num2,c);
		break;
		default: printf("Error");
	}
	return 0;
}