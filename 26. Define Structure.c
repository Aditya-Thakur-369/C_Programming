#include<stdio.h>
// <== Glowal Structure ==> 
struct example{
	char Name[20];    // String 
	char course[10];  // String 
	int Number;       // intiger typer
	float percentage; // float 
    char Grade;       // Charactor
} e  ; // we can call structure by this values 
main(){
	printf("Enter Your Name  -->  ");
	scanf("%s",&e.Name);
	printf("Enter Your Course --> ");
	scanf("%s",&e.course);
	printf("Enter Your Number --> ");
	scanf("%d",&e.Number);
	printf("Enter Your Percentage --> ");
	scanf("%f",&e.percentage);
	printf("Enter Your Grade --> ");
	scanf("%c",&e.Grade);
	printf("\n <== Your Information ==> \n");
	printf("Name --> %s\n",e.Name);
	printf("Course --> %s\n",e.course);
	printf("Number --> %d\n",e.Number);
	printf("Percentage --> %f\n",e.percentage);
	printf("Grade --> %c\n",e.Grade);
}