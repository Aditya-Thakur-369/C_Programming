#include<stdio.h>
union example{
	int id;
	float percentage;
	char grade[20];
};
int main(){
    union example data ;  
    data.id = 21;
    data.percentage = 32.43;
    strcpy(data.grade,"A");

	printf("\n<== Your Information ==> \n");
	
	printf("Your Id --> %d\n",data.id);
	printf("Your Roll_no --> %f\n",data.percentage);
	printf("Your Number --> %s\n",data.grade);
}