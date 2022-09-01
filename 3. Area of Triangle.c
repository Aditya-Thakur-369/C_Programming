#include <stdio.h>
main(){
	float base , height , area ;
	printf("Enter the base of the triangle : ");
	scanf("%f",&base);
	printf("Enter the height of the triangle : ");
	scanf("%f",&height);
	area = (base * height) / 2 ;
	printf("Area of Triangle is %2f",area);
}