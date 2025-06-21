/*Bank Account Menu
Write a menu-driven program using a switch statement where the user can:
1 ? Check balance
2 ? Deposit money
3 ? Withdraw money
4 ? Exit */
#include<stdio.h>
int main(){
	int menu,n=0,w=0;
	int choice;
	double balance =100000000.00;
	printf("1 ? Check balance\n");
	printf("2 ? Deposit money\n");
    printf("3 ? Withdraw money\n");
    printf("4 ? Exit\n");
    printf("enter the desired :");
    scanf("%d",&choice);
    switch (choice){
    	case 1:printf("the current amount is %.2lf",balance);
    		break;
    	case 2:printf("enter the amount to deposit:");
    	       scanf("%d",&n);
    	       balance+= n;
    	       printf("%.2lf",balance);
    		break;
    	case 3:printf("enter the amount to be withdrawn");
    	       scanf("%d",&w);
    	       balance-=w;
    	       printf("%.2lf",balance);
    		break;
    	case 4:printf("Exit");
    		break;
      default:printf("error !!,enter the correct choice");
	}
}
