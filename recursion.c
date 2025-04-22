#include<stdio.h>
int sum(int x){

	
	int s=0,a ;
	if (x==1){
		return 0;
		
	}
	
	s=x+sum(a-1);
	return s;
}
void main(){
	int a;
	a=sum(5);
	printf("%d",a);
	
}
