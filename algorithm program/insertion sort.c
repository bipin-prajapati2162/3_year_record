#include<stdio.h>
int main(){
	int i,j,n,temp;
	int `a[]={2,4,6,3,7,2,5};
	n=7;
	for (i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for (i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
	
}
