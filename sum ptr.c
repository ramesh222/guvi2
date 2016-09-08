#include<stdio.h>
int main()
{
int *ptr1,*ptr2;
int a,b;
printf("enter the two numbers");
scanf("%d %d",a,b);
ptr1=&a;
ptr2=&b;
int sum;
sum=*ptr1+*ptr2;
printf("sum is %d",sum);
return 0;
}
