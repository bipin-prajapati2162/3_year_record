#include<stdio.h>
int fun(int*,int*);
int main() {
	int x=5,y=7;
	fun(&x,&y);
	printf("inside main(calling function)\n");
	printf("x=%d y=%d \n",x,y);
	int fun(int*x,int*y){
		*x=7;
		*y=5;
		printf("inside fun(call funtion)\n");
		printf("x=%d y=%d \n",*x,*y);
		return 0;
	}
}
