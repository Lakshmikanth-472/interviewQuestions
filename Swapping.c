#include<stdio.h>
//by using temp variable
int main()
{
    printf("Enter 2 numbera\n");
    int firstNum,secondNum;
    scanf("%d %d",&firstNum,&secondNum);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping A:%d B:%d",&firstNum,&secondNum);
}
//without temp variable
int main()
{
    printf("Enter 2 numbers\n");
    int firstNum,seconNum;
    scanf("%d %d ",&firstNum,&seconNum);
    firstNum=firstNum+seconNum;
    seconNum=firstNum*seconNum;
    firstNum=firstNum-seconNum;
    printf("After swapping A:%d B:%d",&firstNum,&seconNum);
}