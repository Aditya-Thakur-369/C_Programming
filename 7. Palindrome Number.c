#include<stdio.h>
main(){
	int num, original, remainder, sum=0;
	printf("Enter any number : ");
	scanf("%d",&num);
	original=num;
	while(num>0){
		remainder = num % 10;
		sum = (sum * 10) + remainder;
		num = num /10;
	}
	if(sum == original){
		printf("Palindrome number ");
	}
	else{
		printf("Not a palindrome number ");
	}
}