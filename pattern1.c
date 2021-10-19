#include<stdio.h>
int main(){
	int a=0,b=0;
	printf("Enter a number to multiply : ");
	scanf("%d",&a);
	printf("Enter another number to multiply with %d :",a);
	scanf("%d",&b);
	int c=a*b;
	printf("%d * %d = %d\n",a,b,c);

}
