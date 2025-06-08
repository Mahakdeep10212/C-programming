//swap two no .using a third variable:
#include<stdio.h>
int main(){
int a,b,c;
printf("enter the values of two variable :");
scanf("%d %d",&a,&b);

c=a;
a=b;
b=c;
printf("after swap:");
printf(" value of 1st variable: %d, value of 2nd variable:%d",a,b);
return 0;	
}
