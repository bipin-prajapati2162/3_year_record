#include <stdio.h>



int main (){
	int i, j,n, min,temp;
	int data[]={3,4,6,2,1,6,7};
	n=sizeof(data)/sizeof(data[0]);
	for (i=0;i<n-1;i++){
		min=i;
		for (j=i+1;j<n;j++){
			if(data[j]<data[min]){
				min=j;
			}
		}
		temp=data[i];
		data[i]=data[min];
		data[min]=temp;
		
	}
	printf("array is \n");
	for(i=0;i<n;i++){
		printf("%d\t",data[i]);
	}
	return 0;
}
