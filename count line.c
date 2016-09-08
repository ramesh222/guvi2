#include<stdio.h>
int main()
{
char a[100];
puts("enter a para");
gets(a);
int count;
for(int i=0;a[1]!='\n';i++)
{
count ++;
}
printf("total no of words %d",count);
return 0;
}
