#include <stdio.h>
#include<conio.h>
void main()
{
int n,re;
printf("enter the number;");
scanf("%d",&n);
int rev = 0;
printf("reverse of given number is:%d",n);
while(n!=0){
	re=(n%10); 
	rev=(rev*10)+re;
//	pritnf("reverse%d",rev);
	n=n/10;
}

printf("\nreverse of given number is:%d",rev);

}




