#include<stdio.h>
int main(){
	int a[50];
	int i,n,sum=0;
	printf("enter your range of data= ");
	scanf("%d",&n);
	printf("enter your data = \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
	return 0;
	
}
