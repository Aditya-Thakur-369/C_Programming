#include<stdio.h>
main(){
	int num = 50 ;
	int *p;
	p = &num ;
	printf("The Address Of Num Variable is %d\n",p);
	p = p + 1 ;
	printf("Increesing The Values By 1 --> %d \n",p);
//	................... Using Loop for incresing More Values ..................................
	for (int i=1;i<=5;i++){
		p++;
		printf("Increesing The Values By 1 --> %d \n",p);
	}
}