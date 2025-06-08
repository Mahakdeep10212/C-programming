//a program to print tableof input no using a loop.
#include<stdio.h>
int main(){
	int a;
	printf("enter the value whose loop is to be printed:");
	scanf("%d",&a);
	int i;
	for(i=1;i<=10;i++){
		int tab;
		tab=i*a;
		printf("%d\n",tab);
	}

}
