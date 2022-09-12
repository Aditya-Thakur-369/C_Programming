#include<Stdio.h>
//.......................... Declaring funtion .......................
int incriment();
main(){
//	........................ Assigning Values ........................
	incriment(22);
}
//..........................Creating Fuction .......................
int incriment(int a){
	a++;
	printf("Your Incriment Values Is %d",a);
}