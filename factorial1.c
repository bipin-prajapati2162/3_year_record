#include<stdio.h>
int main(){
	int n,fact=1,i;
	printf("enter the no of factorial= ");
	scanf("%d",&n);
	if(n<0){
		printf("factorial is not define");
		
	}
	else{
		for (i=1;i<=n;i++){
			fact=fact*i;
			
		}
	}
	printf("factorial=%d",fact);
}
