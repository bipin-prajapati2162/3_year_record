#include<stdio.h>
int main(){
	int a[3][3],b[3][3],i,j;
	printf("enter first  matrix elements = \n");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("first matrix is = \n");
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		
	}
	printf("\n transpose of a matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
			
		}
		
	
	
	return 0;
}
