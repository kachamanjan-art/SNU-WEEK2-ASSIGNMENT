#include<stdio.h>
int main(){
	 double fahrenheit,celsius;
	 
	 printf("enter the temperature in fahrenheit: ");
	 scanf("%lf",&fahrenheit);
	 
	 celsius=(fahrenheit-32)*5/9;
	 
	 printf("\n---conversion result---\n");
	 printf("fahrenheit: %2f F\n",fahrenheit);
	 printf("celsius: %2f C\n",celsius);
	 
	 return 0;
	 
}
