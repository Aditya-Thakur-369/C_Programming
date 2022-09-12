#include <stdio.h>
int adddigits();
int main(){
	int num = 1234 ;
	int ans = adddigits(num);
	printf("Sum of digits in %d is %d ",num , ans );
}

int adddigits(int n ){
   if(n==-0)
   return 0;
   return (n%10 + adddigits (n /10));
}


