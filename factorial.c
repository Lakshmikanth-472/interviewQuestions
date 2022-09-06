#include<stdio.h>
int main()
{
printf("Enter a number\n");
int num;
scanf("%d",&num);
int fact=1;
int i=0;
for(i=num;i>=1;i--)
fact=fact*i;
printf("fatorial is %d\n");
return 0;
}
// 
