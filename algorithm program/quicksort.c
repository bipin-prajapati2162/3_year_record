#include<stdio.h>
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
	printf("%d\t %d\n",*a,*b);
}
int partition(int arr[], int low, int high){
	int pivot = arr[high];
	printf("pivot %d\n",pivot);
	int i=(low-1);
	int j;
	for (j=low; j<=high-1;j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
			
			
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
	
}

void quicksort(int arr[],int low, int high){
	if(low<high){
		int pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}

int main(){
	int arr[]={56,32,9,35,45,85,25,35,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	
}
