#include<stdio.h>
int main()
{
int a,b;
scanf("%d",a);
while(a>1)
{
b=a%10;
printf("%d",b);
a=b/10;
}
return 0;
}

