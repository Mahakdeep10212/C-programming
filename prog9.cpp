// a program to print the Fibonacci series up to n terms.
#include<stdio.h>
int main(){
	int a=0,b=1,n,f;
	printf("enter the nth value:");
	scanf("%d",&n);
	printf("%d",a);
	printf("%d",b);
	int i;
	for(i=2;i<=n;i++){
	f=a+b;
	printf("%d",f);
	a=b;
	b=f;
	}
	

}

