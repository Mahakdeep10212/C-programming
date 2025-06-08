// a program to print the factorial of a number.
#include<stdio.h>
int main(){
	int a,fact=1;
	printf("enter the value of which factorial is to calculate:");
	scanf("%d",&a);
	int i,mul;
	for(i=1;i<=a;i++){
		fact=fact*i;
	}
printf("the factorial is:%d",fact);
}
