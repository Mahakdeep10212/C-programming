//a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
	float celcius, faren;
	printf("value of celcius:");
	scanf("%f",&celcius);
	faren =(celcius*9/5)+32;
	printf("value when converted to fahrenheit: %.2f\n",faren);
}
