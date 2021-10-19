//program to print stars in upside equilateral triangle pattern

#include<stdio.h>
int main(){
	int i,j,k;
	int a=7;
	for(i=1;i<=a;i++){
            //to print spaces in reverse triangle
        for(j=a-i;j>=1;j--){
            printf(" ");
        }
            //to print stars in triangle
        for(k=1;k<=(2*i)-1;k++){
            printf("*");
        }
            //to move next line
        printf("\n");
	}
    return 0;
}
