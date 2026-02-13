#include <stdio.h>

int main() {
	int a,b,add,sub,mult,divi,mod;

	printf("Enter a and b :");
	scanf("%d%d",&a,&b);
	
	add=a+b;
	sub=a-b;
	mult=a*b;
	divi=a/b;
	mod=a%b;
	
	printf("Addition is %d \n",add);
	printf("Subtraction is %d \n",sub);
	printf("Multiplication is %d \n",mult);
	printf("Division is %d \n",divi);
	printf("Remainder is %d \nde",mod);
	
	return 0;

}