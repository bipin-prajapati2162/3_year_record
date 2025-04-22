#include<stdio.h>
#include<math.h>
int main(){
    float fahrenheit ,celcius;
    int n;
    printf("welcome to temperature conversion program\n For celcius to farenheit enter 1 \nAND\nFor farenheit to celcius enter 2\n");
    printf("enter the no = ");
    scanf("%d",&n);
    
    if (n==1){
        printf("enter the celcius temperature= ");
        scanf("%f",&celcius);
        fahrenheit=(1.8*celcius)+32;
        printf("fahrenheit= %f",fahrenheit);

    }
    else if(n==2) {
        printf("enter the farenheit temperature =");
        scanf("%f",&fahrenheit);
        celcius=(fahrenheit-32)/1.8;
        printf("celcius= %f",celcius);


    }
    
    return 0;
}
