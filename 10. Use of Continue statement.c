#include<stdio.h>
main(){
	int num=10;
	for(int i =1; i<=num;i++)
	{
		if(i == 6){
			continue;
		}
	    printf("%d Hello World \n",i);   
	}
	return 0;
}