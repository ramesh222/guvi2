#include<stdio.h>
int main()
{
int a,b=1;
scanf("%d",a);
while(a>1)
{
b=b*a;
a--;
}
printf("factorial is %d",b);
return 0;
}
