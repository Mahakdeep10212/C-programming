//a program to find the largest of three numbers.
#include<stdio.h>
int main(){
	int a, b, c;
	printf(" enter the the values of three variables: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c){printf("a is greater");
	}
	else if(b>a &&b>c){printf("b is greater");
	}
	else{printf("c is greater");
	}
	
}
