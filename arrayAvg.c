#include<stdio.h>
int main(){
	int a[50];
	int i,n,sum=0;
	float avg=0;
	printf("enter your range of data= ");
	scanf("%d",&n);
	printf("enter your data = \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("avg=%.2f",avg);
	return 0;
	
}
