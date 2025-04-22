#include<stdio.h>
int main(){
	int n,a=0,b=1,c,i;
	printf("enter the range of factorial= ");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	
	for(i=0;i<=n;i++){
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
		
	}
	return 0;
}
