#include<stdio.h>
int main()
{
char a[20];
printf("enter the string");
gets(a);
int count;
for(int i=0;a[1]!='\0';i++)
{
count ++;
}
printf("total no of strings %d",count);
return 0;
}
