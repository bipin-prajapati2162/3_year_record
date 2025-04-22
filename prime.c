#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter the no= ");
    scanf( "%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;

        }
    

    }
    
    if(count==2){
        printf("is a prime");

    }
    else{
        printf("is not prime no");
    }
    return 0;
}
