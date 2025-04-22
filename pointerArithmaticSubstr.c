#include<stdio.h>
void main()
{
    int a[5]={2,4,3,0,-7};
    int *p=&a[0];
    int *q=&a[3];
    printf("q-p=%d\n",q-p);
    printf("p-q=%d\n",p-q);
    printf("value =%d\n",*q);
    q=q-2;
    printf("value =%d",*q);
    return 0;
    
}
