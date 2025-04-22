#include<stdio.h>
int main(){
	int i,j,n,temp,swapped   ;
	int a[]={2,4,6,3,7,2,5};
	n=7;
	for (i=0;i<n-1;i++){
		swapped=0;
		for (j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swapped=1;
			}
		}
		if (swapped==0){
			break;
		}
	}
	for (i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
